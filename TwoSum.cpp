
// Objective: given an array and an integer, return array indices whose sum is equal to target.
// example: i/p: [1,2,3,4,5].  o/p: [2,4]

//Java code:

class twoSum{
  public int[] sum(int arr[], int target){
    for(int i=0;i<arr.length;i++){
      for(int j=i+1;j<arr.length;j++){
          if(arr[i]+arr[j]==target){
          return new int[]{i,j};
          }
      }
    }
    return null;
  }
}


// we can optimise the solution using map(unordered)..
