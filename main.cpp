/**
Description:
Filename:
Author:
Date:f
*/
#include<iostream>
#include<string>
#include<cctype>

using namespace std;

string get_string(string prompt);
char get_char(string prompt);
int char_count(string, char);

int main()
{
   string str = get_string("Please enter the sentence: ");
   char c = get_char("Please enter the character you would like to count: ");
   cout << str << endl;
   cout << c << endl;
   cout << "Your sentance has " << char_count(str, c) << " of the characters you selected."<< endl;
   return 0;
}
string get_string(string prompt)
{
   string str;
   cout << prompt;
   getline(cin, str);
   for (int i = 0; i < str.length(); i++)
   {
      str[i] = tolower(str.at(i));
   }
   return str;
}
char get_char(string prompt)
{
   char c;
   cout << prompt;
   cin >> c;
   return c;
}
int char_count(string str, char c)
{
   int count = 0;
   for (int i = 0; i < str.length(); i++)
   {
      char character = str.at(i);
      if (character == c)
      {
         count++;
      }
   }
   return count;
}
