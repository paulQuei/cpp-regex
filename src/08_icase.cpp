#include <fstream>
#include <iostream>
#include <regex>

using namespace std;

int main() {
  regex word_regex("regular expressions?", regex::icase);

  ifstream file("./content.txt");
  string line;
  while(getline(file, line)) {
    auto iter_begin = sregex_iterator(line.begin(),
                                      line.end(),
                                      word_regex);
    auto iter_end = sregex_iterator();
    for (auto iter = iter_begin; iter != iter_end; iter++) {
      cout << iter->str() << endl;
    }
  }

  return 0;
}