#include <iostream>
#include <regex>

using namespace std;

void isMatch(const char* content, const char* reg_ex) {
	cout << "Is '" << content << "' match '" << reg_ex << "': ";
	smatch match;
	string s(content);
	regex reg(reg_ex);
	if(regex_search(s, match, reg)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

int main() {
  isMatch("sometimes", "(?=sometimes)some");
  isMatch("something", "(?=sometimes)some");

  cout << endl;
  isMatch("some eggs", "(?!some birds)some");
  isMatch("some birds", "(?!some birds)some");

  return 0;
}

