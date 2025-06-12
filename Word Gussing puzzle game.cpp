#include<iostream>
#include<cstdlib>
#include<cstring>
#include<fstream>
#include<windows.h>
#include<conio.h>
using namespace std;
int call();
void display();
int main()
{
	
	cout<<"\t\t\t     oo       oo   ooooooo    ooooo    oooo       "<<endl;
	cout<<"\t\t\t     oo       oo   oo   oo    o   o    oo   oo         "<<endl;
	cout<<"\t\t\t     oo   o   oo   oo   oo    ooooo    oo    oo          "<<endl;
	cout<<"\t\t\t     oo  o o  oo   oo   oo    o o      oo   oo               " <<endl;
	cout<<"\t\t\t      ooo   ooo    ooooooo    o   o    oooo                   \n\n"<<endl;
	cout<<"\t\t\t   ooooo    oo   oo   oooooo    oooooo   oo        oooooo"<<endl;
	cout<<"\t\t\t   oo   o   oo   oo      oo        oo    oo        o"<<endl;
	cout<<"\t\t\t   ooooo    oo   oo     oo        oo     oo        oooo"<<endl;
	cout<<"\t\t\t   oo       oo   oo    oo        oo      oo        o"<<endl;
	cout<<"\t\t\t   oo        ooooo    ooooooo   oooooo   ooooooo   oooooo\n\n"<<endl;
	cout<<"\t\t\t      ooooooo   oooooo   ooo   ooo   oooooo"<<endl;
	cout<<"\t\t\t      oo        oo  oo   oo o o oo   o"<<endl;
	cout<<"\t\t\t      oo  ooo   oooooo   oo  o  oo   oooo"<<endl;
	cout<<"\t\t\t      oo    o   oo  oo   oo     oo   o"<<endl;
	cout<<"\t\t\t      ooooooo   oo  oo   oo     oo   oooooo"<<endl<<endl<<endl;
	cout<<"\t\t\tSUBMITTED TO	: \n\t\t\t\tProf. Hassan Rauf"<<endl;
	cout<<"\t\t\tSUBMITTED BY	:\n\t\t\t\tHafsa  152\n\t\t\t\tNaheed 157\n\t\t\t\tAiman  159"<<endl;
	cout<<"Press any key ";
    getch();
         	system("cls");
     cout<<"\t***********************************************Word Guessing Game*****************************************\n\n"<<endl;

     char a;
	 char n;
     string Name;
     cout<<"Enter name  :       ";
     getline(cin,Name);
     cout<<endl;
     cout<<"\t***********************************************Word Guessing Game*****************************************\n\n"<<endl;

     int score;
     do
     {
     	system("cls");
     	display(); 	
        score=score+call();
        cout<<"Do you want to play again y/n   :   ";
        cin>>n;
        cout<<endl;
     }while(n!='n');
     cout<<Name<<"  ";
     cout<<"your score is   :   "<<score<<endl;
     cout<<"\n\n\t***************************************************************************************************************\n\n"<<endl;
}
int call()
{

    int hint;
    string output;
    string a[10];
 ifstream file("file1.txt");
    if (file.is_open())
	 {
        for (int i = 0; i < 10; i++) 
		{
            file >> a[i];
        }
        file.close();
    }
    char arr[10][10];
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            char c;
            int r;
            r= rand() % 26;   
            c= 'a' + r;            
            arr[i][j]=c;
        }
    }
    int index=rand()%10;
    output=a[index];
    if(a[index].length()%2==0)
    {
            int row=rand()%10;
            int col=rand()%3;
            for(int i=0;a[index][i]!='\0';i++,col++)
            {
                arr[row][col]=a[index][i];
            }
        
    }
    else
    {
            int row=rand()%3;
            int col=rand()%10;
            for(int i=0;a[index][i]!='\0';i++,row++)
            {
                arr[row][col]=a[index][i];
            }
    }
      cout<<"========================="<<endl;

     for(int i=0;i<10;i++)
    {
    	cout<<"||";
        for(int j=0;j<10;j++)
       
        {
          cout<<" "<<arr[i][j];
          Sleep(5);
        }
        cout<<" ||";
        cout<<endl;
    }
    cout<<"========================="<<endl;
    
    
    string guess;
	cout<<"Press 1 to guess the word	"<<endl;
	cout<<"Press 2 for hint	"<<endl;
	label1:
	cout<<"Enter input:	";
	cin>>hint;
	cout<<endl;
	if(hint==1)
	{
		
	}
       else if(hint==2)
       {
       cout<<"Guessed word is  :       ";
       cout<<output.size();
       cout<<endl;
       }
       else
       {
    	cout<<"Invalid input	";
    	goto label1;
	}
    cout<<"Enter word you guess:       ";
    cin>>guess;
    cout<<endl;
    if(guess==a[index])
    {
        cout<<"Congratulations ! You have guessed correct word  "<<endl;
        return 1;
    }
    else
    {
        cout<<"Sorry ! Your guessed word is incorrect.Try again "<<endl;
        return 0;
    }
}
void display()
{
	    cout<<"\t***********************************************Word Guessing Game*********************************************************\n\n"<<endl;
    cout<<"You have to guess the word in this puzzle"<<endl;
    cout<<"Word can be (world,journey,efficient etc )"<<endl;
    cout<<"You can also take hint"<<endl<<endl;
    
}
