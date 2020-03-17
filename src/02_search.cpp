#include <iostream>
#include <regex>

using namespace std;

int main() {
  string s = "ab123cdef"; // ①
  regex ex("\\d+");    // ②

  smatch match; // ③
  regex_search(s, match, ex); // ④

  cout << s << " contains digit: " << match[0] << endl; // ⑤

  return 0;
}