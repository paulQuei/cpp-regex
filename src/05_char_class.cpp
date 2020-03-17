#include <iostream>
#include <regex>

using namespace std;

static void search_string(const string& str,
                          const regex& reg_ex) { // ①
  for (string::size_type i = 0; i < str.size() - 1; i++) {
    auto substr = str.substr(i, 1);
    if (regex_match(substr, reg_ex)) {
      cout << substr;
    }
  }
}

static void search_by_regex(const char* regex_s,
                            const string& s) { // ②
  regex reg_ex(regex_s);
  cout.width(12); // ③
  cout << regex_s << ": \""; // ④
  search_string(s, reg_ex);  // ⑤
  cout << "\"" << endl;
}

int main() {
  string s("_AaBbCcDdEeFfGg12345 \t\n!@#$%"); // ⑥

  search_by_regex("[[:alnum:]]", s);          // ⑦
  search_by_regex("\\w", s);                  // ⑧
  search_by_regex(R"(\W)", s);                // ⑨
  search_by_regex("[[:digit:]]", s);          // ⑩
  search_by_regex("[^[:digit:]]", s);         // ⑪
  search_by_regex("[[:space:]]", s);          // ⑫
  search_by_regex("\\S", s);                  // ⑬
  search_by_regex("[[:lower:]]", s);          // ⑭
  search_by_regex("[[:upper:]]", s);
  search_by_regex("[[:alpha:]]", s);          // ⑮
  search_by_regex("[[:blank:]]", s);          // ⑯
  search_by_regex("[[:graph:]]", s);          // ⑰
  search_by_regex("[[:print:]]", s);          // ⑱
  search_by_regex("[[:punct:]]", s);          // ⑲
  search_by_regex("[[:xdigit:]]", s);         // ⑳

  return 0;
}