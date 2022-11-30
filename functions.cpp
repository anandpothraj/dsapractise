#include <iostream>;
#include <math.h>;
using namespace std;

void square(int n) {
  for(int i = 1 ; i<=n ; i++){
    cout<<pow(i,2)<<" ";
  }
  cout<<endl;
}

float area(int radius){
  return 3.14*pow(radius,2);
}

float circumference(int radius){
  return 2*3.14*radius;
}

void vote(int age){
  if(age>=18){
    cout<<"You are eligible to vote."<<endl;
  }
  else{
    cout<<"Sorry you are not eligible to vote"<<endl;
  }
}

void printOddInRange(int start, int end){
  for(int i=start; i<=end; i++){
    if(i%2!=0){
      cout<<i<<" ";
    }
  }
}


bool isPrime(int n){
  for(int i = 2; i <= n-1; i++){
    if(n % i == 0){
      return false;
    }
  }
  return true;
}

int main(){ 
  // square(5);
  // cout<<"\n";
  // cout<<area(3)<<endl;
  // cout<<circumference(3)<<endl;
  // vote(19);
  // printOddInRange(1,10);
  // cout<<isPrime(11);
  
}
