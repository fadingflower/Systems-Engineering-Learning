using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

void printInt (int n) {
  cout << "The next element is " << n << "\n";
}
  

int main () {
  vector<int> *tmp, V;
  

  tmp =  new vector<int>(3); /* allocate three elements */
  V = *tmp;
  V[0] = 4;
  V[2] = 6;
  V[1] = 5;

  for_each (V.begin(), V.end(), printInt);


  V.resize (7); /* now allocate 4 more elements, producing a vector with 7 elements */
  V[3] = 2;
  V[4] = 1;
  V[5] = 3;
  V[6] = 0;
  
  cout << "After inserting\n";

  for_each (V.rbegin(), V.rend(), printInt); /* print them in reverse order */

  delete (&V); /* (wrong) attempt at freeing memory */
  return 0;
}
