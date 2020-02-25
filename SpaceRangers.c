#include <stdio.h>

int main()
{
	int i, j;
	int startX = 4, startY = 4;
	int randX = rand() % 16;
	int randY = rand() % 16;
	int randX1 = rand() % 16;
	int randY2 = rand() % 16;
	int repl = 0;
	int cnt, check = 0;
	char input;
	char var, c1, c2;
	int score = 0;
	char fmatrix[16][16];
	
	char capId[] = {'C', 'a', 'p',
			  		  'i', 't', 'a',
			  		  'n', ':'};
	char mtId[] = {'Q', 'R', '-', '2', '7', '3', ':'};
	char mtReply2[] = {'G', 'o', 't',
					 ' ', 'i', 't', '!'};
	char mtReply3[] = {'O', 'r', 'e', 'e', 't', '!'};	    
	char capReply[] = {'G', 'o', 'o',
					 'd', ' ', 'j',
					 'o', 'b', ',',
					 ' ', 's', 'i', 'r', '!'};
	char capReply2[] = {'G', 'r', 'e',
						'a', 't', ' ',
						'o', 'n', 'e',
						'!'};
	char shReply[] = {'W', 'e', 'l',
					  'l', ' ', 'd',
					  'o', 'n', 'e',
					  '!'};
	
	for(i = 0;i < 16;i++)
	{
		for(j = 0;j < 16;j++)
		{
			fmatrix[i][j] = '-';
		}
	}
	
	while(0 == 0)
	{	
		if(startX > 15)
		{
			startX = 0;
		}
		if(startX < 0)
		{
			startX = 15;
		}
		
	
		if(fmatrix[startX][startY] == '*')
		{
			score++;
			repl = 1;
			cnt = rand() % 5;
		}
		if(fmatrix[startX][startY] == '#')
		{
			score+=2;
			cnt = 100;
		}
		if(fmatrix[startX][startY] == 'A')
		{
			var = 'a';
		}
		
		fmatrix[startX][startY] = 'O';
		
		if(check == 0)
		{
			c1 = ' ';
			c2 = '*';
			check = 1;
		}else
		{
			c1 = '*';
			c2 = ' ';
			check = 0;
		}
		
		printf("%c SPACE RANGERS %c\n\n", c1, c2);
		
		if(repl == 1)
		{
			printf("--------------------------\n");
			
			if(cnt == 0)
			{
				for(i = 0;i < 8;i++)
				{
					printf("%c", capId[i]);
				}
				printf("\n");
				
				printf("\t");
				for(i = 0;i < 10;i++)
				{
					printf("%c", shReply[i]);
				}
				printf("\n");
			}
			if(cnt == 1)
			{
				for(i = 0;i < 7;i++)
				{
					printf("%c", mtId[i]);
				}
				printf("\n");
				
				printf("\t");
				for(i = 0;i < 14;i++)
				{
					printf("%c", capReply[i]);
				}
				printf("\n");
			}
			if(cnt == 2)
			{
				for(i = 0;i < 8;i++)
				{
					printf("%c", capId[i]);
				}
				printf("\n");
				
				printf("\t");
				for(i = 0;i < 10;i++)
				{
					printf("%c", capReply2[i]);
				}
				printf("\n");
			}
			if(cnt == 3)
			{
				for(i = 0;i < 7;i++)
				{
					printf("%c", mtId[i]);
				}
				printf("\n");
				
				printf("\t");
				for(i = 0;i < 7;i++)
				{
					printf("%c", mtReply2[i]);
				}
				printf("\n");
			}
			if(cnt == 4)
			{
				for(i = 0;i < 7;i++)
				{
					printf("%c", mtId[i]);
				}
				printf("\n");
				
				printf("\t");
				for(i = 0;i < 6;i++)
				{
					printf("%c", mtReply3[i]);
				}
				printf("\n");
			}
			if(cnt == 100)
			{
				printf("JK2019|DEAD:\n");
				printf("\tno,no,no?no,no,no...NOOOO\n\tDo you hear me?\n");
			}
			
			printf("--------------------------\n\n");
		}
		
		printf("SCORE: %d\n", score);
		
		if(score > 50)
		{
			fmatrix[randX1][randY2] = '#';
		}
		
		fmatrix[randX][randY] = '*';
		for(i = 0;i < 16;i++)
		{
			for(j = 0;j < 16;j++)
			{
				printf("%c", fmatrix[i][j]);
			}
		printf("\n");	
		}

		scanf("%c", &input);
		system("cls");
		
		fmatrix[startX][startY] = '-';
		switch(input)
		{
			case 'w':
				startX-=2;
			case 's':
				startX+=1;
			case 'd':
				startY+=2;
			case 'a':
				startY-=1;
		}
		randX = rand() % 16;
		randY = rand() % 16;
		randX1 = rand() % 16;
		randY2 = rand() % 16;
	}
		return 0;
}������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������
