#include <fstream>
#include <iostream>
#include <regex>

using namespace std;

int main() {
  // "(.+)" won't work
  regex content_regex("\"(.+?)\""); // ①

  ifstream file("./content.txt");
  string line;
  while(getline(file, line)) {
    auto iter_begin = sregex_iterator(line.begin(),
                                      line.end(),
                                      content_regex);
    auto iter_end = sregex_iterator();
    for (auto iter = iter_begin; iter != iter_end; iter++) {
      cout << iter->str(0) << endl;
    }
  }

  return 0;
}