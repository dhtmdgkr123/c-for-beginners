//Joy�� ĳ���ٿ����� �µ��� ������ �����ϴ� ���̴�.

//Joy�� �̱��� ���µ� �µ��� �׻� ȭ���� �����ȴٴ� ������ �߰��ߴ�.
//�µ� ��ȯ ������ �˰�, Joy�� ȭ���� ������ ��ȯ�� �� �ֵ��� �����ּ���.
#include<stdio.h>
 
void main()
{
    float cels, fahr;
 
    //ȭ���� �Է¹޴´�
    printf("\nȭ���� �Է��ϼ���:");
    scanf("%f",&fahr);
 
    //ȭ���� ������ ��ȯ�ϴ� ����
    cels = (fahr - 32) * 5 / 9;

    //������
    printf("\n Celsius = %.3f", cels); //�Ҽ��� �ڸ����� ����Ͽ� ��Ȯ���� ����
}