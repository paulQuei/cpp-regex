#include <iostream>
#include <regex>

using namespace std;

int main() {
  string s1 = "ab123cdef"; // ①
  string s2 = "123456789"; // ②

  regex ex("\\d+"); // ③

  cout << s1 << " is all digit: " << regex_match(s1, ex) << endl; // ④
  cout << s2 << " is all digit: " << regex_match(s2, ex) << endl; // ⑤

  return 0;
}