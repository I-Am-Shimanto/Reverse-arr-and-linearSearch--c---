#include <iostream>
using namespace std;

void reverseArr(int arr[] , int size){
    int start = 0, end = size - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int linearSearch(int arr[] , int size, int target){
    for (int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {23, 3, 43, 2, 45, 64, 2564, 232, 445, 3212, 3};
    int size = sizeof(arr) / sizeof(int);
    int target;

    reverseArr(arr, size);
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Search item : ";
    cin >> target;
    cout << "This is the linearSearch item : " << linearSearch(arr, size, target) << endl;

    return 0;
}