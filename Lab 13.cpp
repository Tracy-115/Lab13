// COMSC-210 | Lab 13 | Kyawt Thinzar Min
// IDE used: Visual Studio Code

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
vector <int> numbers; //creating a vector of integers
ifstream infile("Vectors.txt");//reads the file
if (!infile){
  cerr << "Error" << endl;//error message for when the file is not found
}

int nums;
  while (infile >> nums){
    numbers.push_back(nums);//to add in vectors we use push_back,pushes numbers into vectors
  }
infile.close();
cout << "This is a gathered data for Grades of the 30 students in the school" << endl;
cout << "With gathered numbers, we will find the Max, Min, and Mean numbers!" << endl;
cout << "Max: " << *max_element(numbers.begin(), numbers.end()) << endl; //finds the max number
cout << "Min: " << *min_element(numbers.begin(), numbers.end()) << endl; //finds the min number
cout << "Sum: " << accumulate(numbers.begin(), numbers.end(), 0) << endl;//finds the sum of the numbers

int num;
cout << "What is the position of the value you wish to see from the list(1-30): ";
cin >> num;
cout << "In position " << num << " the number is " << numbers.at(num-1) << endl; //finds the number in the position the user inputs

sort(numbers.begin(), numbers.end());
cout << "Sorted list: "; //prints the sorted list
for (double val : numbers) cout << val << " "; cout << endl;
sort(numbers.rbegin(), numbers.rend());
cout << "Reversed list: "; //prints the reversed list
for (double val : numbers) cout << val << " ";
cout << endl;

return 0;
}
