#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char pos[5];	//�y��
int i;			//���j��Ϊ�
int rpos[10];	//���H����m�Ϊ�


int randpos() {
	pos[0] = 'a';
	pos[1] = 'b';
	pos[2] = 'c';
	pos[3] = 'd';
	pos[4] = 'e';	//��l�ơA����Ŧr���P�_���~
	rpos[0] = 10;
	rpos[1] = 20;
	rpos[2] = 30;
	rpos[3] = 40;
	rpos[4] = 50;	//�H�U������P�_������ҼW�]
	rpos[5] = 60;  
	rpos[6] = 70;
	rpos[7] = 80;
	rpos[8] = 90;
	//��l�ơA�ѨM���]�m���ܼƬҬ�0 �ӳy���P�_���~

	i = 4;			//�}�l�j��e����l��
	while (1) {
		rpos[i] = (rand() % 5);
		if (rpos[i] == rpos[i + 1] || rpos[i] == rpos[i + 2] || rpos[i] == rpos[i + 3] || rpos[i] == rpos[i + 4]) continue;  //����ۦP��m
													//cotinue�����L�H�U�ʧ@�A�j�骽���i�J�U�@��
		pos[rpos[i]] = '1' + i;
		i--;
		if (i < 0) break;

	}
	//////////////////////////////�H�U�����զ��L���`���t�y���A�i���i�L////////////////////////////////////
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