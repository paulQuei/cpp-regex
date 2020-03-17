#include <iostream>
#include <regex>

using namespace std;

int main() {
  string s = R"("\w\\w\\\w)";
  cout << s << endl;

  return 0;
}