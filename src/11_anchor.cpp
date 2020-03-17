#include <iostream>
#include <regex>

using namespace std;

void findIn(const char* content, const char* reg_ex) {
	cout << "Search '" << reg_ex << "' in '" << content << "': ";
	smatch match;
	string s(content);
	regex reg(reg_ex);
	if(regex_search(s, match, reg)) {
		cout << match[0] << endl;
	} else {
		cout << "NOTHING" << endl;
	}
}

int main() {
  findIn("123abc", "^\\d+");
  findIn("abc123", "^\\d+");
  cout << endl;
  findIn("some birds", "some\\b");
  findIn("sometimes wonderful", "some\\b");

  return 0;
}

