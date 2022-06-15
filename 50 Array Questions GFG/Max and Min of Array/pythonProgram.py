def getMinMax( a, n):
    min1,max1=a[0],a[0]
    for i in range(0,n):
        if a[i]>max1:
            max1=a[i]
        else:
            if a[i]<min1:
                min1=a[i]
    return [min1,max1]
