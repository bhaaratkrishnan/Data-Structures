#include <iostream>
using namespace std;
int binary_search(int arr[], int n, int key){
    int low =0; 
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if (arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}
int main(){
	// your code goes here
    int arr[8]={1,2,3,4,5,6,7,8};
    int n=8;
    cout << binary_search(arr, n, 9);
	return 0;
}

