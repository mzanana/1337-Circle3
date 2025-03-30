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

Right shifting is the opposite of the left shifting, instead of multiplying the input the right shifting divide the input by 2.  
For example `16 >> 1` become `4` and to visualize it on bits its : `00001000` -> `00000100` so our input `16` became `4`    
<p align = "center">
	<img src = "https://i.imgur.com/XFbPwRQ.png" width = "500">
</p>
