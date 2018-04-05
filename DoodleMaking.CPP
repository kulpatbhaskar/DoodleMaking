#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	cout<<"Press K to Quit"<<endl;
	cout<<"Made by";
	cout<<" Kulpat Bhaskar";
	char keypressed;
	int x=40; int y=10;
	do
	{
		gotoxy(x,y);
		cout<<'*';
		gotoxy(x,y);
		keypressed = getch();
		if(keypressed == 'W' || keypressed == 'w')
		y--;
		else if(keypressed == 'S' || keypressed == 's')
		y++;
		else if(keypressed == 'A' || keypressed == 'a')
		x--;
		else if(keypressed == 'D' || keypressed == 'd')
		x++;
		else if(keypressed == 'C' || keypressed == 'c')
		{
			x++;
			y++;
			gotoxy(x,y);
			cout<<" ";
		}
		else if(keypressed == 'Q' || keypressed == 'q')
		{
			x--;
			y--;
			gotoxy(x,y);
			cout<<" ";
		}
		else if(keypressed == 'E' || keypressed == 'e')
		{
			x++;
			y--;
			gotoxy(x,y);
			cout<<" ";
		}
		else if(keypressed == 'Z' || keypressed == 'z')
		{
			x--;
			y++;
			gotoxy(x,y);
			cout<<" ";
		}
		else if(keypressed == 'H' || keypressed == 'h')
		{
			gotoxy(x,y);
			cout<<" ";
			x++;
		}
		else if(keypressed == 'T' || keypressed == 't')
		{
			gotoxy(x,y);
			cout<<" ";
			y--;
		}
		else if(keypressed == 'F' || keypressed == 'f')
		{
			gotoxy(x,y);
			cout<<" ";
			x--;
		}
		else if(keypressed == 'G' || keypressed == 'g')
		{
			gotoxy(x,y);
			cout<<" ";
			y++;
		}
		else if(keypressed == 'N' || keypressed == 'n')
		{
			gotoxy(x,y);
			cout<<" ";
			x++;
			y++;
		}
		else if(keypressed == 'R' || keypressed == 'r')
		{
			gotoxy(x,y);
			cout<<" ";
			x--;
			y--;
		}
		else if(keypressed == 'Y' || keypressed == 'y')
		{
			gotoxy(x,y);
			cout<<" ";
			x++;
			y--;
		}
		else if(keypressed == 'V' || keypressed == 'v')
		{
			gotoxy(x,y);
			cout<<" ";
			x--;
			y++;
		}
		else if(keypressed == 'K' || keypressed == 'k')
		;
		else
		cout<<"\a";
	}while((keypressed !='K') && (keypressed != 'k'));
	gotoxy(1,1);
	clrscr();
	cout<<"Press any key to stop"<<endl;
	getch();
	return 0;
}
