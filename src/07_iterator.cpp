#include <fstream>
#include <iostream>
#include <regex>

using namespace std;

int main() {
  regex word_regex("[[:alpha:]]+"); // ①

  ifstream file("./content.txt"); // ②
  string line;
  int word_count = 0;
  while(getline(file, line)) { // ③
    auto iter_begin = sregex_iterator(line.begin(),
                                      line.end(),
                                      word_regex);  // ④
    auto iter_end = sregex_iterator(); // ⑤
    for (auto iter = iter_begin; iter != iter_end; iter++) { // ⑥
      word_count++;  // ⑦
      // cout << iter->str() << endl; // ⑧
    }
  }
  cout << "It contains " << word_count << " words" << endl; // ⑨

  return 0;
}