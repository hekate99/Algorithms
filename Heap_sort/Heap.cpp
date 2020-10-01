#include <iostream>  
using namespace std; 
void max_heap(int arr[], int n, int i) 
{ 
    int largest = i; 
    int left = 2*i + 1; 
    int right = 2*i + 2; 
    if (left < n && arr[left] > arr[largest]) 
        largest = left; 
    if (right < n && arr[right] > arr[largest]) 
        largest = right; 
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
        max_heap(arr, n, largest); 
    } 
} 

void heap_Sort(int arr[], int n) 
{ 
    for (int i = n / 2 - 1; i >= 0; i--) 
        max_heap(arr, n, i); 
    for (int i=n-1; i>0; i--) 
    { 
        swap(arr[0], arr[i]); 
        max_heap(arr, i, 0); 
    } 
} 
int main() 
{ 
    int arr[] = {12, 34,56,78,90,22,66,11, 13, 5,89, 6, 7}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    heap_Sort(arr, n); 
  
    cout << "Sorted array is \n"; 
   for (int i=0; i<n; ++i) 
        cout << arr[i] << " "; 
    cout << "\n"; 
} 
