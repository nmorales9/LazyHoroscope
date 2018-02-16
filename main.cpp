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
  char firstchar;
  char lastchar;

  //get user input

  cout<< "What is your first name?\n";
  cin>> firstname;
  cout<< "What is your last name?\n";
  cin>> lastname;

  //tell fortune
   lucky= firstname.length();
    cout<< "welcome, "<<firstname[0]<<"."<<lastname[0]<<"., here is your fortune\n";
    cout<< "Your lucky numer is "<<lucky<<endl;



if (firstchar== 'a' ||firstchar== 'e' ||firstchar== 'i'||firstchar== 'o'||firstchar== 'u'||firstchar== 'A' ||firstchar== 'E' ||firstchar== 'I' ||firstchar== 'O' ||firstchar== 'U')
  {
  cout<< "Your destined to be famous!\n";
  }
  else 
  {
  cout << "you should keep a low profile.\n";
  }
 
 if (lastchar== 'a' ||lastchar== 'e' ||lastchar== 'i' ||lastchar== 'o' ||lastchar== 'u' ||lastchar== 'A' ||lastchar== 'E' ||lastchar== 'I' ||lastchar== 'O' ||lastchar== 'U')
  {
  cout<< "you already have met your true love.\n";
  }

 cout<< "Have a good day!\n";

  return 0;
}
