# Knowledge before start coding

## Bit Shift operations

We have **right** and **left** shift operations, they are used to shift the bits of the first operand by the number of positions specified  by the second.  
### Left shifting 

<p align = "center">
	<img src = "https://i.imgur.com/jhCEk80.png" width = "500">
</p>

```c
int main() {
  
    // a = 21(000010101)
    unsigned char a = 21;

    // The result is 00101010 equivalent to 42
    printf("a << 1 = %d\n", (a << 1));

    return 0;
}
```

The right shifting help us to multiply the number given by `2^n`, in our example we shift 21 by 1 so the result gonna be `21 * (2^1) = 21 * 2 = 42`  and this method is much faster than the normal multiplication.     
### Right shift

Right shifting is the opposite of the left shifting, instead of multiplying the input the right shifting divide the input by `n^2`.  
For example `16 >> 1` become `4` and to visualize it on bits its : `00001000` -> `00000100` so our input `16` became `4`    
<p align = "center">
	<img src = "https://i.imgur.com/XFbPwRQ.png" width = "500">
</p>

**Syntax :** `a >> b`   where,
- **`a`** is the integer value to be shifted.
- **`b`** specifies how many positions to shift the bits.  

### Assignment and Shifting

Let's say that we have an integer `int x = 118`; and using just the same variable and with the shift operations change the value of `x` for example to `3`   
`x = x >> 5` equivalent to `x >>= 5`  

## Bitwise operators

Before dive into the bitwise operators, they are like any other operator like addition, dividing and so on.   
### AND operator & 
The first thing that comes to your head is the **logical** AND operator &&, but when working with a single & we mean that we want the Bitwise operator   
The best way understand something is to now how it works deeply. let's see the next example :  
**what is `10 & 11` ??**  
we need to think of the base 2 of those numbers   
```
let's say we work in just one byte, so 
10 ======> 00001010
11 ======> 00001011
after checking the truth table we notice that only 1 & 1 which equal to 1, so :
10 & 11 => 00001010 => 10
```
<p align = "center">
	<img src = "https://i.imgur.com/gP3MQnV.png" width = "350">
</p>

### Bitwise OR | 
Similar to bitwise AND, only the truth table that changes 
<p align = "center">
	<img src = "https://i.imgur.com/x7m1Xb1.png" width = "350">
</p>





To send a signal to another process we use the function `kill` declared on the `signal.h` library,  for example `kill(pid, SIGKILL);` here we send a kill signal to the `pid` process   

How can we change the behavior of a signal ???  
we have to use a **struct** named `struct sigaction sa` that is inside the `string.h` library    
And inside the sigaction we can tell it how to handle the signals 

Inside the sigaction a function we can tell it how to **handle** the signal , so we gonna set up the function that is going to be called whenever we receive a certain signal and its a **pointer to a function**. so we pass the reference to the function we wanna  use,  

and then we need to hook our sigaction to the proper signal, and here where we gonna use the `sigaction()` which take the signal integer and then a reference to  our variable to store data needed and last parameter is for backup the old sigaction if any previous is already been 

```C
#include <signal.h>

void handlesig(int sig)
{
	 ...
}

int main ()
{
	struct sigaction sa;

	sa.sa_handler = &handlesig;
	sigaction(SIGTSTP, &sa, NULL);
}
```

So in our case whenever we press the `Ctr Z` which use the stop signal it gonna apply whatever there is in the `handlesig` function 

## Sigaction function 

```C
int sigaction( int sig,
               const struct sigaction * act,
               struct sigaction * oact);
```

+ `sig` : the integer of the signal we want to call ;  
+ `act` : Pointer to a struct `sigaction` that contain information about handling the new signal if the original one would be modified;  
+ `oact` : Like a back-up of the current struct sigaction that contain the current signal  information;  

**Return values**  
+ `0` when success;  
+ `1` if it fails;  

the sigaction function tells the system if the sig signal is occured run the function i wrote 
## Sigaction Struct :
This is the struct that hold all the information about how to handle the signal 

```C
struct sigaction {
    void (*sa_handler)(int);         // Function to call when signal is received
    void (*sa_sigaction)(int, siginfo_t *, void *); // Used with SA_SIGINFO flag
    sigset_t sa_mask;                // Signals to block while handler runs
    int sa_flags;                    // Flags to control behavior
    void (*sa_restorer)(void);       // (Obsolete)
}; 
```

First of all we need to use the flags so the system know if the signal gonna work with the sa_handler function or the sa_sigaction function 