#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char pos[5];	//�y��
int i;			//���j��Ϊ�
int rpos[5];	//���H����m�Ϊ�

int randpos() {
	pos[0] = 'a';
	pos[1] = 'b';
	pos[2] = 'c';
	pos[3] = 'd';
	pos[4] = 'e';	//��l�ơA�T�{�S���Ŧr��
	rpos[0] = 10; 
	rpos[1] = 20; 
	rpos[2] = 30; 
	rpos[3] = 40; 
	rpos[4] = 50;	//��l�ơA����@�}�l�P�_���~
	
	i = 0;			//�}�l�j��e����l��
	while (1) {
		rpos[i] = (rand() % 5);
		if (rpos[i] == rpos[i - 1] || rpos[i] == rpos[i - 2] || rpos[i] == rpos[i - 3] || rpos[i] == rpos[i - 4]) continue;  //����ۦP��m
		pos[rpos[i]] = '1' + i;
		i++;
		if (i >= 5) break;	

	}
//////////////////////////////�H�U�����զ��L���`���t�y��////////////////////////////////////
	i = 0;
	while (1) {
		printf("%c\n", pos[i]);
		i++;
		if (i >= 5) break;
	}
}

int main() {
	srand(time(NULL));	
	randpos();
	
	return 0;
}