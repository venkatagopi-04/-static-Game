#include<iostream>
#include<stdlib.h>
#include<dos.h>
#include<conio.h>
#include<unistd.h>
using namespace std;
char name[20];
int seq[100],j;


class sample_game
{
	public:
	int choice,fail,score;
	char name[20];

	public:
	void game();
	sample_game()
	{
		score=0;
	}

};




void sample_game::game()
	{

	      for(j=0;j<100;j++)
		{
		if(seq[j]==4)
		{
			cout<<"                                    *"<<endl;
			sleep(1);
			if(j>5)
			{
			cin>>choice;
			if(choice==seq[j])
			{       score=score+1;
				continue;
			}
			else
			{
				fail++;
				if(fail>2)
				{
					cout<<"game over!"<<endl;
					cout<<name<<endl;
					cout<<"score :"<<(score-7)<<endl;
					break;
				}
			}
			}
		}


		else if(seq[j]==3)
		{
			cout<<"	   		     *"<<endl;
			sleep(1);
			if(j>5)
			{        cin>>choice;
				if(choice==seq[j])
				{       score=score+1;
					continue;
				}
				else
				{
					fail++;
					if(fail>2)
					{
						cout<<"game over!"<<endl;
						cout<<name<<endl;
						cout<<"score :"<<(score-7)<<endl;
						break;
					}
				}
			}
		}


		else if(seq[j]==2)
		{
			cout<<"                     *"<<endl;
			sleep(1);
			if(j>5)
			{
				cin>>choice;
				if(choice==seq[j])
				{       score=score+1;
					continue;
				}
				else
				{
					fail++;
					if(fail>2)
					{

						cout<<"game over!"<<endl;
						cout<<name<<endl;
						cout<<"score :"<<(score-7)<<endl;
						break;
					}
				}
			}
		}


		else if(seq[j]==1)
		{
			cout<<"             *"<<endl;
			sleep(1);
			if(j>5)
			{
				cin>>choice;
				if(choice==seq[j])
				{       score=score+1;
					continue;
				}
				else
				{
					fail++;
					if(fail>2)
					{
						cout<<"game over!"<<endl;
						cout<<name<<endl;
						cout<<"score :"<<(score-7)<<endl;
						break;
					}
				}
			}
		}
		score=score+1;
		}
	}


int main()
{          sample_game user;
	 
	cout<<"enter your name"<<endl;
	cin>>name;
	cout<<"************************************************************"<<endl;
	for(j=0;j<100;j++)
	{
		seq[j]=rand()%5;
	}

	user.game();


return 0;
	
	

}


