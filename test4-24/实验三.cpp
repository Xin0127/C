#include<iostream>
#include<string>
using namespace std;
class Student{
	private:
		string number[50];
		string name[20];
		float stu_grade[20];
	public:
		float team_grade;
	public:
		void Cin(){
			cout << "����������,׼��֤��,���˳ɼ�" << endl;
			float sum;
			for (int i = 0; i < 3; i++){
				cout << "��" << i + 1 << "��ѧ��������" << endl;
				getline(cin, name[i]);                  
				cout << "��" << i + 1 << "��ѧ��׼��֤�ţ�" << endl;
			    getline(cin, number[i]);             
			    cout << "��" << i + 1 << "��ѧ�����˳ɼ���" << endl;
			    cin >> stu_grade[i];                     
			    getchar();
			    sum += stu_grade[i];
			}
			cout << "�Ŷӳɼ���" << sum<< endl;
		}
		void Cout(){
			cout << "����" << "\t" << "׼��֤��" << "\t "<< "���˳ɼ�" <<endl;
			for (int i = 0; i < 3; i++){
				cout << name[i] << "\t" << number[i] <<"\t "<< stu_grade[i] <<endl;
			}
		}
};
int main(){
	Student stu;
	stu.Cin();
	stu.Cout();
	return 0;
}

/*
#include<iostream>
#include<math.h>
using namespace std;
class Circle{
private:		
    float r;
public:
	void Area(float r){
		float m = 20*(3.14*pow((r+3),2)-3.14*pow(r,2));
		cout << "�������Ϊ" << m <<"Ԫ"<< endl;
	}
	void Girth(float r){
		float n = 35*2*3.14*(r+3);
		cout << "դ�����Ϊ" << n <<"Ԫ"<< endl;
	}
};
int main(){
	float r;
	cout<<"������Ӿ�ذ뾶��";
	cin>>r;	
	Circle money;
	money.Area(r);
	money.Girth(r);
	return 0;
}

#include<math.h>
using namespace std;
int main(){
	int r;
	cout << "������Ӿ�ذ뾶���ף�: ";
	cin>>r;
	double m = 20*(3.14*pow((r+3),2)-3.14*pow(r,2));
	double n = 35*2*3.14*(r+3);
	cout << "�������Ϊ" << m <<"Ԫ"<< endl;
	cout << "դ�����Ϊ" << n <<"Ԫ"<< endl;
	return 0;
}*/
