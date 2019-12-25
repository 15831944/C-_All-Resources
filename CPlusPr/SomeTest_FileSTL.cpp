/*test stl algorithm and iterator */
/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void main()
{
	int a[5]={5,7,8,3,1};
	int i=5;
	vector<int> v(a,a+5);
	vector<int>::iterator itr;
	int *p=find(a,a+5,i);
	cout<<*p<<endl;
	itr=find(v.begin(),v.end(),i); //find 返回迭代器,参数要求是迭代器	
	if(itr!=v.end())
		cout<<"found "<<*itr<<" at position "<<itr-v.begin()<<endl;
	else
		cout<<"not found"<<endl;

    //test sort and copy for output
	ostream_iterator<int> oitr(cout, " "); //输出迭代器
	//copy(v.begin(),v.end(),oitr); cout<<endl;
	copy(a,a+5,oitr); cout<<endl;
	cout<<"after sort"<<endl;
	sort(v.begin(),v.end());
    copy(v.begin(),v.end(),oitr);
}
*/
/*test file read and write*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void main()
{
	ifstream ifs;
	char fn[20]="testforfile.txt"; // 注意 默认当前路径为工程文件所在路径
	char line[100];
	ifs.open(fn);

	// 先演示最简单的读取
    if(ifs.good()){
		//ifs.getline(line,120,'\n'); 
		ifs>>line;
		cout<<line<<endl;
    }	
	else
		cout<<"open file fause"<<endl;
    
	// 为每个行加行号显示
	/*
	ifs.seekg(0);
	int i=1;	
	while(!ifs.eof()){		
		ifs.getline(line,120,'\n');
		cout<<i++<<":"<<line<<endl;
	}*/
	// 结果存入另外的文件
	/*
    ifs.seekg(0);
	int i=1;
	ofstream ofs("testfileout.txt");
	while(!ifs.eof()){		
		ifs.getline(line,120,'\n');
		ofs<<i++<<":"<<line<<endl;
	}
	ifs.close();
	ofs.close();
	*/
	// 结果存入自身文件,如果对文本操作可能比较麻烦
	// 可以先建立临时文件，再复制临时，然后删除临时
	// 或者将所有文本读入内存流中，在内存中修改数据，然后再回写
	ifs.close(); 
	int i=1;
	fstream fs("testforfile.txt",ios::in|ios::out);
    if(fs.good()){    
	while(!fs.eof()){		
		fs>>line; 
		fs.seekp(-2);
		fs<<"a:"<<line<<endl;
	}
	}else
		cout<<"open file error"<<endl;
	fs.close();
}
