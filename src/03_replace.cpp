#include <iostream>
#include <regex>

using namespace std;

int main() {
  string s = "ab123cdef"; // ①
  regex ex("\\d+");    // ②

  string r = regex_replace(s, ex, "xxx"); // ③

  cout << r << endl; // ④

  return 0;
}