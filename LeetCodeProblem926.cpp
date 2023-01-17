//Minimum Flips to make string Monotone Increasing String.
/*
S="1000100011"
o/p=2.
S="0011011000"
o/p=4.
*/
int minFlipString(String s){
  int count0=0, count1=0;
  int res;
  int len=s.size();
  count0=count(s.begin(), s.end(),'0');
  res=len-count0;// store number of flips..
  for(int i=0;i<len;i++){
    if(s[i]=='0'){
      count0-=1;
    }
    else if(s[i]=='1'){
      res=min(res, count1+count0);
      count1++;
    }
  }
  return res;
}
