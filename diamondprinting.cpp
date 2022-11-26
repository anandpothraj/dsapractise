#include <iostream>;
using namespace std;

int main() {
  cout << "Alphabet diamond pattern problem" << endl;
  int n;
  cout << "Enter the number : ";
  cin >> n;
  int i = 1;
  for(; i <= n; i++){
    for(int j = n - i; j > 0 ; j--){
      cout<<" "<<" ";
    }
    for(int j = 0 ; j < i*2-1  ; j++){
      cout<<char('A'+j)<<" ";
    }
    cout<<endl;
  }
  for( ; i < n*2; i++){
    for(int j = 0; j < i-n ; j++){
      cout<<" "<<" ";
    }
    for(int j = 0; j < 2*(2*n-i)-1 ; j++){
      cout<<char('A'+j)<<" ";
    }
    cout<<endl;
  }
}