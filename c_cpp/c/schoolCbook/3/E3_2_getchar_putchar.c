//�ַ����������getchar(),��putchar()��ʹ��
//getchar()�ǴӼ��̶�һ���ַ����ȴ��س�Ȼ�󰴻س��������룻��ʽ������=getchar();
//puchar()�ǰ��ַ�д����ǰ����λ�ã�                                     ��ʽ��putchar(����);
#include<stdio.h>
int main()
{
    char ch;
                       //֪�����Ǹ����𣿿����������ӳ���Ŀɶ��Ժͽṹ��������

    printf("press a key and then press Enter: ");
    ch=getchar(); //�Ӽ���������һ���ַ������س����������룬���ַ��ᱻ�������ch
///////���������ˣ���ֻ�����һ��
    printf("you pressed ��");
    putchar(ch);         //����Ļ����ʾch�е��ַ�
    putchar('\n');         //����
}
