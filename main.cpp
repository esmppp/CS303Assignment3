#include <iostream>
#include "function.h"
using namespace std;
int main() {
  //Part 1: Write a new queue function called move_to_rear that moves the element currently at the front of the queue to the rear of the queue. The element that was second in line will be the new front element. Do these using functions push, front, and pop.
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);

  queuePrint(q);
  queueChange(q);
  queuePrint(q);

  //Part 2: As discussed in Chapter 5, a palindrome is a word that reads the same left to right asright to left. Write a recursive function that determines whether its argument string is apalindrome.

  string s = "racecar";

  if(palindromeCheck(s, 0, s.length()-1)){
    cout << s << " is a palindrome" << endl;
  }else{
    cout << s << " is NOT a palindrome" << endl;
  }

  s = "proofoorp";

  if(palindromeCheck(s, 0, s.length()-1)){
    cout << s << " is a palindrome" << endl;
  }else{
    cout << s << " is NOT a palindrome" << endl;
  }

  s = "obviouslyNotAPalindrome";

  if(palindromeCheck(s, 0, s.length()-1)){
    cout << s << " is a palindrome" << endl;
  }else{
    cout << s << " is NOT a palindrome" << endl;
  }
  
  //Part 3: Draw an expression tree corresponding to each of the following:a)Inorder traversal is:  x / y + 3 * b / c b)Postorder traversal is:  x y z + a b –c * / –c)Preorder traversal is:  * + a –x y / c d
  
  //On paper. Images submitted on Github
  
  //Part 4: The to_stringmethod generates a string representing a preorder traversal in which each local root is on a separate line. If a subtree is empty, the string "NULL" is displayed. Considered the output of a to_string method below and  show the tree that would be built bythe following data lines. Is the resulting tree a binary search tree, a full tree, and/or a complete tree?
  
  //On Paper. Image submitted on Github
  
  //Part 5: Declare  the  map  container  stateDataMapto  store  pairs  of  the  form  (stateName, capitalName), where stateName and capitalName are variables of type string:•Write  C++  statements  that  add  the  following  pairs  to  stateDataMap:  (Nebraska, Lincoln),    (New    York,    Albany),    (Ohio,    Columbus),    (California, Sacramento), (Massachusetts, Boston), and (Texas, Austin).•Write a C++ method that outputs the data stored in stateDataMap.•Write a C++ statement that changes the capital of California to Los Angeles•Write a C++ method that outputs the capitalNameusing the stateName which will be entered by the user.

  map<string, string> stateMapData;
  map<string, string>::iterator iterate;

  stateMapData.insert(pair<string, string>("Nebraska", "Lincoln"));
  stateMapData.insert(pair<string, string>("New York", "Albany"));
  stateMapData.insert(pair<string, string>("Ohio", "Columbus"));
  stateMapData.insert(pair<string, string>("California", "Sacramento"));
  stateMapData.insert(pair<string, string>("Massachusetts", "Boston"));
  stateMapData.insert(pair<string, string>("Texas", "Austin"));

  outputMap(stateMapData);
  
  iterate = stateMapData.find("California");
  iterate->second = "Los Angeles";

  string name;
  cout << "Enter the name of a state: ";
  cin >> name;

  checkMap(stateMapData, name);

  cout << "Enter the name of a state: ";
  cin >> name;

  checkMap(stateMapData, name);
}