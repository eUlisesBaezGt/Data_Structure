#include "stack.h"

using namespace std;

int main()
{
    Stack stack;
    string word;
    cout << "Enter a word: ";
    cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        stack.push(word[i]);
    }
    string reverseWord;
    while (!stack.isEmpty())
    {
        reverseWord += stack.pop();
    }
    if (word == reverseWord)
    {
        cout << "The word is a palindrome" << endl;
    }
    else
    {
        cout << "The word is not a palindrome" << endl;
    }
    return 0;
}
