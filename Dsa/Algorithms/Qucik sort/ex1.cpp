#include<iostream>
using namespace std;

void Swap(int arr[], int i, int j)
{
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l,int r){

    int i = l - 1;
    int j = l;
    int pivot = arr[r];

    for (j; j < r; j++){
        if (arr[j]<pivot)
        {
            i++;
            Swap(arr, i, j);    
        }
    }
    i++;
    Swap(arr, i, j);
    return i;
}

    int QuickSort(int arr[], int l, int r)
    {

        if (l < r)
        {
            int p = partition(arr, l, r);
            QuickSort(arr, l, p - 1);
            QuickSort(arr, p + 1, r);
        }
    }

//Print array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main(){
    int arr[] = {3, 5, 1, 8, 4, 9};

    int size = sizeof(arr) / sizeof(arr[0]);

    QuickSort(arr, 0, size - 1);

    printArray(arr, size);
}