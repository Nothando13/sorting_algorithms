Sorting algorithms & Big O
Bubble Sort
GIF


Bubble Sort is a simple algorithm which is used to sort a given set of n elements provided in form of an array with 'n' number of elements. Bubble Sort compares all the element one by one and sort them based on their values.
If the given array has to be sorted in ascending order, then bubble sort will start by comparing the first element of the array with the second element, if the first element is greater than the second element, it will swap both the elements, and then move on to compare the second and the third element, and so on.

If we have total n elements, then we need to repeat this process for n-1 times.

Sorting takes place by stepping through all the elements one-by-one and comparing it with the adjacent element and swapping them if required.


Optimized Bubble Sort Algorithm

To optimize our bubble sort algorithm, we can introduce a flag to monitor whether elements are getting swapped inside the inner for loop. Hence, in the inner for loop, we check whether swapping of elements is taking place or not, everytime.

If for a particular iteration, no swapping took place, it means the array has been sorted and we can jump out of the for loop, instead of executing all the iterations.

Complexity Analysis of Bubble Sort

In Bubble Sort, n-1 comparisons will be done in the 1st pass, n-2 in 2nd pass, n-3 in 3rd pass and so on. So the total number of comparisons will be,


OUTPUT:
(n-1) + (n-2) + (n-3) + ..... + 3 + 2 + 1 Sum = n(n-1)/2 i.e O(n2)


Following are the Time and Space complexity for the Bubble Sort algorithm.

Worst Case Time Complexity: O(n^2) Worst case occurs whenever array is reversed
Best Case Time Complexity: O(n) Best case occurs when array is sorted
Average Time Complexity : O(n^2)
Space Complexity: O(1)
