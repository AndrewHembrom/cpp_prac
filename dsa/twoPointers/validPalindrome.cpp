#include <iostream>
#include <cctype> // for tolower
using namespace std;

bool alphaNum(char c) {
    return (c >= 'A' && c <= 'Z') ||
           (c >= 'a' && c <= 'z') ||
           (c >= '0' && c <= '9');
}

bool isPalindrome(string s) {
    int l = 0; // start pointer
    int r = s.length() - 1; // end pointer

    while (l < r) {
        // Move l to the right if it's not an alphanumeric character
        while (l < r && !alphaNum(s[l])) {
            l++;
        }
        // Move r to the left if it's not an alphanumeric character
        while (r > l && !alphaNum(s[r])) {
            r--;
        }
        
        // Compare characters after converting to lowercase
        if (tolower(s[l]) != tolower(s[r])) {
            cout << "Mismatch found: " << s[l] << " != " << s[r] << endl;
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main() { 
    string s = "tab a cat";
    string t = "Was it a car or a cat I saw?";
    
    if (isPalindrome(s)) {
        cout << "It is a palindrome.\n";
    } else {
        cout << "It is not a palindrome.\n";
    }

    if (isPalindrome(t)) {
        cout << "It is a palindrome.\n";
    } else {
        cout << "It is not a palindrome.\n";
    }

    return 0;
}

