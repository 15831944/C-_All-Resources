#include <iostream>
using namespace std;
class Matrix{
	int a[3][3];
public:
	void input(){
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cin>>a[i][j];
			}
		}
	}
	void transform(){
		for(int i=0;i<3;i++){
			for(int j=0;j<=i;j++){
				int tem = a[j][i];
				a[j][i] = a[i][j];
				a[i][j] = tem;
			}
		}
	}
	void show(){
		cout<<"datas:"<<endl;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cout<<" "<<a[i][j];
			}
			cout<<endl;
		}
	}
}; 
int main(){
	Matrix m;
	m.input();
	m.show();
	m.transform();
	m.show();
}
