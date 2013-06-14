#include "iostream"
#include "cstdlib"
using namespace std;

/*Tic Tac Toe
By Manan Doshi
*/

int game[9]={1,0,0,0,0,0,0,0,0};
int inp;
int trick(int);
void PrintBoard();
inline void First();
int Win(int);
inline void Play();
int check(int, int, int, int);


int main()
{
	cout<<endl<<"Welcome! Lets Play TicTacToe"<<endl<<"P.S. I am Unbeatable. I will be X."<<endl<<endl;
	PrintBoard();
	First();
	Play();
	Play();
	Play();
	Play();
	return 0;
}
void PrintBoard(){
	cout<<"          |             |			"<<endl;
	cout<<"   0      |       1     |     2		"<<endl;
	cout<<"          |             |			"<<endl;
	cout<<"----------|-------------|----------	"<<endl;
	cout<<"          |             |			"<<endl;
	cout<<"    3     |       4     |     5		"<<endl;
	cout<<"          |             |			"<<endl;
	cout<<"----------|-------------|----------	"<<endl;
	cout<<"          |             |			"<<endl;
	cout<<"    6     |      7      |     8		"<<endl;
	cout<<"          |             |			"<<endl;
}

inline void First(){
	cout<<"I play 0"<<endl<<"Your turn"<<endl;
	int FirstMove;
	game[0]=1;
	fm: cin>>FirstMove;
	if (FirstMove==1 || FirstMove==2 || FirstMove==5 || FirstMove==7 || FirstMove==8)
	{
		game[FirstMove]=10;
		cout<<"I play 6, I can smell a win nearby. Muahahaha"<<endl;
		game[6]=1;
	}
	else if (FirstMove==6 || FirstMove==3)
	{
		game[FirstMove]=10;
		cout<<"I play 2, I can smell a win nearby. Muahahaha"<<endl;
		game[2]=1;

	}
	else if (FirstMove==4)
	{
		game[FirstMove]=10;
		cout<<"Good Move. I play 8."<<endl;
		game[8]=1;
	}
	else {
		cout<<"Invalid Input. Enter Valid Input"<<endl;
		goto fm;
	}
}

int Win(int k){
	if (check(0,1,2,k)>0){
		return check(0,1,2,k);
	}
	else if (check(0,3,6,k)>0)
	{
		return check(0,3,6,k);
	}
	else if (check(0,4,8,k)>0)
	{
		return check(0,4,8,k);
	}
	else if (check(3,4,5,k)>0)
	{
		return check(3,4,5,k);
	}
	else if (check(6,7,8,k)>0)
	{
		return check(6,7,8,k);
	}
	else if (check(1,4,7,k)>0)
	{
		return check(1,4,7,k);
	}
	else if (check(2,5,8,k)>0)
	{
		return check(2,5,8,k);
	}
	else if (check(2,4,6,k)>0)
	{
		return check(2,4,6,k);
	}
	else{
		return 0;
	}
}
int check(int a, int b, int c, int d){
	if (game[a]+game[b]+game[c]==d)
	{
		if (game[a]==0)
		{
			return a;
		}
		else if (game[b]==0)
		{
			return b;
		}
		else{
			return c;
		}
}
else{
	return 0;
}
}



int trick(int t){
	if (game[4]==0)
	{
		if (game[0]+game[4]+game[8]==t )
		{
			/* code */
		}
	}






}

inline void Play(){
	if(game[0]+game[1]+game[2]+game[3]+game[4]+game[5]+game[6]+game[7]+game[8]==45){
	cout<<"Draw. Well Played pathetic human."<<endl;
	exit(0);
	}
	cout<<"Your turn."<<endl;
	in: cin>>inp;
	if (game[inp]==0)
	{
		game[inp]=10;
	}
	else{
		cout<<"Invalid Input. Pls. enter a valid input.";
		goto in;
	}

if (Win(2)>0)
{
	cout<<"I play "<<Win(2)<<". YOU LOSE TO A BOT, YOU PATHETIC EXCUSE FOR A HUMAN BEING. AHAHAHAHAH."<<endl;
	cin>>inp;
	exit(0);
}
else if (Win(20)>0)
{
	cout<<"I play "<<Win(20)<<". Block. :D"<<endl;
	game[Win(20)]=1;
}
else if (trick(1)>0)
{
	cout<<"I play "<<trick(1)<<endl;
}
else if (trick(10)>0)
{
	cout<<"I play "<<trick(10)<<endl;
}
//else if(game[0]+game[1]+game[2]+game[3]+game[4]+game[5]+game[6]+game[7]+game[8]==45){
//	cout<<"Draw. Well Played pathetic human.";
//}
else {
	cout<<"Draw";
	exit(0);
}
} 	