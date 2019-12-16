//Problem Description
//��һȺ�ˣ���ƹ�������������׽��˺ɱ��ÿ������֮������һ��������
//�����Ĺ������£�
//���A�����B��B�ִ����C����A��C֮��û�н��й���������ô���϶���Aһ���ܴ��C��
//���A�����B��B�ִ����C�����ң�C�ִ����A����ôA��B��C���߶������ܳ�Ϊ�ھ���
//���������������ѭ���������������ȷ���ھ����������������һȺ����ѡ�֣��ھ��������ɳ�˺ɱ֮��ȷ���Ƿ��Ѿ�ʵ���ϲ����˹ھ���
//
//
//Input
//���뺬��һЩѡ��Ⱥ��ÿȺѡ�ֶ���һ������n(n < 1000)��ͷ�����n��ѡ�ֵı�����������������һ��ѡ�����֣��м��һ�ո񣩱�ʾ��ǰ��սʤ���ߡ����nΪ0�����ʾ���������
//
//
//    Output
//    ����ÿ��ѡ��Ⱥ�������жϳ������˹ھ�������һ���������Yes����������һ���������No����
//
//
//    Sample Input
//    3
//    Alice Bob
//    Smith John
//    Alice Smith
//    5
//    a c
//    c d
//    d e
//    b e
//    a d
//    0
//
//
//    Sample Output
//    Yes
//    No

//��һ���˼·�Ƕ��弯��a�ͼ���b,�������˷Ž�����a,������ʧ�ܼ�¼�ķŽ�����b,���a-b=1,
//����Բ����ھ�,������(ԭ���ǹھ�������ʧ�ܼ�¼,�ǹھ���Ȼ��ʧ�ܼ�¼)
#include<bits/stdc++.h>
using namespace std;
int main() {
		set<string> all;
		set<string> losers;
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		all.clear();
		losers.clear();
		while (n--) {
			
			string left, right;
			cin >> left >> right;
			all.insert(left);
			all.insert(right);
			losers.insert(right);
		}
		if ((all.size() - 1) == losers.size()) {
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
		
	}
	return 0;
}