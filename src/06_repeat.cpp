#include <iostream>
#include <regex>

using namespace std;

static void search_by_regex(const char* regex_s,
                            const string& s) { // ①
  regex reg_ex(regex_s);
  smatch match_result; // ②
  cout.width(14); // ③
  if (regex_search(s, match_result, reg_ex)) { // ④
    cout << regex_s << ": \"" << match_result[0] << "\"" << endl; // ⑤
  }
}

int main() {
  string s("_AaBbCcDdEeFfGg12345!@#$% \t"); // ⑥

  search_by_regex("[[:alnum:]]{5}", s);       // ⑦
  search_by_regex("\\w{5,}", s);              // ⑧
  search_by_regex(R"(\W{3,5})", s);           // ⑨
  search_by_regex("[[:digit:]]*", s);         // ⑩
  search_by_regex(".+", s);                   // ⑪
  search_by_regex("[[:lower:]]?", s);         // ⑫

  return 0;
}