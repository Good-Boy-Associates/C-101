# Sorting Algorithms

This repository contains basic implementations of various sorting algorithms in C programming language.

## Algorithms Included

The following sorting algorithms are included in this repository:

- Bubble Sort
- Heap Sort
- Merge Sort
- Quick Sort

## Bubble Sort

Bubble sort is a simple comparison-based sorting algorithm. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The algorithm continues this process until the entire list is sorted.

Bubble sort has a time complexity of O(n^2), making it relatively inefficient for large lists. However, it is easy to understand and implement.

## Heap Sort

Heap sort is an efficient comparison-based sorting algorithm that uses a binary heap data structure. It builds a max-heap from the list and repeatedly extracts the maximum element, placing it at the end of the sorted portion of the list.

Heap sort has a time complexity of O(n log n) and is considered an in-place sorting algorithm, meaning it does not require additional space proportional to the input size.

## Merge Sort

Merge sort is a divide-and-conquer sorting algorithm that recursively divides the input list into smaller sublists, sorts them individually, and then merges them to produce a sorted output. It uses a "divide and conquer" strategy to achieve a time complexity of O(n log n).

Merge sort is a stable sorting algorithm and can handle large lists efficiently. However, it requires additional space proportional to the input size for the merging step.

## Quick Sort

Quick sort is a highly efficient sorting algorithm that uses a divide-and-conquer strategy. It selects a pivot element from the list and partitions the other elements into two sublists, according to whether they are less than or greater than the pivot. The sublists are then recursively sorted.

Quick sort has an average time complexity of O(n log n) but can degrade to O(n^2) in the worst case. It is widely used in practice due to its efficiency and in-place sorting capability.

## Counting Sort
Counting sort is a non-comparison based sorting algorithm that works well when the range of input values is known and relatively small. It counts the number of occurrences of each element and uses this information to determine the correct position of each element in the sorted output.

Counting sort has a time complexity of O(n + k), where n is the number of elements in the input array and k is the range of input values. It is efficient for arrays with a small range of input values.

## Bogo Sort
Bogo sort, also known as permutation sort or slow sort, is a highly inefficient and unpredictable sorting algorithm. It repeatedly shuffles the elements of the array randomly and checks if the array is sorted. If not, it repeats the process until the array becomes sorted.

The average and worst-case time complexity of Bogo sort is O((n+1)!), where n is the number of elements in the array. This makes it extremely inefficient for all but the smallest arrays. Bogo sort is mainly used for educational purposes and should not be used for practical sorting.

## Files

This repository contains the following files:

- `bubble_sort.c`: Contains the implementation of the bubble sort algorithm.
- `heap_sort.c`: Contains the implementation of the heap sort algorithm.
- `merge_sort.c`: Contains the implementation of the merge sort algorithm.
- `quick_sort.c`: Contains the implementation of the quick sort algorithm.
- `counting_sort.c`: Contains the implementation of the counting sort algorithm.
- `bogo_sort.c`: Contains the implementation of the bogo sort algorithm.

## Usage

1. Compile the C file using a C compiler:
```bash
gcc bubble_sort.c -o bubble_sort
```

2. Run the compiled program:
```bash
./bubble_sort
```


3. Follow the on-screen instructions to test the sorting algorithm with different inputs.

## Contributing

Contributions are welcome! If you find any issues or want to add more sorting algorithms, feel free to submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).