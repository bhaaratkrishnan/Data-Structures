#include <iostream>
using namespace std;
void print_all_subarrays(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=i; k<=j; k++){
                cout << arr[k] << ",";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
int main() {
    int arr[6]={1,2,3,4,5,6};
    int n = 6;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    print_all_subarrays(arr, n);
    
    return 0;
}
