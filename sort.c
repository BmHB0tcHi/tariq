#include <iostream> // calls a  set of predefined functions. e.g. cout = "console output" basicly prints to the screen.
using namespace std; // ill tell you later

int main() {  // the main function. The one that gets executed when you run the program

int a, b, c, first; // defining 4 integer variables 
a = 4;
b = 2;
c = 3;

// first set of ifs. to find the greatest number. Think of away to use else if and else here...
if (a > b && a > c) {
  cout << "1: " << a << endl; // endl is like <br> in html "break line" endline starts a new line "enter"
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


// Second set of ifs to find the rest
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
