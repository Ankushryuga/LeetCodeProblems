// Leetcode problem number 1470 shuffle the arrray 


vector<int>shuffle(vector<int>&nums, int n){
  vector<int>res;
  for(int i=0;i<n;i++){
    res.emplace_back(nums[i]);
    res.emplace_back(nums[i+n]);
  }
  return res;
}
