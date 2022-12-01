#include <iostream>;
using namespace std;

long NthTerm(int n){
  long result = 1;
  long mod = 100000007;
  for(int i = 1; i <= n  ; i++){
    result = (result * i)%mod + 1;
  }
  return result;
}

int main(){
  cout<<NthTerm(11);
  return 0;
}
