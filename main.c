#include<stdio.h>

char card[4][13];  //�����J�P���μƦr��
int i, j;		   //���j���

int initCard() {
	
	i = 0;  
	while (1) {		//�ϥεL���j��(	while (1) �Ywhile (True) )�A�]���ȷ�
		j = 0;
		while (1) {
			if (i == 0) card[i][j] = 'A' + j;	//��⬰[0]�AA~M
			if (i == 1) card[i][j] = 'N' + j;	//��⬰[1]�AN~Z
			if (i == 2) card[i][j] = 'a' + j;	//��⬰[2]�Aa~m
			if (i == 3) card[i][j] = 'n' + j;	//��⬰[3]�An~z
			j++;								//j = j + 1
			if (j >= 13) break;					//�P�_��ơA��13��|���Xwhile�j�� (��break�Ӹ��X)
		}
		i++;
		if (i >= 4) break;
	}
////////////////////////////////////�H�U���˴���///////////////////////////////////////////
	i = 0;
	while (1) {
		j = 0;
		while (1) {
			printf("(%d, %d)%c\n", i, j, card[i][j]);
			j++;
			if (j >= 13) break;
		}
		i++;
		if (i >= 4) break;
	}
}

int main() {
	initCard();
	return 0;
}