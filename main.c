#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fonksiyon Prototipleri
void bubbleSort(int arr[], int n);
void printArray(int arr[], int size);

int main() {
    int i, N;
    printf("BUBBLE SORT ALGORITMASI\n");
    printf("Kac adet sayi uretilecek: ");
    scanf("%d", &N);
    int *arr = (int *)malloc(N * sizeof(int));
    srand(time(0));
    printf("Dizi Elemanlari: ");
    for (i = 0; i < N; i++) {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }
    bubbleSort(arr, N);
    printf("\nSiralanmis Dizi Elemanlari: ");
    printArray(arr, N);
    free(arr);
    return 0;
}

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap işlemi
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
