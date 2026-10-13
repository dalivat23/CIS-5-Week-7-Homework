#include <iostream>
#include <cstdlib>
#include <ctime>

// Homework 7 — Tristan Daliva
// CIS 5 Week 07 · Odd and Even

using std::cin;
using std::cout;
using std::endl;


int main() {
  const int N = 20;
  int values[N];
  int even[N];
  int odd[N];
  int e = 0;
  int o = 0;

  //random number generator 
  srand(static_cast<unsigned>(time(nullptr)));
  for (int i = 0; i < N; ++i) {
    values[i] = rand() % 100;
  }

// For statement to check and store whether numbers are odd/even
  for (int i = 0; i < N; ++i){
    if (values[i] % 2 == 0){

    even[e] = values[i];
    ++e;
    }
    else{
    odd[o] = values[i];
    ++o; 
    }
  }

// Cout code to list the random values
  for (int i = 0; i < N; ++i){
    cout << "[" << i << "] " << values[i] << endl;
  }

// Cout code for even numbers
  cout << "Even: ";
  for (int i = 0; i < e; ++i){
  cout << even[i] << " ";
  }
// Cout code for odd numbers
cout << "\nOdd: ";
  for (int i = 0; i < o; ++i){
  cout << odd[i] << " ";
  }
  


  return 0;
}
