//Problem Description
//Now our hero finds the door to the BEelzebub feng5166.He opens the doorand finds feng5166 is about to kill our pretty Princess.But now the BEelzebub has to beat our hero first.feng5166 says, "I have three question for you, if you can work them out, I will release the Princess, or you will be my dinner, too." Ignatius says confidently, "OK, at last, I will save the Princess."
//
//"Now I will show you the first problem." feng5166 says, "Given a sequence of number 1 to N, we define that 1,2,3...N-1,N is the smallest sequence among all the sequence which can be composed with number 1 to N(each number can be and should be use only once in this problem). So it's easy to see the second smallest sequence is 1,2,3...N,N-1. Now I will give you two numbers, N and M. You should tell me the Mth smallest sequence which is composed with number 1 to N. It's easy, isn't is? Hahahahaha......"
//Can you help Ignatius to solve this problem ?
//
//
//Input
//The input contains several test cases.Each test case consists of two numbers, Nand M(1 <= N <= 1000, 1 <= M <= 10000).You may assume that there is always a sequence satisfied the BEelzebub's demand. The input is terminated by the end of file.
//
//
//Output
//For each test case, you only have to output the sequence satisfied the BEelzebub's demand. When output a sequence, you should print a space between two numbers, but do not output any spaces after the last number.
//
//
//Sample Input
//6 4
//11 8
//
//
//Sample Output
//1 2 3 5 6 4
//1 2 3 4 5 6 7 9 8 11 10

#include <bits/stdc++.h>
using namespace std;
int main() {
	int a[1001];
	int n, m;
	while (cin >> n >> m) {
		int step = 1;
		for (int i = 1; i <= n; i++) {//生成最小序列
			a[i] = i;
		}
		while (step!=m)
		{
			step++;

			next_permutation(a + 1, a + n + 1);//生成下一个更大的字典序列,把新的序列放回原空间,
												//返回值是有没有下一个序列,范围是[first,last)
		}
		for (int i = 1; i <n; i++) {  //a[0]不作使用
			cout << a[i] << " ";
		}
		cout << a[n] << endl;   //a[n]单独输出,作格式要求
	}
	return 0;
}