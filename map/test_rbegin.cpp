/*************************************************************************
	> File Name: test_rbegin.cpp
	> Author: yinshangqing
	> Mail: 841668821@qq.com 
	> Created Time: 2018年02月03日 星期六 10时58分30秒
 ************************************************************************/

#include <iostream>
#include <map>
#include <string>

using namespace std;

void display(map<int,string> &);
void disrplay(map<int,string> &);

int main()
{
	map<int,string> map_test;
	map_test[100] = "100sadj,n";
	map_test[29]  = "29mmsad";
	map_test[119] = "119sdfsdjf";
	map_test[19]  = "19psdfjkdsn";
	display(map_test);	
	cout << "-----------------------------" << endl;
	disrplay(map_test);	
	
	map_test.clear();
	return 0;
}

// 正向排序
void display(map<int,string> &m_dsp)
{
	// 反向迭代器
	map<int,string>::iterator iter = m_dsp.begin();
	int i = 1;

	for(;iter != m_dsp.end();++ iter,++ i)
	{
		cout << "第" << i << "个" << endl;
		cout << "iter->first: " << iter->first << "iter->second: " << iter->second << endl;
	}	

}
// disrplay 反向排序
void disrplay(map<int,string> &m_dsp)
{
	// 反向迭代器
	map<int,string>::reverse_iterator r_iter = m_dsp.rbegin();
	int i = 1;

	for(;r_iter != m_dsp.rend();++ r_iter,++ i)
	{
		cout << "第" << i << "个" << endl;
		cout << "r_iter->first: " << r_iter->first << "r_iter->second: " << r_iter->second << endl;
	}	
}
