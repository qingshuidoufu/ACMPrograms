#include <bits/stdc++.h>

using namespace std;
int main() {
	
	int n;

	scanf("%d",&n);  //读取n,表示n行
	char ch;
	getchar(); //吞回车
	
	while (n--) //循环n次
	{
		
	

		stack<char> s; //用栈
		
		while (true)
		{
			ch = getchar();  //读1字符
			if (ch == '\n' ||ch==' '|| ch==EOF) {  //读到空格.末尾输出和退栈
				while (!s.empty()) {		//栈非空
					printf("%c", s.top());  //输出栈顶
					s.pop(); //退栈
				}
				
				if (ch == '\n' || ch == EOF) { //到达行尾退出循环
					break;
				}
				printf(" ");   // 没到末尾补全空格
			}
			else {
				s.push(ch); //循环入栈(
			}

		}
		printf("\n"); //末尾补全回车
	}
	return 0;
}