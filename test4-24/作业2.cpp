#include<iostream>//编译预处理 
using namespace std;//使用命名空间
class Animal_of_CX{//创建 Animal_of_CX类 
 public://public修饰该成员方法，访问权限控制为 public
    void eat(){//定义成员方法eat() 
		cout<<"animal eat"<<endl;//输出"animal eat"并换行 
	}
 private://private修饰该成员方法，访问权限控制为 private
 	void sleep(){//定义成员方法sleep()
 		cout<<"animal sleep"<<endl;//输出"animal sleep"并换行 
	 }
 public:///public修饰该成员方法，访问权限控制为 public
 	void breathe(){//定义成员方法breathe()
 		cout<<"animal breathe"<<endl;//输出"animal breathe"并换行 
 		// sleep();
	 }
};
class Fish_of_CX:public Animal_of_CX{//创建 Fish_of_CX类，定义成员属性 
};
int main(){//定义主函数 
	Animal_of_CX simba;
	// instance
	simba.eat();//调用 Animal_of_CX类下的 eat()方法 
	Fish_of_CX nemo;
	// fh.sleep();
	nemo.breathe();//调用 Fish_of_CX类下的 breathe()方法
	return 0;//main函数返回值为0
}
	
	



/*#include<iostream>
using namespace std;
int main(){
	cout <<"水仙花数为："; 
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
	cout << "请输入一个三位数："; 
	int n ;
	cin >> n;
	
	
	else{
		n++
		cout << n <<"不是水仙花数"<<endl;
	}
	return 0;
}

/*
int main(){
	int n;
	cin>>n;
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0){
		cout<<n<<"年是闰年"<<endl;
	}else{
		cout<<n<<"年不是闰年"<<endl;
	}
	return 0; 
}
*/
