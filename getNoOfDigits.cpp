#include <iostream>;
using namespace std;

int getDigits(int n){
  int count = 0;
  while(n != 0){
    n = n/10;
    count++;
  }
  return count;
}

int main(){
   cout<<getDigits(1089);
} 