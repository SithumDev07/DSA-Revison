# Data Structures & Algorithms

## Abstract Data Structure - ADT - Behavior of the structure is.

### Sorting

#### Bubble Sort

    Bubble sort is the simplest technique in which we compare every element with its adjacent element and swap the elements if they are not in order. This way at the end of every iteration (called a pass), the heaviest element gets bubbled up at the end of the list.


### Searching

#### Linear Search

    In linear search the array order is doesn't matter. The time complexity is O(n).

#### Binary Search

    In binary search when the size of array is increased by twice, the steps are only increasing by one. The time complexity is O(log n).

#### Linear Search Using Linked List

    A linked list is a sequential data structure where data is stored in a sequential manner just like an array but what makes linked list more efficient is the way it stores data.

![alt text](https://miro.medium.com/max/986/1*V9tusiMcUEltVW5Pbmn2DQ.png)

    Linked list over arrays - memory allocation

    We know that the size of an array has to be known beforehand so that restrict the further expansion of list to accommodate more elements. Now if you try out with dynamic memory allocation to an array to increase it’s size than in that case what happens is that first an empty block of memory gets allocated than all the elements from previous array gets copied to new array sequentially and this happens every time you try to expand your array size.

##### When not to use linked lists?

    The traditional indexed for loop operation for linked list traversal is very slow as in order to retrieve any element the search has to start form the beginning unlike in an array where indexed searching can be done so it’s always good to use iterator for traversing linked list.

    Indexing in array - O(1)
    Indexing in linked list - O(n) - have to traverse from the begining.

    Deleting in array - O(n)
    Deleting in linkedlist - O(1)

#### Big O

    Big O is used to denote the worst case time complexity which means how much time your algorithm will take to run in the worst case scenarios. 

    Best case scenario where this type of scenario is denoted by Big-Omega.