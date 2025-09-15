#include <bits/stdc++.h>
using namespace std;

// Merge function for descending order
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] > R[j]) { 
            arr[k++] = L[i++];
        } 
        else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];
}

// Merge Sort function
void mergeSort(int arr[], int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}






// Heapify function for max-heap (for descending order)
void heapify(int arr[], int n, int i) {
    int largest = i;      
    int left = 2 * i;     
    int right = 2 * i + 1; 

    if (left <= n && arr[left] > arr[largest])
        largest = left;

    if (right <= n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest); 
    }
}

// Heap Sort function
void heapSort(int arr[], int n) {
    for (int i = n / 2; i >= 1; i--)
        heapify(arr, n, i);

    for (int i = n; i >= 2; i--) {
        swap(arr[1], arr[i]);  
        heapify(arr, i - 1, 1); 
    }
}

int main() {
    freopen("in.txt", "w", stdout);
    freopen("out3.txt", "r", stdin);
 
    int n;
    cin >> n;
 
    int arr[n + 1];
 
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
 
    // Selection sort
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (arr[i] < arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }



    // Bubble Sort
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= n - i; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }




    // Merge Sort
    mergeSort(arr, 1, n);





    // Heap Sort
    heapSort(arr, n);
 
    for (int i = 1; i <= n; i++) {
        cout<<arr[i]<<endl;
    }
 
    return 0;
}













