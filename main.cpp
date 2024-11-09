#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

/**
 * Split a string into a vector of strings, given a delimeter.
 * @param a The string to split.
 * @param b The delimeter to split on.
 * @return A vector of strings, each of which is a substring of a, split on b.
 */
vector<string> split(string a, char b) {
    vector<string> v;
    istringstream iss(a);
    string s;
    while(getline(iss, s, b)) {
        v.push_back(s);
    }
    return v;
}

/**
 * The main function that prompts the user to enter a string, 
 * splits the entered string by spaces, and prints each substring 
 * on a new line.
 *
 * This program demonstrates the use of the split function.
 */
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    // Split the string entered by the user into a vector of strings, 
    // with each string representing a word in the original string.
    vector<string> words = split(s, ' ');
    
    // Print each word on a new line.
    for(string word : words) {
        cout << word << endl;
    }
    return 0;
}
