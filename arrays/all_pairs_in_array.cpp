#include <iostream>
using namespace std;
void print_all_pairs(int arr[], int n){
    for(int i=0; i<n; i++){
        int x = arr[i];
        for(int j=i+1; j<n; j++){
            int y = arr[j];
            cout << x << "," << y << endl;
        }
        cout<<endl;
    }
}
int main() {
    int arr[8]={1,2,3,4,5,6,7,8};
    int n = 8;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    print_all_pairs(arr, n);
    
    return 0;
}
