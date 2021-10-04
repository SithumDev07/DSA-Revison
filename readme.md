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

### Relationship Between Arrays and Pointers

if you assign an array to a pointer, the pointer virtually becomes the array. The pointer will contain the address of the first element of the array and it can read and write each element of the array by using pointer arithmetics and/or array-style indexing.

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

#### Selection Sort

Selection Sort is a type of sorting algorithm. A sorting algorithm is a method for reorganizing a large number of items into a specific order, such as alphabetical, highest-to-lowest value or shortest-to-longest distance.

##### How it works?

Iterate over the unsorted array, keeping track of the minimum value as you go.

When you get to the end of the array, you know which element is the minimum.

Swap the minimum element and the first element in the unsorted array.

The first element is now considered sorted.

Repeat until the rest of the array is sorted.

![alt text](https://miro.medium.com/max/270/1*2a0cRzZpoN7e7vS0sE8_rw.gif)

Regarding Time Complexity in Selection Sort, the best and worst case are the same. No matter what, selection sort has a time complexity of O(N²).

And what about Space Complexity in selection sort, it only requires 1 extra temporary variable. O(1)

##### Insertion Sort

Insertion sort is a sorting algorithm, which sorts the array by shifting the elements one at at time. It iterates the input elements by growing the sorted array at each iteration. It compares the current element with the largest value in the sorted array. If the current element is greater, then it leaves the element in its place and moves on to the next element else it finds its correct position in the sorted array and moves it to that position. This is done by shifting all the elements, which are larger than the current element, in the sorted array to one position ahead

##### How it works?

If it is the first element, it is already sorted.

Pick the next element.

Compare with all the elements in sorted sub-list.

Shift all the the elements in sorted sub-list that is greater than the value to be sorted.

Insert the value.

Repeat until list is sorted.

![alt text](https://miro.medium.com/max/700/1*_NOe6jL9veyR4yAyf85dzA.png)

##### Important characteristics of insertion sort

It is efficient for smaller data sets, but very inefficient for larger lists.

Insertion Sort is adaptive, that means it reduces its total number of steps if given a partially sorted list, hence it increases its efficiency.

Its space complexity is less. Insertion sort requires a single additional memory space.

Overall time complexity of Insertion sort is O(n2).

###### Merge Sort

Merge Sort is a divide and conquer algorithm. It works by recursively breaking down a problem into two or more sub-problems of the same or related type, until these become simple enough to be solved directly. The solutions to the sub-problems are then combined to give a solution to the original problem. So Merge Sort first divides the array into equal halves and then combines them in a sorted manner.

###### How it works?

If it is only one element in the list it is already sorted, return.

Divide the list recursively into two halves until it can no more be divided.

Merge the smaller lists into new list in sorted order.

![alt text](https://miro.medium.com/max/1200/1*nawdz45vLGeyD9zge_PpWA.jpeg)
![alt text](https://miro.medium.com/max/700/1*aJ1YiME33o0dBZTCmid7iw.png)

##### Important characteristics of merge sort

Merge Sort is useful for sorting linked lists.

Merge Sort is a stable sort which means that the same element in an array maintain their original positions with respect to each other.

Overall time complexity of Merge sort is O(nLogn). It is more efficient as it is in worst case also the runtime is O(nlogn)

The space complexity of Merge sort is O(n). This means that this algorithm takes a lot of space and may slower down operations for the last data sets.

###### Quick Sort

Quick Sort is a divide and conquer algorithm. It creates two empty arrays to hold elements less than the pivot value and elements greater than the pivot value, and then recursively sort the sub arrays. There are two basic operations in the algorithm, swapping items in place and partitioning a section of the array.

###### How it works?

Find a “pivot” item in the array. This item is the basis for comparison for a single round.

Start a pointer (the left pointer) at the first item in the array.

Start a pointer (the right pointer) at the last item in the array.

While the value at the left pointer in the array is less than the pivot value, move the left pointer to the right (add 1). Continue until the value at the left pointer is greater than or equal to the pivot value.

While the value at the right pointer in the array is greater than the pivot value, move the right pointer to the left (subtract 1). Continue until the value at the right pointer is less than or equal to the pivot value.

If the left pointer is less than or equal to the right pointer, then swap the values at these locations in the array.

Move the left pointer to the right by one and the right pointer to the left by one.

If the left pointer and right pointer don’t meet, go to step 1.

![alt text](https://miro.medium.com/max/600/1*DtH6fEdBhoUGnjBWudJ8pA.png)

##### Important characteristics of quick sort

Quick Sort is useful for sorting arrays.

In efficient implementations Quick Sort is not a stable sort, meaning that the relative order of equal sort items is not preserved.

Overall time complexity of Quick Sort is O(nLogn). In the worst case, it makes O(n2) comparisons, though this behavior is rare.

The space complexity of Quick Sort is O(nLogn). It is an in-place sort (i.e. it doesn’t require any extra storage)

##### Bubble Sort

Bubble sort is the simplest technique in which we compare every element with its adjacent element and swap the elements if they are not in order. This way at the end of every iteration (called a pass), the heaviest element gets bubbled up at the end of the list.

Bubble Sort is based on the idea of repeatedly comparing pairs of adjacent elements and then swapping their positions if they exist in the wrong order.

###### How it works?

In an unsorted array of 5 elements, start with the first two elements and sort them in ascending order. (Compare the element to check which one is greater).

Compare the second and third element to check which one is greater, and sort them in ascending order.

Compare the third and fourth element to check which one is greater, and sort them in ascending order.

Compare the fourth and fifth element to check which one is greater, and sort them in ascending order.

Repeat steps 1–5 until no more swaps are required.

![alt text](https://miro.medium.com/max/388/1*7QsZkfrRGhAu5yxxeDdzsA.png)

##### Important characteristics of bubble sort

Large values are always sorted first.

It only takes one iteration to detect that a collection is already sorted.

The best time complexity for Bubble Sort is O(n). The average and worst time complexity is O(n²).

The space complexity for Bubble Sort is O(1), because only single additional memory space is required.