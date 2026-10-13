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

  srand(static_cast<unsigned>(time(nullptr)));
  for (int i = 0; i < N; ++i) {
    values[i] = rand() % 100;
  }


  for (int i = 0; i < N; ++i){
    if (values[i] % 2 == 0){

    even[e] = values[i];
    ++e;
    }
    else
    odd[o] = values[i];
    ++o; 
  }

  for (int i = 0; i < N; ++i){
    cout << i << "  " << values[i] << endl;
  }
cout << endl;
  
cout << "Even: ";
  for (int i = 0; i < e; ++i){
  cout << even[i] << " ";
  }

cout << "\nOdd: ";
  for (int i = 0; i < o; ++i){
  cout << odd[i] << " ";
  }
  
  
  
  //out << odd[1];


  return 0;
}
