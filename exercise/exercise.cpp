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
    int ZZ = mid + 1;
    int k = low;
    while (i <= mid && ZZ  <= high) {
        if (zuhair[i] <= zuhair[ZZ]) {
            temp[k] = zuhair[i];
            i++;
        }
        else {
            temp[k] = zuhair[ZZ];
            ZZ++;
        }
        k++;

    }
    while (ZZ <= high) {
        temp[k] = zuhair[ZZ];
        ZZ++;
        k++;
    }
    while (i <= mid) {
        temp[k] = zuhair[i];
        i++;
        k++;
    }

    for (int i = low; i <= high; i++) {
        zuhair[i] = temp[i];
    }
}
void mergeSort(int low, int high) {
    if (low >= high) {
        return;
    }
 int mid = (low + high) / 2;
    mergeSort(low, mid);
    mergeSort(mid + 1, high);
    merge(low, mid, high);
}

void input() {
    cout << "Masukkan " << 79 << " data:" << endl;
    for (int i = 0; i < 79; i++) {
        cin >> zuhair[i];
    }
}
void display() {
    cout << "Hasil Pengurutan: " << endl;
    for (int i = 0; i < 79; i++) {
        cout << zuhair[i] << " ";
    }
    cout << endl;
}


}








   

