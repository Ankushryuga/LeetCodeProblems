/* 
soritng an array of o's and 1's 
*/

#include<bits/stdc++.h>
using namespace std;

//sortZeroOne function will sort array of 0,1 
void sortZeroOne(int arr[]){
    int len=sizeof(arr)/sizeof(arr[0]);
    std::cout<<len<<std::endl;
    int countZero=0;
    for(int i=0;i<len;i++){
        if(arr[i]==0){
            countZero++;
        }
    }
for(int i=0;i<countZero;i++){
    arr[i]=0;
}
for(int i=countZero;i<len;i++){
    arr[i]=1;
}
for(int i=0;i<len;i++){
    st::cout<<arr[i]<<" ";
}
}
// calling Main method here...
int main(){
int arr[1000];
int size;
std::cout<<"Enter size: "<<std::endl;
std::cin>>size;
for(int i=0;i<size;i++){
    std::cin>>arr[i];
}
sortZeroOne(arr);

return 0;
}
