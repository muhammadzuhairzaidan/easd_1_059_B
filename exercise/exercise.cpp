// karena algoritma adalah cara terstruktur untuk menyelesaikan tugas tertentu
// array dan link list
// ukuran input,jenis algoritma,penggunaan struktur data,sistem operasi
// quicksort
// bubblesort insertionsort dan selectionsort termasuk dalam quadratic sedangkan quicksort dan mergesort masuk dalam loglinear

#include <iostream>
using namespace std;

const int max = 59+ 20 - 2 * 15 + 10 + 20; // jumlah maksimum data

int zuhair[79];
int temp[79];

void merge(int low, int mid, int high) {
    int i = low;
    int AR = mid + 1;
    int k = low;
    while (i <= mid && AR <= high) {
        if (zuhair[i] <= zuhair[AR]) {
            temp[k] = zuhair[i];
            i++;
        }
        else {
            temp[k] = zuhair[AR];
            AR++;
        }
        k++;
    }

    
