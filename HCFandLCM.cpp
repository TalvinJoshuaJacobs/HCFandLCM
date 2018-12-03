// "HCF and LCM" is a calculator that calculates the
// Highest Common Factor and the Lowest Common Multiple
// for 2 entered numbers, coded in C++.
// By Talvin Jacobs (2018)


// Includes
# include <iostream>
# include <string>
using namespace std;

// Program Start
int main() {

  // Labelling a, b and c as integers
  int a,b,c;

  cout<< "Please enter your first number: ";
  cin>>a;	// The first number is taken in
  cout<< "Please enter your second number: ";
  cin>>b;	// The second number is taken in
  
  c=a*b;	// The third variable is the product of the two numbers given

  while(a!=b) {	// When the inputted numbers are NOT equal to eachother...
      if(a>b)	// If the first number is greater than the second...
        a=a-b;	// 'New a' is set to be the difference between the two numbers
      else		// Otherwise...
        b=b-a;	// 'New b' is set to be the difference between the two numbers
    }
    
  cout<< "HCF = " << a <<endl;	// 'New a' is the Highest Common Factor
  cout<< "LCM = " << c/a <<endl;	// c is the Lowest Common Multiple

  return 0;
  
}
