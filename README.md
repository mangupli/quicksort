# quicksort
Exercising in quick sorting of float numbers

### How to use:

```
git clone https://github.com/mangupli/quicksort.git
make
```
It will create an executable file ./sort. Pass the numbers as arguments and the program will sort the array from lowest to biggest number using quick sort algorithm.

The program works with floats and prints out sorted array with 3 numbers after floating point maximum - this can be changed in printf setting in print_array function.

### For Example
```
$ ./sort 4.23542 4.231 4.923
Actual array: 4.235 4.231 4.923 
Sorted array: 4.231 4.235 4.923 
```
Or with integers:
```
$ ./sort 3 7 111 8 45 2 11
Actual array: 3.000 7.000 111.000 8.000 45.000 2.000 11.000
Sorted array: 2.000 3.000 7.000 8.000 11.000 45.000 111.000
```
