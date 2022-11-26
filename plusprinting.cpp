#include <iostream>;
using namespace std;

int main() {
  cout << "star printing pattern problem" << endl;
  int n;
  cout << "Enter the number : ";
  cin >> n;
  if(n%2 == 0 ){
    cout<<"Please enter any odd number";
  }
  else{
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        if(i==n/2 || j == n/2){
          cout<<"*"<<" ";
        }
        else{
          cout<<" "<<" ";
        }
      }
      cout<<endl;
    }
  }
}

