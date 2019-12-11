//Problem Description
//Բ����Χ����2n���ˡ�����n�����Ǻ��ˣ�����n�����ǻ��ˡ�����ӵ�һ���˿�ʼ������������m���ˣ��������������ˣ�Ȼ��ӱ���������֮��ʼ�������ٽ������ĵ�m���˴����������˷������ϴ���Χ����Բ���ϵ��ˡ�����Ԥ��Ӧ��ΰ�����Щ�����뻵�˵���λ����ʹ���ڴ���n����֮��Բ����Χ����ʣ���n����ȫ�Ǻ��ˡ�
//
//
//Input
//�������ݣ�ÿ���������룺���˺ͻ��˵�����n�� <= 32767��������m�� <= 32767����
//
//
//Output
//����ÿһ�����ݣ����2n����д��ĸ����G����ʾ���ˣ���B����ʾ���ˣ�50����ĸΪһ�У���������ֿհ��ַ����������ݼ�����һ���С�
//
//
//Sample Input
//2 3
//2 4
//
//
//Sample Output
//GBBG
//
//BGGB
//
//
//Source
//AHOI1999
#include <iostream>
#include <vector>

using namespace std;
int main() {
	vector <int> table; //ģ��Բ��
	int n, m;
	while (cin>>n>>m) {
		table.clear();
		for (int i = 0; i < 2 * n; i++) {
			table.push_back(i);//��ʼ��
		}
		int pos = 0;  //��¼λ��
		for (int  i = 0; i < n; i++)
		{
			pos = (pos + m - 1) % table.size();
			table.erase(table.begin() + pos);  //����n������

		}
		int j = 0; 
		for (int  i = 0; i < 2*n; i++)  //��ӡԤ�Ȱ��źõ�λ��
		{
			if (!(i % 50) && i) {  //50����ĸ��һ��
				cout << endl;
			}
			if (j < table.size()&& i == table[j]) { //table���µĶ��Ǻ���(��ŵ��������е�ֵ��)
				j++;
				cout << "G";

			}
			else {
				cout << "B";
			}
			
		}
		cout << endl << endl;
	}
	return 0;
}