#include <iostream>
using namespace std;
//Kadane's Algorithm
int largest_sum_subarrays(int arr[], int n){
    int largest_sum =0;
    int current_sum = 0;
    for(int i=0; i<n; i++){
        current_sum=((current_sum+arr[i])>0)?current_sum+arr[i]:0;
        largest_sum=max(current_sum,largest_sum);
    }
    return largest_sum;
}
int main() {
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << largest_sum_subarrays(arr, n);
    return 0;
}
