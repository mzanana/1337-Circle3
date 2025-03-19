<h1 align = "center" >Push Swap</h1>

![from PDF](https://i.imgur.com/x9fIenY.png)

![from pdf also](https://i.imgur.com/47oVa3Q.png)

# Data Structures

#### When the **Data** becomes **Information**
The data is just a collection of characters, but after processing it, it becomes an information.  
Example :  
+ Data => ananazm si eman ym
+ Information =>  my name is mzanana
After reversing the data it becomes information.

**Data Structure** gives us the way to struct the data to appropriately manage it so it can be an information and used **efficiently**.

## Types of data structures
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

If f(n) and g(n) are two functions, then :  
**f(n) = O(g(n))**  
If there exists constants c and a such that 
**f(n) <= c.g(n) , for all n > a**

Example :  
<p align = "center">
	<img src = "https://i.imgur.com/XWO3VaK.png" width = "500">
</p>

Big O notation eliminates all the unnecessary terms from the function which are not contributing much in the overall running time

<p align = "center">
	<img src = "https://i.imgur.com/Tb6bqht.jpeg" width = "500">
</p>

## Structures 
We have to get data for a cars as engine, fuel_type, seating_cap ...   
as you notice that the data here had different types. We need to have 10 variable of char * for engine, 10 others for the fuel type, 10 other integer data type for the seating cap ... This is just waste of the memory and having a long code.   
#### Why not having one data type that contain the whole information of the car.

A **structure** is a user defined data type that can be used to group elements of different types into a single type.  

**Syntax of a structure**   
<p align = "center">
	<img src = "https://i.imgur.com/kab0yPt.png" width = "350">
</p>
 
+ `s_car` is the struct tag and used to identify a particular kind of struct, without `typedef` we need to declare our variable using : `struct s_car car1, car2, ... ;`   
+ `typedef` gives the user the ability to edit any type name, for example `typedef int INTEGER` so from now on we can declare a variable using `INTEGER x;` in our case to not declare our variable `struct s_car car1;` we can declare it just using `t_car car1;`  

 **Access the members** using dot `.`  

```C
typedef struct s_test
{
	int       x;
	char      *str;
}t_test;

int main()
{
	t_test t1, t2;

	t1.x = 14;
	t2.str = "Hello world";
	
}
```

 **Access the members** of a struct pointer using array sign  `->`  
 ```C
typedef struct s_test
{
	int       x;
	char      *str;
}t_test;

void print(t_test *ptr)
{
	printf(" %d %s", ptr->x, ptr->str);
}

int main()
{
	t_test t1 = {25, "Hello world"};
	
	printf(&t1);
	// the output in our case is : 25
}
```

`pt1->x` is equivalent to `(*pt1).x` which is `(*&t1).x` that refers to `t1.x`  that equal 25.

# Linked List

#### Self referential structures 
They are those structures that contain at least one pointer to the the same type of the structure   
```c
struct self
{
	int p;
	struct self *ptr;
};
```

## Single Linked List

<p align = "center">
	<img src = "https://i.ibb.co/h1yKSPdR/image.png" width = "500">
</p>

A single linked list is a list made up of nodes that consist of two parts :  **data** and **link** as a pointer to the next  
**why not using arrays ?**  
Arrays also can be used to store a group of elements, but we can store just the data with the **same** data type, also the table is stored in consecutive memory allocation.  

### Create the node of a single linked list

```C
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

int main()
{
	struct node *head;

	head = NULL;
	head = malloc (sizeof(struct node));
	head->data = 30;
	head->next = NULL;
}
```

### Create the simple linked list

Let's create exactly the linked list shown on this picture  
<p align = "center">
	<img src = "https://i.ibb.co/h1yKSPdR/image.png" width = "500">
</p>

```C
#include<stdlib.h>

struct node
{
	char data;
	struct node *next;
};

int main ()
{
	struct node *head, *current;

	head = malloc(sizeof(struct node));
	head->data = 'A';
	head->next = NULL;

	current = malloc(sizeof node);
	current->data = 'B';
	current->next = NULL;

	head->next = current;
	
	current = malloc(sizeof node);
	current->data = 'C';
	current->next = NULL;

	head->next->next = current;

	current = malloc(sizeof node);
	current->data = 'D';
	current->next = NULL;

	head->next->next->next = current;
}
``` 

### Traversing and Counting a linked list

Traversing the linked list means we gonna pass by each node until we reach the null pointer.  
Our job is to calculate the total number of nodes :  
```C
int    ft_lstcnt(struct node *list)
{
	int i;
	struct node *cnt;

	if (list == NULL)
		return (0);
	cnt = list;
	i = 0;
	while(cnt)
	{
		i++;
		cnt = cnt.next;
	}
	
	return (i);
}
```

### Printing the data

```C
void    ft_lstprint(struct node *list)
{
	struct node *current;

	if (list == NULL)
		return ;
	current = list;
	while(current)
	{
		printf("%c ", current->data);
		current = current.next;
	}
}
```

### Insert a node at the end of the linked list

```C
void add_end(struct node **list, struct node *new)
{
	struct node *temp;

	if (!*list)
	{
		*list = new;
		new->next = NULL;
		return ;	
	}
	temp = *list;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	new->next = NULL;
}
```

### Insert at the beginning of the linked list

```C
void add_beginning(struct node **list, struct node *new)
{
	if (!*list)
	{
		*list = new;
		new->next = NULL;
		return ;	
	}
	new->next = *list;
	*list = new;
}
```

### Insert node at certain position

```C
void add_exact(struct node **list, struct node *new, int pos)
{
	struct node *temp;
	struct node *prev;
	int len;
	int i;
	
	temp = *list;
	prev = *list;
	len = ft_lstcnt(temp);
	if (pos > len || pos <= 0)
		return ;
	if (pos == 1)
	{
		new->next = *list;
		*list = new;
		return ;
	}
	i = 1;
	while (i < pos)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	new->next = temp;
	prev->next = new;
}
```

### Delete the first node

```C
void delete_first(struct node **list)
{
	struct node *temp;

	if (!*list)
		return ;
	temp = *list;
	*list = (*list)->next;
	free(temp);
	temp = NULL;
}
```

### Delete the last node

```C
void delete_last(struct node **list)
{
	struct node *temp;
	struct node *prev;

	temp = *list;
	prev = NULL;

	if (!*list)
		return ;
	if (!(*list)->next)
	{
		free(temp);
		return ;
	}
	while (temp->next)
	{
		prev = temp;
		temp = temp->next;
	}
	prev->next = NULL;
	free (temp);
}
```

### Delete node at particular position 

```C
void delete_exact(struct node **list, int pos)
{
	struct node *temp;
	struct node *prev;
	int i;
	int len;

	if (!*list)
		return ;
	temp = *list;
	len = ft_lstcnt(temp);
	if (pos > len || pos <= 0)
		return ;
	if (pos == 1)
	{
		*list = temp->next;
		free(temp);
		return ;
	}
	i = 1;
	prev = NULL;
	while (i < pos)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	prev->next = temp->next;
	free(temp);
}
```

### Delete the entire list

```C
void delete_entire(struct node **list)
{
	struct node *temp;
	
	while (*list)
	{
		temp = *list;
		*list = (*list)->next;
		free(temp);
	}
}
```


### Reverse a Single Linked List

```C
struct node
{
	char data;
	struct node *next;
};

void rev_list(struct node **list)
{
	struct node *prev;
	struct node *adv;

	prev = NULL;
	adv = *list;

	while (*list)
	{
		adv = (*list)->next;
		(*list)->next = prev;
		prev = *list;
		*list = adv;
	}
	*list = prev;
}
```


## Doubly linked list

A linked list that it's structure contain the an extra pointer that point to the previous node 

![doubly linked list example](https://i.imgur.com/FWS8SH3.png)  


### The struct of a doubly linked list
```C
typedef struct s_node
{
	struct s_node *prev;
	void          *data;
	struct s_node *next;
}t_node;
```

### Insertion at the beginning

```C
void insert_beg(t_struct **head, t_struct *new)
{
	new->next = *head;
	(*head)->prev = new;
	*head = new;
}
```

### Inserting at the end

```C
void insert_end(t_struct **head, t_struct *new)
{
	t_struct *curr;

	curr = *head;
	while (curr->next)
		curr = curr->next;
	curr->next = new;
	new->prev = curr;
}
```

### Insert at certain position

```C
void insert_pos(t_struct **head, t_struct *new, int pos)
{
	t_struct *curr;
	t_struct *pre;
	
	int       i;
	int       len;

	curr = *head;
	pre = *head;
	len = ft_len(curr);
	if (!new)
		return ;
	if (!(*head) && pos == 0)
	{
		insert_beg(*head, new);
		return ;
	}
	if (pos > len || pos <= 0)
		return ;
	if (pos == 1)
	{
		new->next = *head;
		(*head)->previous = new;
		*head = new;
		return ;
	}
	i = 1;
	while (i < pos)
	{
		pre = curr;
		curr = curr->next;
		i++;
	}
	if (curr)
		curr->prev = new;
	new->next = curr;
	new->prev = pre;
	pre->next = new;	
}
```

### Delete the first node

```C
#include <stdlib.h>
void ft_delete_first(t_struct **head)
{
	t_struct *temp;
	
	if (!head || !(*head))
		return ;
	temp = *head;
	*head = (*head)->next;
	if (*head)
		(*head)->prev = NULL;
	free (temp);
}
```


### Delete the last node

```C
void ft_delete_last(t_struct **head)
{
	t_struct *curr;

	if (!head || !(*head))
		return ;
	curr = *head;
	if (!(curr->next))
	{
		free (curr);
		*head = NULL;
		return ;
	}
	while (curr->next)
		curr = curr->next;
	curr->prev->next = NULL;
	free (curr);
}
```


### Delete at certain position
```C
void ft_del_pos(t_struct **head, int pos)
{
	int i;
	int len;
	t_struct *curr;
	t_struct *pre;

	if (!head || !(*head))
		return ;
	curr = *head;
	pre = NULL;
	len = ft_len(curr);
	if (pos > len || pos <= 0)
		return ;
	if (pos == 1)
		ft_delete_first(head);
	i = 1;
	while (i < pos)
	{
		pre = curr;
		curr = curr->next;
		i++;
	}
	if (curr->next)
		curr->next->prev = pre;
	pre->next = curr->next;
	free (curr);
}
```



### Reverse Doubly Linked list

```C
void ft_reverse_dl(t_struct **head)
{
	t_struct *curr;
	t_struct *temp;

	if (!head || !(*head))
		return ;
	curr = *head;
	while (curr)
	{
		temp = curr->prev;
		curr->prev = curr->next;
		curr->next = temp;
		curr = curr->prev;
	}
	if (temp)
		*head = temp->prev;
}
```

## Stacks
<p align = "center">
	<img src = "https://camo.githubusercontent.com/6af5591c50befa7e7979f144dccb4e91bc633021b010dd8466e8ecde3a021e70/68747470733a2f2f692e696d6775722e636f6d2f78634a4e35624b2e706e67" width = "500">
</p>

### Definition

A stack is a linear data structure in which insertions and deletions are allowed only at the end, called the top of the stack, the order is referred to as **LIFO** "Last In First Out"
<p align = "center">
	<img src = "https://camo.githubusercontent.com/659ac001d63cacb67b690095f3c3ee4663ef7184d7738356fc091baa5b1533f5/68747470733a2f2f692e696d6775722e636f6d2f41724e546267442e706e67" width = "550">
</p>
+ Any object can be **accessed** only from the top.  
+ Any object can be **added** only at the top.

### Stack as an **ADT**  

**ADT** ?  
Abstract Data Types are like user defined data types which defines operations on values using functions without specifying what is there inside the function and how the operations are performed.  