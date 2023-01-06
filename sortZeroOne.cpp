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

// sorting zeros, ones and two in c++ programming.

##################      sort 0,1,& 2 in c++ programming.        ###########################

#include<bits/stdc++.h>
using namespace std;
/*
void sortZeroOne(vector<int>&array){
    int countZero=0;
    for(int i=0;i<array.size();i++){
        if(array[i]==0){
            countZero++;
        }
    }
    for(int i=0;i<countZero;i++){
        array[i]=0;
    }
    for(int i=countZero;i<array.size();i++){
        array[i]=1;
    }
}
*/
void sortZeroOneTwo(vector<int>&array){
    int countZero=0;
    int countOne=0;
    for(int i=0;i<array.size();i++){
        if(array[i]==0){
            countZero++;
        }
        else if(array[i]==1){
            countOne++;
        }
    }
    for(int i=0;i<countZero;i++){
        array[i]=0;
    }
    for(int i=countZero;i<countZero+countOne;i++){
        array[i]=1;
    }
    for(int i=countZero+countOne;i<array.size();i++){
        array[i]=2;
    }
}
int main(){
    vector<int>array{1,1,1,1,0,0,0,1,0,1,0,2,2,2,2,2,2,0,0,0,1,1,1,0,0};   
    /*
    0's -10;
    1's -9;
    2's -6;
    */
    
    sortZeroOneTwo(array);
    for(int i=0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
