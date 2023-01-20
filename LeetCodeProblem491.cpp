// Leetcode problem 491 Non decreasing subsequences...

void dfsHelper(vector<vector<int>>&res, vector<int>&seq, vector<int>&nums, int pos){
  if(nums.size()>1)
     res.emplace_back();

}
vector<vector<int>>findsubsequences(vector<int>&nums){
  vector<vector<int>>res;
  vector<int>seq;
  dfsHelper(res,seq,nums,0);
  return res;
}
