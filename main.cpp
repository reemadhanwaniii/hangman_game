#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

#define loop(i,a,b)  for(int i=a;i<=b;i++)
#define revloop(i,a,b) for(int i=b;i>=a;i--)
#define mod  1000000007
#define inf 1e18
#define vvi vector<vector<int> >
#define vi vector<int>
#define pb push_back
int  max_try= 5;
string msg = "PLAY!!!";


void intro()
{
  cout << "\n\n\n";
    Sleep(300);
    cout << "\t\t\t\t * * *  **** *      ****  ***   ***   ****   " << endl;
    Sleep(300);
    cout << "\t\t\t\t * * * *     *     *     *   * * * * *        "<< endl;
    Sleep(300);
    cout << "\t\t\t\t * * * ***** *     *     *   * * * * *****    " << endl;
    Sleep(300);
    cout << "\t\t\t\t * * * *     *     *     *   * * * * *         " << endl;
    Sleep(300);
    cout << "\t\t\t\t  ***   **** *****  ****  ***  * * *  ****     " << endl;
    Sleep(300);
    cout<<endl;
    cout<<"\t\t\t\t============================================="<<endl;
    Sleep(500);
    cout<<"\t\t\t\tTHIS IS A HANGMAN GAME"<<endl;
    Sleep(500);
    cout<<"\t\t\t\t============================================="<<endl;
    Sleep(500);
    cout<<"press any key to continue...";
    cin.ignore();
    cin.get();

}
void stable()
{
  //system("color 4");
  system("cls");
  cout<<"\n\n\n";
  cout<<"\t\t\t==============================HANGMAN GAME========================";
  cout<<"\n\n\n";
  cout<<"\t\t\t YOU HAVE "<<max_try<<"  TRIES TO TRY AND GUESS THE STATE AND UNION TERRIRTORIES"<<"\n\n";
  cout<<"\t\t\t"<<msg<<"\n\n";
  cout<<"\t\t\t=======================================================================\n\n";
}
int check_correct(char letter,string original,string &hide)
{
  int matches=0;
  int n=original.length();
  for(int i=0;i<n;i++)
  {
    if(letter==hide[i])      return 0;
    if(letter==original[i])
    {
      hide[i]=letter;
      matches++;
    }
  }
  return matches;
}
void game()
{
  max_try=5;
  system("cls");
  char letter;
  string state;
  string states[36]={"andhrapradesh","arunachalpradesh","assam","bihar","chhattisgarh","goa","gujarat","haryana","himachalpradesh","jharkhand","karnataka","kerala","madhyapradesh",
                      "maharashtra","manipur","meghalaya","mizoram","nagaland","odisha","punjab","rajasthan","sikkim","tamilnadu","telangana","uttarpradesh","uttarakhand","westbengal",
                      "anmdamanandnicobarislands","chandigarh","delhi","jaamuandkashmir","lakshadweep","puducherry","ladakh","dadarandnagarhaveli"};


  srand(time(NULL));
  int n=rand()%36;
  state=states[n];


 string hide_state(state.length(),'.');


 while(max_try!=0)
 {
   stable();
   cout<<"\t\t\t\tYOU HAVE "<<max_try<<" TRIES  !!!"<<"\n";
   cout<<"\t\t\t\t"<<hide_state<<"\n";
   cout<<"\t\t\t\tGUESS A LETTER";
   cin>>letter;
   if(check_correct(letter,state,hide_state)==0)
   {
     msg="OO.........YOU  GUESS WRONG LETTER";
     max_try=max_try-1;
   }
   else
   {
     msg="WELLDONE !!!!YOU GUESS WRITE";
   }
   if(state==hide_state)
   {
     msg="HURRAY !!YOU GUESSED WRITE";
     stable();
     cout<<"\n\t\t\t\tTHE STATE IS :"<<hide_state<<"\n";
     break;
   }
 }
  if(max_try==0)
  {
    msg="NOOO............!!YOU GUESSED WRONG";
    stable();
    cout<<"The STATE WAS "<<state<<"\n";
  }
  cin.ignore();
  cin.get();
}
void EXIT()
{
     int smile=1;
    cout<<"\n\n\n\n\n\n";

    cout<<"\t\t\t \t\t\tTHANK YOU  "<< static_cast<char>(1)  <<static_cast<char>(1)  <<static_cast<char>(1)  <<"  !!!!!\n";
    cout<<"\n\n\n\n\n\n";
}
int main()
{
  //system("color g");
  system("cls");
  intro();
  int choice;
  do {
    system("cls");
    //system("color f");
  cout<<"\t\t\t====================================HANGMAN GAME=================================="<<"\n\n";
  cout<<"\t\t\t1. PLAY "<<"\n\n";
  cout<<"\t\t\t2. EXIT "<<"\n\n";
  cout<<"ENTER YOUR CHOICE (1,2)";
  cin>>choice;
  system("cls");
  switch (choice) {
    case 1:
        game();
        break;
    case 2:
        EXIT();
        break;
    default:
       cout<<"\n\t\t\tPLEASE ENTER A VALID CHOICE";
  }
}while(choice!=2);
  return 0;
}
