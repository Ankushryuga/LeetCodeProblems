# Problem statement: Given 2 arrays, merge these 2 arrays in one final array
Before solving Identify the constraints
  1. what kind of data are in array?
  2. is it array sorted or not?
  3. so the final array would be in the sorted order or not?
  4. is that array contains duplicate values?
  
Approachs:   
  1. Brute Force Approach:
    1.1: first find the length of array's if not given, 
    1.2: Iterate through the first array (index=i)
    1.3: Initialize a new array (named finalArray) of size(size of array1+ size of array2- 1)
    1.3: Iterate though the second array (index=j)
    ## If answer of 3 question is in sorted order
    1.4: check if array1[i]>array2[j]
    1.5: if this condition is true
    1.6: if answer of question 3 is in sorted order then insert data in finalArray[value of array2[j])
    1.7: else insert the data in finalArray[value of array[i])
    1.8: continue this process till the end 

  ## if answer of 3 question is in not sorted order
    1.4 then just insert the value of array2[j] in finalarray[value of array2[j]].


2. Optimise solution:
    1.1: first find the length of array's if not given, initialize 2 pointer that keep track of size of arrays (i, j)
    1.2: initialize another variable (k) with value (length of array1+ length of array2 - 1)
    1.3: while length of array2 is greater than 0.
    ### if answer of 3 question is in sorted order
    1.4: check if i>=0 && array1[i]>array2[j].
    1.4.1: if its true.
    1.4.2: insert the new data in array1[k]=array[i] and decrease the value of k and i by 1.
    1.5: else array1[k]=array[j] and decrease the value of k and j by 1.




  ## Golang Solution:
1. Brute force:

func MergeArray( nums1 []int, nums2 []int){
  mergedArray := make([] int, len(num1)+len(num2)-1)
    i,j,k:=0;
    
}
