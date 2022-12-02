#pragma once
#include <iostream>
#include <queue>
#include <map>
using namespace std;

void queuePrint(queue<int> q);
//pre: takes in a queue
//post: prints out all variables in queue without modifying the actual queue
void queueChange(queue<int>& q);
//pre: takes in the queue by address
//post: sends the first variable to the back of the queue
bool palindromeCheck(string b, int start, int end);
//pre: takes in a string with the start and end position
//post: recursively checks if the string is a palindrome or not
void outputMap(map<string, string> m);
//pre: takes in a double string map
//post: prints it out formatted
void checkMap(map<string, string> m, string target);
//pre: takes in double string map and a target string
//post: checks if target key is in the map, if true outputs that its true, otherwise says the variable cannot be found.