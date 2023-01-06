// Question is return maximum number of icecream we can get with certain amount of coins.

int maxIceCreams(vector<int>&costs, int coins){
  
  sort(costs.begin(), costs.end());
  for(int i=0;i<costs.size();i++){
    if(coins>=costs[i]){
      coins=coins-costs[i];
      //or 
      //coins-=costs[i];
    }
    else
      return i;
  }
  return costs.size();
}
