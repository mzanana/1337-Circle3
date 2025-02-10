<h1 align = "center" >Push Swap</h1>

![from PDF](https://i.imgur.com/x9fIenY.png)

![from pdf also](https://i.imgur.com/47oVa3Q.png)

# Data Structures

### When the **Data** becomes **Information**
The data is just a collection of characters, but after processing it, it becames an information.  
Example :  
+ Data => ananazm si eman ym
+ Information =>  my name is mzanana
After reversing the data it becomes information.

**Data Structure** gives us the way to struct the data to appropriately manage it so it can be an information and used **efficiently**.

### Types of data structures
+ **Linear data structure** when all the elements are arranged in a linear order like **array,  Queue, Stack or linked list.** 
+ **Non linear data structure** when all the elements are not arranged in a linear order like the **Tree** or the **Graph**.
<p align = "center">
	<img src = "https://i.imgur.com/inIdBX8.png" width = "500">
</p>

## Time Complexity
### The ideal data structure
**Efficiently** data structure is always measured in term of **TIME** and **Space**.  
The **Ideal** data structure is the one that takes the least possible time for all its operations and consume the least memory space.  

Let's focus on the **Time Complexity**  
The comparison of the time complexity of the data structures based on the operations performed on them,  measuring the actual running time is not practical at all.  

<p align = "center">
	<img src = "https://i.imgur.com/Qm98KA3.png" width = "300">
</p>

#### The running time depends on the **size of inputs**
Let's take an example where we have a table of 1000 integer and we want to add a new number to the beginning of the array, we have to make 1000 shift to the left to have a place to the new number, so that's cause **1000  units of time**.  
#### Time complexity function f(n)
If the size of the input is n, then **f(n)** is a function indicate the **time complexity**,  it represents the number of instructions executed for the input value n.  
We are interested in **growth rate of f(n)**  
Let's take an example of `f(n) = 5n^2 + 6n + 12`

<p align = "center">
	<img src = "https://i.imgur.com/0uxb2ZU.png" width = "400">
</p>

We notice from the graph of the function that for **larger** value of `n`, the squared term consume almost 99%  of time. So there is no harm if we eliminate the rest of the terms.  
So the approximate time complexity is **`f(n) = 5n^2`** 
### Big O notation 
Big O notation is used to measure the performance of any algorithm by providing the order of growth of the function, it helps us finding the **growth rate** of the function without plugging in different values of N.  