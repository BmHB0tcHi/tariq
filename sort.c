#include <iostream>
using namespace std;

int main() {

int a, b, c, first;
a = 4;
b = 2;
c = 3;

if (a > b && a > c) {
  cout << "1: " << a << endl;
  first = a;
}
if (b > a && b > c) {
  cout << "1: " << b << endl;
  first = b;
}
if (c > b && c > a) {
  cout << "1: " << c << endl;
  first = c;
}



if  (first == a) {
  if (b < c) {
    cout << "2: " << c << endl << "3: " << b << endl;
  }
  else {
    cout << "2: " << b << endl << "3: " << c << endl;
  }
}
if  (first == b) {
  if (a < c) {
    cout << "2: " << c << endl << "3: " << a << endl;
  }
  else {
    cout << "2: " << a << endl << "3: " << c << endl;
  }
}
if  (first == c) {
  if (a < b) {
    cout << "2: " << b << endl << "3: " << a << endl;
  }
  else {
    cout << "2: " << a << endl << "3: " << b << endl;
  }
}

}
