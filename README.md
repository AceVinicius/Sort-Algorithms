# Sort Algorithms

I made this project for study the most common sorting algorithms we use in general.

## Getting Started

We will see 7 sorting algorithms. Bubble, selection, insertion, merge, quick, shell and heapsort.

### Prerequisites

To run our research, we just need a C compiler and ccache in our machine.

```
$ sudo dnf install clang
$ sudo dnf install ccache
$ sudo dnf update
```

### Installing

After download all files and install dependencies, you can compile all files and generate an executable for each file. Make sure you are in "Sort-Algorithms" folder.


```
$ ccache clang ./Bubble\ Sort/bubble_sort.c       -O3 -W -Wall -o ./bin/bubble
$ ccache clang ./Selection\ Sort/selection_sort.c -O3 -W -Wall -o ./bin/selection
$ ccache clang ./Insertion\ Sort/insertion_sort.c -O3 -W -Wall -o ./bin/insertion 
$ ccache clang ./Merge\ Sort/merge_sort.c         -O3 -W -Wall -o ./bin/merge
$ ccache clang ./Quick\ Sort/quick_sort.c         -O3 -W -Wall -o ./bin/quick
$ ccache clang ./Shell\ Sort/shell_sort.c         -O3 -W -Wall -o ./bin/shell
$ ccache clang ./Heap\ Sort/heap_sort.c           -O3 -W -Wall -o ./bin/heap
```

End with an example of getting some data out of the system or using it for a little demo

## Running the tests

To compare the efficiency of each algorithm, we will run each executable with "time" before and an input file of 1.200.000 characters for sorting.

```
cd bin
$ time ./[executable-name] < in.txt
```

I made an script file for fedora distributions, making all his procedure for an easy comparison. Please, be patient with Selection, Insertion and Bubble Sort. To run the script just type:

```
$ cd [path]/Sort-Algorithms
$ sudo bash install_dependencies.sh
```

To rerun the tests later:

```
$ sudo bash run.sh
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
