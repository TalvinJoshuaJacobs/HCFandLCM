// "PartAProgram.cpp" is a modification of "HCFandLCM.cpp" coded by myself.
// It has been modified for the purpose of being a supplement to the answer to Part 1a.
// By Talvin Jacobs (2018)

// Includes
# include <iostream>
# include <string>
using namespace std;

// Program Start
int main() {
  cout << "Welcome to the program! " << endl;
  // Labelling a, b and c as integers
  int a,b,c;

  cout << "Please enter the number of hot dogs that come in a single package: ";
  cin >> a;	// The first number is taken in
  cout << "Please enter the number of buns that come in a single package: ";
  cin >> b;	// The second number is taken in
  
  c=a*b;	// The third variable is the product of the two numbers given

  while(a!=b) {	// When the inputted numbers are NOT equal to eachother, loop through...
      if(a>b)	// If the first number is greater than the second...
        a=a-b;	// 'New a' is set to be the difference between the two numbers
      else		// Otherwise...
        b=b-a;	// 'New b' is set to be the difference between the two numbers
    }
    
  cout << endl; // Adding a space between the questions and answers for clarity
  cout << "The minimum number of items per package if different from usual is " << a << endl;	// 'New a' is the Highest Common Factor
  cout << "The minimum number of servings that must be catered for is " << c/a << endl;	// c is the Lowest Common Multiple

  return 0;
  
}
