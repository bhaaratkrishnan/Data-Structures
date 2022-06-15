def peakElement(self,arr, n):
        max=index=0
        for i in range(n):
            if arr[i]>max:
                max=arr[i]
                index=i
        return index
