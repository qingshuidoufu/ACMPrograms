#include <bits/stdc++.h>

using namespace std;
int main() {
	
	int n;

	scanf("%d",&n);  //��ȡn,��ʾn��
	char ch;
	getchar(); //�̻س�
	
	while (n--) //ѭ��n��
	{
		
	

		stack<char> s; //��ջ
		
		while (true)
		{
			ch = getchar();  //��1�ַ�
			if (ch == '\n' ||ch==' '|| ch==EOF) {  //�����ո�.ĩβ�������ջ
				while (!s.empty()) {		//ջ�ǿ�
					printf("%c", s.top());  //���ջ��
					s.pop(); //��ջ
				}
				
				if (ch == '\n' || ch == EOF) { //������β�˳�ѭ��
					break;
				}
				printf(" ");   // û��ĩβ��ȫ�ո�
			}
			else {
				s.push(ch); //ѭ����ջ(
			}

		}
		printf("\n"); //ĩβ��ȫ�س�
	}
	return 0;
}