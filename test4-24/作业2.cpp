#include<iostream>//����Ԥ���� 
using namespace std;//ʹ�������ռ�
class Animal_of_CX{//���� Animal_of_CX�� 
 public://public���θó�Ա����������Ȩ�޿���Ϊ public
    void eat(){//�����Ա����eat() 
		cout<<"animal eat"<<endl;//���"animal eat"������ 
	}
 private://private���θó�Ա����������Ȩ�޿���Ϊ private
 	void sleep(){//�����Ա����sleep()
 		cout<<"animal sleep"<<endl;//���"animal sleep"������ 
	 }
 public:///public���θó�Ա����������Ȩ�޿���Ϊ public
 	void breathe(){//�����Ա����breathe()
 		cout<<"animal breathe"<<endl;//���"animal breathe"������ 
 		// sleep();
	 }
};
class Fish_of_CX:public Animal_of_CX{//���� Fish_of_CX�࣬�����Ա���� 
};
int main(){//���������� 
	Animal_of_CX simba;
	// instance
	simba.eat();//���� Animal_of_CX���µ� eat()���� 
	Fish_of_CX nemo;
	// fh.sleep();
	nemo.breathe();//���� Fish_of_CX���µ� breathe()����
	return 0;//main��������ֵΪ0
}
	
	



/*#include<iostream>
using namespace std;
int main(){
	cout <<"ˮ�ɻ���Ϊ��"; 
	int n = 100;
	do{
		int a = n/100;
	    int b = (n-(a*100))/10;
        int c = n-a*100-b*10;
		if (a*a*a + b*b*b + c*c*c == n) {
			cout << n <<" ";
		}
		n++;
	}while(n<=999);
	return 0;
}

/*
int main(){
	cout << "������һ����λ����"; 
	int n ;
	cin >> n;
	
	
	else{
		n++
		cout << n <<"����ˮ�ɻ���"<<endl;
	}
	return 0;
}

/*
int main(){
	int n;
	cin>>n;
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0){
		cout<<n<<"��������"<<endl;
	}else{
		cout<<n<<"�겻������"<<endl;
	}
	return 0; 
}
*/
