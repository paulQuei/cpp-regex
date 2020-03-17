#include <fstream>
#include <iostream>
#include <regex>

using namespace std;

int main() {
  regex word_regex(R"((\d{2})(\d{2})s)"); // ①

  ifstream file("./content.txt");
  string line;
  while(getline(file, line)) {
    auto iter_begin = sregex_iterator(line.begin(),
                                      line.end(),
                                      word_regex);
    auto iter_end = sregex_iterator();
    for (auto iter = iter_begin; iter != iter_end; iter++) {
      cout << "Match content: " << iter->str(0) << ", "; // ②
      cout << "group Size: " << iter->size() << endl;  // ③

      cout << "Century: " << iter->str(1) << ", "; // ④
      cout << "length: " << iter->length(1) << ", ";
      cout << "position: " << iter->position(1) << endl;

      auto year = (*iter)[2]; // ⑤
      cout << "Year: " << year.str() << ", ";
      cout << "length: " << year.length() << ", ";
      cout << "position: " << iter->position(2) << endl;

      cout << endl;
    }
  }

  return 0;
}