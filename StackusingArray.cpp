/*
stack.cpp*/
#include<climits>
#include<iostream>
using namespace std;
class stack{
  private:
    int* data;
    int newIndex;
    int capacity;
  public:
    stack(int totalsize){
      data=new int[totalsize];
      capacity=totalsize;
      newIndex=0;
    }
  int size(){
    return newIndex;
  }
  bool isEmpty(){
    return newIndex==0;
  }
  void push(int element){
    if(newIndex==capacity){
      cout<<"Stack already full: "<<endl;
      return;
    }
    data[newIndex]=element;
    newIndex++;
  }
  
  int pop(){
    if(isEmpty()){
      cout<<"Stack empty already"<<endl;
      return INT_MIN;
    }
    newIndex--;
    return data[newIndex];
  }
  int top(){
    if(isEmpty()){
      cout<<"Stack empty: "<<endl;
      return INT_MIN;
    }
    return data[newIndex-1];
  }
};

/*
stackArray.cpp
*/
#include "stack.cpp"
int main(){
  stack s(5);
  s.push(40);
  s.push(48);
  s.push(70);
  s.push(80);
  s.push(90);
  s.push(44);         //o/p: full
  
  cout<<s.isEmpty()<<endl;   // o/p: 0 (because stack is not empty right now);
  cout<<s.pop()<<endl;  //o/p:90
  cout<<s.size()<<endl; //o/p:4
  cout<<s.top()<<endl;  //o/p:80
  cout<<s.pop()<<endl;  //o/p:80
  cout<<s.pop()<<endl;  //o/p:70
  cout<<s.pop()<<endl;  //o/p:48
  cout<<s.top()<<endl;  //o/p:40
  cout<<s.pop()<<endl;  //o/p:40
  cout<<s.top()<<endl;  //stack empty some garbage value.
  cout<<s.size()<<endl; //0
}

