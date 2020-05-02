#include <iostream>
#include <sqlite3.h>

using namespace std;

int main() {
  char * userpath = getenv("USERPROFILE");
  if (userpath == nullptr){
    cout << "No user path";
  }
  cout << string(userpath) + "AppData\\Local\\Google\\Chrome\\User Data\\Local State";
  cout << string(userpath) + "AppData\\Local\\Google\\Chrome\\User Data\\default\\Login Data";
  return 0;
}
