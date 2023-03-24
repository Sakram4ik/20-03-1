#include <iostream>
using namespace std;

bool isPrime(int);

int main() {
  int number;
  bool result;
  cout << "Enter the number: ";
  cin >> number;
  result = isPrime(number);
  cout << "It is prime? " << result;
  return 0;
}

bool isPrime(int x){
  bool prime = true;
  for(int i=2; i<x;i++){
    if(x % i == 0){
      prime = false;
    }
  }
  return prime;
}