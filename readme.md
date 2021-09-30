# Data Structures & Algorithms

#### What is an algorithm

    An algorithm is a repeatable process for determining the solution to a problem.

![alt text](https://miro.medium.com/max/1364/1*vxEd1i8FDad9rBFqNAYBLw.png)

#### What are data structures

    Data Structures are a way to store data (so that way it can be used as desired). They are a way of collecting and organizing data in such a way that we can perform operations on these data in an effective way.

#### Type of data structures

    Array - An array is a data structure that contains a group of elements. Typically these elements are all of the same data type, such as an integer or string. Arrays are commonly used in computer programs to organize data so that a related set of values can be easily sorted or searched.

![alt text](https://miro.medium.com/max/700/1*IPzuRUImuU2rq4S8P-sRDw.png)

    Hash Table - A hash table (also called a hash map, object or dictionary) is a data structure that pairs keys to values. A hash table uses a hash function to compute an index into an array of buckets or slots, from which the desired value can be found. The idea behind a hash function is to distribute the entries (key/value pairs) across an array of buckets.

    Linked List - Linked lists are linear collections of data very much like an array, but instead of the data being arranged in one continuous block, each piece of data is linked to the next one in the chain using pointers coupled with the data.

![alt text](https://miro.medium.com/max/986/1*V9tusiMcUEltVW5Pbmn2DQ.png)

    Tree - A tree is a data structure that is made up of a set of linked nodes, that can be used to represent a hierarchical relationship among data elements. In other words how it is connected by a series of references and has a root node.

![alt text](https://miro.medium.com/max/600/1*87h2uhCJ5qztBNwfck2b6g.jpeg)

    Queue - A queue is a type of data structure, which help organize data in a particular order. A queue is a FIFO(First in First Out) data structure, which means that the element inserted first will also be removed first.

![alt text](https://miro.medium.com/max/700/1*5uTNLpGlbsJb86YpGmoXzA.png)

    Stack - A stack is also another type of data structure, which help organize data in a particular order. A stack is a LIFO (Last in First Out) data structure. It is a simple data structure that allows adding and removing elements in a particular order. Every time an element is added, it goes on the top of the stack, the only element that can be removed is the element that was at the top of the stack, just like a pile of objects.

![alt text](https://miro.medium.com/max/500/1*k1lPem8ubXVyCdEERAvDsw.jpeg)

#### How to measure an algorithm

    Time complexity
    Space complexity

### Searching

#### Linear Search

    A Linear Search is the most basic type of searching algorithm. A Linear Search sequentially moves through your collection (or data structure) looking for a matching value. In other words, it looks down a list, one item at a time, without jumping.

    n complexity terms this is an O(n) search

##### Steps how linear search works?

    Start from the leftmost element of array and one by one compare the element we are searching for with each element of the array.

    If there is a match between the element we are searching for and an element of the array, return the index.

    If there is no match between the element we are searching for and an element of the array, return -1.

#### Binary Search

    Binary Search is a type of searching algorithm. A searching algorithm means you find an item with a particular value in a sorted sequence. Binary search is a type of searching algorithm which finds an item by repeatedly halving the search space.

##### Steps how linear search works?

    Start with an array sorted in descending order.

    In each step: Pick the middle element of the array m and compare it to e. If element values are equal, then return index of m. If e is greater than m, then e must be in left subarray. If m is greater than e, then e must be in the right subarray.

    Repeat those steps on new subarray.

#### Comparison between binary search and linear search

    Binary search requires the input data to be sorted; linear search doesn't.

    Binary Search requires an ordering comparison; Linear Search only requires equality comparisons

    Binary Search has complexity O(log n); Linear search has complexity O(n) as discussed earlier

    Binary Search requires random access to the data; Linear Search only requires sequential access (this can be very important — it means a Linear Search can stream data of arbitrary size)

#### Linear Search Using Linked List

    A linked list is a sequential data structure where data is stored in a sequential manner just like an array but what makes linked list more efficient is the way it stores data.

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

    Big O Notation is the language we use to describe the complexity of an algorithm. In other words, Big O Notation is the language we use for talking about how long an algorithm takes to run. It is how we compare the efficiency of different approaches to a problem. With Big O Notation we express the runtime in terms of — how quickly it grows relative to the input, as the input gets larger.

    Being that it is difficult to determine the exact runtime of an algorithm. It depends on the speed of the computer processor. So instead of talking about the runtime directly, we use Big O Notation to talk about how quickly the runtime grows.

    If the array has n items, the outer loop runs n times and the inner loop runs n times for each iteration of the outer loop, giving us n²​​ total prints. Thus this function runs in O(n²) time (or “quadratic time”).

    Worst case scenario -  O(n) runtime and the worst case scenario would be implied. But to be more specific I could say this is worst case O(n) and best case O(1) runtime.

## Abstract Data Structure - ADT - Behavior of the structure is.

### Sorting

#### Bubble Sort

    Bubble sort is the simplest technique in which we compare every element with its adjacent element and swap the elements if they are not in order. This way at the end of every iteration (called a pass), the heaviest element gets bubbled up at the end of the list.