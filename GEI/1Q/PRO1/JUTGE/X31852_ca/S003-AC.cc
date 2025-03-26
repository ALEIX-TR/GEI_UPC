#include <iostream>
#include <vector>
using namespace std;

string join(vector<string>::iterator begin, vector<string>::iterator end, string sep) {
    string ajuntat = *begin;
    ++begin;
    while (begin != end) {
        ajuntat.append(sep).append(*begin);
        ++begin;
    }
    return ajuntat;
}
