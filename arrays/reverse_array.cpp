#include <iostream>
using namespace std;
void reverse_arr(int arr[], int n){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}
int main() {
    int arr[8]={1,2,3,4,5,6,7,8};
    int n = 8;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    reverse_arr(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}
