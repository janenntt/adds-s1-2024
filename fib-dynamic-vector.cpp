#include <vector>
using namespace std;

int fib(int n) {
  // I set the initial two values
  // could also have added them in the base case
  static std::vector<int> fib_values = {0, 1};

  // if we don't have fib(n) already
  // increase size of vector to accomodate new value
  if (n >= fib_values.size())
    fib_values.resize(n + 1);

  if (n <= 1)
    return n;

  // check if calculated.  values are 0 by default
  if (fib_values.at(n) != 0)
    return fib_values.at(n);

  // otherwise calculate the value and add to vector
  int value = fib(n - 1) + fib(n - 2);
  fib_values.at(n) = value;
  return value;
}

#include <iostream>
int main(void) {
  cout << "enter n: ";
  int n;
  cin >> n;
  int result = fib(n);
  cout << result << endl;
}