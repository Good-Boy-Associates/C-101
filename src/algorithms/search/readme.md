# Search Algorithms

This repository contains basic implementations of various search algorithms in C programming language.

## Algorithms Included

The following search algorithms are included in this repository:

- Binary Search
- Interpolation Search
- Linear Search

## Binary Search

Binary search is a fast search algorithm that works on sorted arrays. It follows a divide-and-conquer approach to find the target element by repeatedly dividing the search space in half.

The algorithm starts by comparing the target element with the middle element of the array. If they are equal, the search is successful. If the target element is smaller, the search continues in the left half of the array; otherwise, it continues in the right half. This process is repeated until the target element is found or the search space is exhausted.

Binary search has a time complexity of O(log n), making it efficient for large sorted arrays.

## Interpolation Search

Interpolation search is an improvement over binary search for uniformly distributed sorted arrays. It estimates the position of the target element based on the values of the first and last elements in the array.

The algorithm uses a formula to calculate the probe position, which is a weighted average of the first and last index. It then compares the target element with the element at the probe position. If they are equal, the search is successful. If the target element is smaller, the search continues in the left subarray; otherwise, it continues in the right subarray. This process is repeated until the target element is found or the search space is exhausted.

Interpolation search has an average time complexity of O(log log n) for uniformly distributed arrays, but its performance can degrade to O(n) in worst-case scenarios.

## Linear Search

Linear search, also known as sequential search, is a simple search algorithm that checks each element in a list or array until the target element is found or the end of the list is reached.

The algorithm starts at the beginning of the list and compares each element sequentially with the target element. If a match is found, the search is successful. If the end of the list is reached without finding a match, the search is unsuccessful.

Linear search has a time complexity of O(n), where n is the size of the array. It is suitable for small lists or unsorted arrays.

## Files

This repository contains the following files:

- `binary_search.c`: Contains the implementation of the binary search algorithm.
- `interpolation_search.c`: Contains the implementation of the interpolation search algorithm.
- `linear_search.c`: Contains the implementation of the linear search algorithm.

## Usage

1. Compile the C file using a C compiler:
```bash
gcc binary_search.c -o binary_search
```


2. Run the compiled program:
```bash
./binary_search
```

3. Follow the on-screen instructions to test the search algorithm with different inputs.

## Contributing

Contributions are welcome! If you find any issues or want to add more search algorithms, feel free to submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).

