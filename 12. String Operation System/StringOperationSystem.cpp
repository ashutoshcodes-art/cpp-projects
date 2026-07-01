
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <limits>
using namespace std;
int takeint()
{
    int n;
    while (true)
    {
        cin >> n;
        if (cin.fail())
        {
            cout << "Enter Integer Only : ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
            return n;
    }
}
int menu()
{
    cout << "\n===== STRING OPERATIONS SYSTEM =====\n1.Enter String\n2.Display\n3.Length\n4.Copy\n5.Concatenate\n6.Compare\n7.Reverse\n8.Palindrome\n9.Count Vowels & Consonants\n10.Uppercase\n11.Lowercase\n12.Search Character\n13.Replace Character\n14.Exit\nChoose Option : ";
    int c = takeint();
    while (c < 1 || c > 14)
    {
        cout << "Choose Valid Option : ";
        c = takeint();
    }
    return c;
}
void enterS(string &s)
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter String : ";
    getline(cin, s);
}
void disp(const string &s)
{
    if (s.empty())
        cout << "No String Entered!\n";
    else
        cout << "String : " << s << endl;
}
void len(const string &s) { cout << "Length = " << s.length() << endl; }
void cp(const string &s)
{
    string t = s;
    cout << "Copied : " << t << endl;
}
void cat(string &s)
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string t;
    cout << "Enter Another String : ";
    getline(cin, t);
    s += t;
    cout << s << endl;
}
void cmp(const string &s)
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string t;
    cout << "Enter Another String : ";
    getline(cin, t);
    if (s == t)
        cout << "Equal\n";
    else if (s < t)
        cout << "First Smaller\n";
    else
        cout << "First Greater\n";
}
void rev(const string &s)
{
    string t = s;
    reverse(t.begin(), t.end());
    cout << t << endl;
}
void pal(const string &s)
{
    string t = s;
    reverse(t.begin(), t.end());
    cout << (s == t ? "Palindrome\n" : "Not Palindrome\n");
}
void cnt(const string &s)
{
    int v = 0, c = 0;
    for (char ch : s)
    {
        if (isalpha((unsigned char)ch))
        {
            char x = tolower((unsigned char)ch);
            if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
                v++;
            else
                c++;
        }
    }
    cout << "Vowels : " << v << "\nConsonants : " << c << endl;
}
void up(const string &s)
{
    string t = s;
    for (char &ch : t)
        ch = toupper((unsigned char)ch);
    cout << t << endl;
}
void low(const string &s)
{
    string t = s;
    for (char &ch : t)
        ch = tolower((unsigned char)ch);
    cout << t << endl;
}
void sch(const string &s)
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    char ch;
    cout << "Enter Character : ";
    cin >> ch;
    bool f = false;
    for (size_t i = 0; i < s.size(); i++)
        if (s[i] == ch)
        {
            cout << "Found at Index " << i << endl;
            f = true;
        }
    if (!f)
        cout << "Not Found\n";
}
void rep(string &s)
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    char a, b;
    cout << "Old Char : ";
    cin >> a;
    cout << "New Char : ";
    cin >> b;
    for (char &ch : s)
        if (ch == a)
            ch = b;
    cout << s << endl;
}
int main()
{
    string s;
    while (true)
    {
        switch (menu())
        {
        case 1:
            enterS(s);
            break;
        case 2:
            disp(s);
            break;
        case 3:
            len(s);
            break;
        case 4:
            cp(s);
            break;
        case 5:
            cat(s);
            break;
        case 6:
            cmp(s);
            break;
        case 7:
            rev(s);
            break;
        case 8:
            pal(s);
            break;
        case 9:
            cnt(s);
            break;
        case 10:
            up(s);
            break;
        case 11:
            low(s);
            break;
        case 12:
            sch(s);
            break;
        case 13:
            rep(s);
            break;
        case 14:
            cout << "Program Ended Successfully!";
            return 0;
        }
    }
}