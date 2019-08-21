# Sort Algorithms

I made this project for study the most common sorting algorithms we use in general.

## Getting Started

We will see 7 sorting algorithms. Bubble, selection, insertion, merge, quick, shell and heap sort. Merge and quick sort are recursive and the others iterative.

### Prerequisites

We just need a C compiler and ccache in our machine.

```
$ sudo dnf install gcc
$ sudo dnf install ccache
$ sudo dnf update
```

### Installing

After download all files and install dependencies, you can compile all files and generate an executable for each file. Make sure you are in "Sort-Algorithm" folder.


```
$ gcc /Bubble\ Sort/bubble_sort.c -Ofast -Wextra -o bubble
$ gcc /Selection\ Sort/selection_sort.c -Ofast -Wextra -o selection
$ gcc /Insertion\ Sort/insertion_sort.c -Ofast -Wextra -o insertion 
$ gcc /Merge\ Sort/merge_sort.c -Ofast -Wextra -o merge
$ gcc /Quick\ Sort/quick_sort.c -Ofast -Wextra -o quick
$ gcc /Shell\ Sort/shell_sort.c -Ofast -Wextra -o shell
$ gcc /Heap\ Sort/heap_sort.c -Ofast -Wextra -o heap
```

End with an example of getting some data out of the system or using it for a little demo

## Running the tests

To compare the efficiency of each algorithm, we will run each executable with "time" before and an input file of 1.200.000 characters for sorting.

```
time ./[executable-name] < in.txt
```
Quick Sort     - recursive - 0m0.040s
Merge Sort     - recursive - 0m0.060s
Selection Sort - iterative - 5m38.448s
Insertion Sort - iterative - 2m2.156s
Shell Sort     - iterative - s
Heap Sort      - iterative - s

### Break down into end to end tests

Explain what these tests test and why

```
Give an example
```

### And coding style tests

Explain what these tests test and why

```
Give an example
```

## Authors

* **Vinícius F. Aguiar** - *Initial work* - [AceVinícius](https://github.com/AceVinicius)
