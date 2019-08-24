# Sort Algorithms

I made this project for study the most common sorting algorithms we use in general.

## Getting Started

We will see 7 sorting algorithms. Bubble, selection, insertion, merge, quick, shell and heapsort.

### Prerequisites

To run our research, we just need a C compiler and ccache in our machine.

```
$ sudo dnf install gcc
$ sudo dnf install ccache
$ sudo dnf update
```

### Installing

After download all files and install dependencies, you can compile all files and generate an executable for each file. Make sure you are in "Sort-Algorithms" folder.


```
$ ccache gcc Bubble\ Sort/bubble_sort.c -Ofast -Wextra -o Run/bubble
$ ccache gcc Selection\ Sort/selection_sort.c -Ofast -Wextra -o Run/selection
$ ccache gcc Insertion\ Sort/insertion_sort.c -Ofast -Wextra -o Run/insertion 
$ ccache gcc Merge\ Sort/merge_sort.c -Ofast -Wextra -o Run/merge
$ ccache gcc Quick\ Sort/quick_sort.c -Ofast -Wextra -o Run/quick
$ ccache gcc Shell\ Sort/shell_sort.c -Ofast -Wextra -o Run/shell
$ ccache gcc Heap\ Sort/heap_sort.c -Ofast -Wextra -o Run/heap
```

End with an example of getting some data out of the system or using it for a little demo

## Running the tests

To compare the efficiency of each algorithm, we will run each executable with "time" before and an input file of 1.200.000 characters for sorting.

```
$ time ./[executable-name] < in.txt
```

I made an script file for fedora distributions, making all his procedure for an easy comparison. Please, be patient with Selection, Insertion and Bubble Sort. To run the script just type:

```
$ cd [path]/Sort-Algorithms
$ sudo bash install_dependencies.sh
```

Quick Sort     - recursive - 0m0.040s
Merge Sort     - recursive - 0m0.060s
Selection Sort - iterative - 5m38.448s
Insertion Sort - iterative - 2m2.156s
Bubble Sort    - recursive - m.s
Shell Sort     - iterative - 0m0.s
Heap Sort      - iterative - 0m0.s

### Break down into end to end tests

Chosing the right sorting algorithm for your project is essential. Each one has it's own advantages. To learn more about them, each file is commented for learning purposes.

## Authors

* **Vinícius F. Aguiar** - *Initial work* - [AceVinícius](https://github.com/AceVinicius)
