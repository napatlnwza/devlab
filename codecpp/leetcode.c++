// https://www.borntodev.com/devlab/task/1309
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s)
{
    stack<char> a;
    if (s.length() == 1)
    {
        return false;
    }
    if (s[0] == ')' || s[0] == ']' || s[0] == '}')
    {
        return false;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            a.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
        {
            if (a.empty())
            {
                return false;
            }
            char p = a.top();
            a.pop();
            if (s[i] == ')' && p != '(' || (s[i] == ']' && p != '[') || (s[i] == '}' && p != '{'))
            {
                return false;
            }
        }
    }
    if (a.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string ohhshit;
    getline(cin, ohhshit);
    string torf = (isValid(ohhshit)) ? "true" : "false";
    cout << torf;
    return 0;
}