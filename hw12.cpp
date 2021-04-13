
#include<iostream>
#include<vector>

using namespace std;

/*
STUDENT: Write a function that will take two vectors of int
         and return true if the vectors are equal (they have
         the same numbers in the same order) and false if they
         are not equal
*/

/*
STUDENT: Write a function that will take two vectors of int
         and return true if the second vector exists inside 
         the first vector.  Use recursion to implement this
         function
*/

void printVector(vector<int> v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << ", ";
  }
  cout << endl;
}

int main() {

  vector<int> vec_a;
  vector<int> vec_b;
  vector<int> vec_c;
  vector<int> vec_d;

  vec_a.push_back(1);
  vec_a.push_back(4);
  vec_a.push_back(2);
  vec_a.push_back(7);
  vec_a.push_back(5);
  vec_a.push_back(8);
  vec_a.push_back(2);
  vec_a.push_back(9);
  vec_a.push_back(3);
  vec_a.push_back(5);
  vec_a.push_back(4); 
  vec_a.push_back(0);

  //USE THIS EXAMPLE TO "SLICE" A VECTOR
  vector<int> small_a(vec_a.begin()+1, vec_a.end());

  printVector(vec_a);
  printVector(small_a);

  vec_b.push_back(4);
  vec_b.push_back(2);

  vec_c.push_back(5);
  vec_c.push_back(7);

  vec_d.push_back(5);
  vec_d.push_back(8);
  vec_d.push_back(2);


  /*
  STUDENT: Use your function to test if vec_b, vec_c, vec_d are within vec_a
           cout the result of each test
  */
}