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
			cout << "请输入姓名,准考证号,个人成绩" << endl;
			float sum;
			for (int i = 0; i < 3; i++){
				cout << "第" << i + 1 << "个学生姓名：" << endl;
				getline(cin, name[i]);                  
				cout << "第" << i + 1 << "个学生准考证号：" << endl;
			    getline(cin, number[i]);             
			    cout << "第" << i + 1 << "个学生个人成绩：" << endl;
			    cin >> stu_grade[i];                     
			    getchar();
			    sum += stu_grade[i];
			}
			cout << "团队成绩：" << sum<< endl;
		}
		void Cout(){
			cout << "姓名" << "\t" << "准考证号" << "\t "<< "个人成绩" <<endl;
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
		cout << "过道造价为" << m <<"元"<< endl;
	}
	void Girth(float r){
		float n = 35*2*3.14*(r+3);
		cout << "栅栏造价为" << n <<"元"<< endl;
	}
};
int main(){
	float r;
	cout<<"输入游泳池半径：";
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
	cout << "输入游泳池半径（米）: ";
	cin>>r;
	double m = 20*(3.14*pow((r+3),2)-3.14*pow(r,2));
	double n = 35*2*3.14*(r+3);
	cout << "过道造价为" << m <<"元"<< endl;
	cout << "栅栏造价为" << n <<"元"<< endl;
	return 0;
}*/
