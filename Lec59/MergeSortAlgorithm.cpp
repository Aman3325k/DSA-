#include<iostream>
#include<vector> 
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    vector<int> temp(end - start + 1);  // Create a temporary array
    int left = start, right = mid + 1, index = 0;

    // Merge the two halves into the temp array
    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            index++;
            left++;
        }
        else
        {
            temp[index] = arr[right];
            index++;
            right++;
        }
    }

    // Copy remaining elements from the left half, if any
    while (left <= mid)
    {
        temp[index] = arr[left];
        index++;
        left++;
    }

    // Copy remaining elements from the right half, if any
    while (right <= end)
    {
        temp[index] = arr[right];
        index++;
        right++;
    }

    // Copy sorted elements from temp back to the original array
    for (int i = 0; i < temp.size(); i++)
    {
        arr[start + i] = temp[i];
    }
}

void mergesort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;

    // Recursively sort the left and right halves
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);

    // Merge the two sorted halves
    merge(arr, start, mid, end);
}

int main()
{
    int arr[] = {6, 3, 1, 2, 8, 9, 10, 7, 3, 10};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

    mergesort(arr, 0, n - 1);  // Call mergesort with the correct size

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";  // Output the sorted array
}
