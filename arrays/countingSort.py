def countingSort(arr, n:int):
    #count arrray
    countArr = (max(arr) + 1) * [0]
    #loop and give count elements value
    for val in arr:
        countArr[val] += 1
    #calculate cummulative sum
    for idx in range(1, len(countArr)):
        countArr[idx] += countArr[idx - 1]
    #final output
    outputArr = [0] * n
    #sort the array
    for val in arr:
        idx = countArr[val] 
        countArr[val] -= 1
        outputArr[idx-1] = val
    return outputArr
