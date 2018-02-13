//Authors:Nysa Morales
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables

  string firstname;
  string lastname;
  string nickname;
  int lucky;

  //get user input

  cout<< "What is your first name?\n";
  cin>> firstname;
  cout<< "What is your last name?\n";
  cin>> lastname;

  //tell fortune
 lucky= firstname.length();
 cout<< "welcome, "<<firstname[0]<<"."<<lastname[0]<<"., here is your fortune...\n.";
cout<< "Your lucky numer is.. "<<lucky<<endl;

  return 0;
}
