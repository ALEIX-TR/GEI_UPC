#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

string join(vector<string>::iterator begin, vector<string>::iterator end, string sep) {
    ostringstream os;
    for (auto it = begin; it != end; it++) {
        os << (it == begin? "" : sep);
        os << *it;
    }
    return os.str();
}
