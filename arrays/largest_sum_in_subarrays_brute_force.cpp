#include <iostream>
using namespace std;
int largest_sum_subarrays(int arr[], int n){
    int largest_sum =0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum+=arr[k];
            }
            largest_sum = max(sum, largest_sum);
        }
    }
    return largest_sum;
}
int main() {
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << largest_sum_subarrays(arr, n);
    return 0;
}
