int peakElement(int arr[], int n)
{
   // Your code here
   int max=0;
   int index=0;
   int i;
   for(i=0;i<n;i++){
       if(arr[i]>max){
           max=arr[i];
           index=i;
       }
       
   }
   return index;
   
}
