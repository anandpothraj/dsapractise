#include <iostream>;
using namespace std;

int main() {
  cout << "Print the pattern" << endl;
  int n;
  cout << "Enter the number : ";
  cin >> n;
  for(int i=n;i>0;i--){
    int number = n;
    int count = i;
    while(number>0){
      while(count>0){
        cout<<number<<" ";
        count--;
      }
      number--;
      count = i;
    }
    cout<<"$";
  }
}

