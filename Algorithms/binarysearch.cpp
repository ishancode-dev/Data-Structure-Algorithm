beg = 0;  
end = size - 1;  
while ( beg <= end)  
{  
 calculate mid value  
mid = (beg + end) / 2;  
if the specified element is found at mid index, terminate the process and return the index.   
 Check middle element is equal to the defined element.  
If (aarr[mid] == num)  
{  
return mid + 1;  
}  
else if (arr[mid] > num)  
{  
    End = mid - 1;  
}  
Else if (arr [mid] < num)  
{  
    Beg = mid + 1;  
}  
}  
If the element does not exist in the array, return -1.  
Return -1;   
