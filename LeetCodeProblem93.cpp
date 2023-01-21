// Restore IP address:
vector<string>restoreIP(string n){
  vector<string>res;
  string temp;
  for(int a=1;a<=3;a++)
  for(int b=1;b<=3;b++)
  for(int c=1;c<=3;c++)
  for(int d=1;d<=3;d++)
    if(a+b+c+d==n.size()){
      int A=stoi(s.substr(0,a));
      int B=stoi(s.substr(a,b));
      int C=stoi(s.substr(a+b,c));
      int D=stoi(s.substr(a+b+c,d));
      if(A<=255 && B<=255 && C<=255 && D<=255)
        if((temp=to_string(A)+"."+to_string(B)+"."+to_string(C)+"."+to_string(D)).size()==n.size()+3)
          res.emplace_back(temp);
    }
  return res;
}
