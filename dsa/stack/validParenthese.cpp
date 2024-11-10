#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

// You are given a string s consisting of the follwoing characters:
// (,),{,},[,].
// 
// The input string s is valid if and only if:
//     1. Every open bracket is closed by the same type of close bracket.
//     2. Open brackets are closed in the correct order.
//     3. Every close bracket has a corresponding open bracket of the same type
// 
// Return true if s is a valid string, and false otherwise.

// Example 1:
//     input: s = "[]"
//     output: true
// 
// Example 2:
//     input: s = "([{}])"
//     output: true
// 
// Example 3:
//     input: s = "[(])"
//     output: false
// 
// Constraints:
//     - 1 <= s.length <= 100


bool isValid(string s);

int main() {
    
    string s = "{}";
    if (isValid(s)) {
        cout << "Valid" << '\n';
    } else {
        cout << "Not Valid" << '\n';
    }
    return 0;
}

bool isValid(string s) {
    
    stack<char> stack;
    unordered_map<char, char> closeToOpen = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };

    for (char c : s) {
        if (closeToOpen.count(c)) {
            if (!stack.empty() && stack.top() == closeToOpen[c]) {
                stack.pop();
            } else {
                return false;
            }
        } else {
            stack.push(c);
        }
    }
    return stack.empty();

}


