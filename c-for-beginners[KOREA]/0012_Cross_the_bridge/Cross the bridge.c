//��� �������� ��� ������ ������ ���� �ִ�.
//�� �������� ���忡 ������ ������� �ٸ��� �ǳʾ��ϴµ�
//�ڿ����ط� ���� �������� ���Ҵ�.
//���� ��а� �� ���� �ִ� ���ٸ��� �̿��ؾ��Ѵ�.
//�ٸ� �� ���ٸ��� �����ð� �̿����� �ʾ� �߰��߰� ������ �μ��� �� �ִ�.
//������ �� 10���̸� ���� �������� �ٸ� ��, ����� �ǳμ� �������ΰ� ?

//����
//- 10���� ���ǿ� ���� �������� �Է��Ѵ�(1 - 5)
//- ������� ù��° ���Ǻ��� ���ʴ�� �����̸� �̶� �������� �������� 1�� �پ���
//- ���� ���� ������ �μ����ٸ� ���ִ� ������ ����� ������ �Ҽ��ִ�.
//(�̰�� �����Ѹ�ŭ ���� ������ �������� ����)
//- ���̻� �ǳμ� ������ �����Ѵ�.

#include <stdio.h>
#include <stdlib.h>

int count = 0;
int main() {
	int bridge[10] = { 0 };
	int jump = 0;
	int i = 0;
	for (i = 0; i < 10; i++) {
		printf("%d ��° ������ �������� �Է��ϼ���: ", i+1);
		scanf("%d", &bridge[i]);
		if (bridge[i] > 5 || bridge[i] < 1) {
			printf("�������� ���� ���Դϴ�[1-5]\n");
			i--;
			continue;
		}

	}
	i = 0;
	while (1) {
		if (i == 9) {
			bridge[i]--;
			count++;
			i = 0;
		}
		else if (bridge[i] > 0) { //�Ϲ������� �ǳʰ���
			bridge[i]--;
			i++;
		}
		else if(bridge[i] <= 0) {
			while (1) { //���� �Ÿ����
				jump++;
				i++;
				if (bridge[i] != 0)
					break;
			}
			if (bridge[i - jump-1] < jump) { //������ �Ұ��� �� ��
				printf("%d ��° ������ ������ �ǳμ� �����ϴ�\n", i-jump+1);
				break;
			}
			else { //������ ���� �� ��
				bridge[i - jump-1] -= jump;
			}
		}
		jump = 0;
	}
	printf("\n");
	printf("%d �� ���� �ٸ��� �ǳ� �� �ֽ��ϴ�\n", count); //��� ���
	return 0;
}