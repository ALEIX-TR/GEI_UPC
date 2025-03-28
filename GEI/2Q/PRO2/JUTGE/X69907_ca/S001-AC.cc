#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Here you can add more includes if you wish.
// ...

using namespace std;

struct Cyclist {
  string name;
  int position;
  int velocity;
};

typedef vector<Cyclist> ListCyclists;

// Auxiliary functions (you can add more functions if you wish)

// Pre:  
// Post: Prints all cyclists from first to last, one per line, and with the format:
//       name position velocity
void printCyclists(const ListCyclists &listcyclists)
{
  for (int i = 0; i < int(listcyclists.size()); i++) {
    const Cyclist &c = listcyclists[i];
    cout << c.name << " " << c.position << " " << c.velocity << endl;
  }
}

// Pre:  variable 'time' is strictly positive and represents a time elapsed.
// Post: All positions of cyclists in listcyclists have been updated
//       according to the given time elapsed and their corresponding velocity.
void progressCyclists(int time, ListCyclists &listcyclists) {
  int TamV = listcyclists.size(), Akt = 0;
  while (Akt < TamV) {
    listcyclists[Akt].position += listcyclists[Akt].velocity * time;
    ++Akt;
  }
}

// Pre:  c1, c2 represent correct cyclists.
// Post: Returns true iff one of the following conditions holds:
//         - position of c1 is strictly smaller than position of c2.
//         - c1 and c2 have same position but velocity of c1 is strictly smaller than velocity of c2.
//         - c1 and c2 coincide in position and velocity, but c1 has smaller name than c2.
bool smallerCyclist(Cyclist c1, Cyclist c2) {
  bool Result = false;
  if (c1.position < c2.position) Result = true;
  else if (c1.position == c2.position) {
    if (c1.velocity < c2.velocity) Result = true;
    else if (c1.velocity == c2.velocity) {
      if (c1.name < c2.name) Result = true;
    }
  }
  return Result;
}

int main()
{
  int n;
  cin >> n;
  ListCyclists listcyclists(n);
  for (int i = 0; i < n; i++) {
    Cyclist &c = listcyclists[i];
    cin >> c.name;
    c.position = 0;
    c.velocity = 0;
  }
  string command;
  while (cin >> command) {
    if (command == "UPDATEVELOCITY") {
      int i, velocity;
      cin >> i >> velocity;
      listcyclists[i].velocity = velocity;
    } else if (command == "SORT") {
      sort(listcyclists.begin(), listcyclists.end(), smallerCyclist);
    } else if (command == "PRINT") {
      cout << "Current list cyclists:" << endl;
      printCyclists(listcyclists);
      cout << endl;
    } else if (command == "PROGRESSCYCLISTS") {
      int time;
      cin >> time;
      progressCyclists(time, listcyclists);
    }
  }
}
