#include "Common.h"
#include "Solution.h"
#include <tuple>
#include <random>
#include <regex>
#include "SortClass.h"
#include "SolutionMediumNew.h"
#include "AutumnMove.h"

void printSudo(vector<vector<char>>& bb) 
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++) 
		{
			cout << bb[i][j] << ' ';
		}
		cout << endl;
	}
}

template<typename T>
void PrintVec(const vector<T>& nums)
{
	cout << "\n";
	for (auto &it:nums)
	{
		cout << it << " ";
	}
	cout << "\n";
}

//取二进制（非符号位）的最高位1
uint64_t hight_bitCur(uint64_t x){//0010 1100 0000 0000 0000 0000 0000 0000 0000 0001
	x = x | (x >> 1);              //0011 1110 0000 0000 0000 0000 0000 0000 0000 0000
	x = x | (x >> 2);              //0011 1111 1000 0000 0000 0000 0000 0000 0000 0000
	x = x | (x >> 4);              //0011 1111 1111 1000 0000 0000 0000 0000 0000 0000
	x = x | (x >> 8);              //0011 1111 1111 1111 1111 1000 0000 0000 0000 0000
	x = x | (x >> 16);             //0011 1111 1111 1111 1111 1111 1111 1111 1111 1111
	x = x | (x >> 32);
	// 如果数特别大， 这里感觉会溢出， 所以这里只使用于小于数据最大值1/2的数。
	return (x + 1);        //0100 0000 0000 0000 0000 0000 0000 0000 0000 0000
}

int main(int argc,char* argv)
{
	//使用智能指针
	shared_ptr<Solution> s_ptr;
	s_ptr->generateParenthesis(3);
	tuple<int, double, string> tupStruct;
	tupStruct = make_tuple(1, 2.6, "adawd");
	cout << get<0>(tupStruct)<<endl;
	cout << get<1>(tupStruct) << endl;
	cout << get<2>(tupStruct) << endl;
	s_ptr->divide(1,1);
	string pattern("[^c]ei");
	pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
	regex reg(pattern);
	smatch results;
	string test_str = "receipt freind theif receive";
	if (regex_search(test_str, results, reg))
	{
		cout << results.str() << endl;
	}
	//确定随机数的范围
	uniform_int_distribution<unsigned> u(0, 100);
	default_random_engine e;
	vector<int> nums1 = { 1, 1, 2, 1, 2, 2, 1,5,6,7,8,9,-1,-2,-5};
	vector<int> nums2 = { 197, 130, 1 };
	int nums[7] = {0};
	for (int i = 0; i < 7;i++)
	{
		nums[i] = u(e);
	}
// 	unique_ptr<SortSequence::SortClass> uniSolt_ptr;
// 	cout << "\n请输入需要的排序0-冒泡排序1-选择排序2-插入排序3-希尔排序4-归并排序5-快速排序6-堆排序7-基数排序\n";
// 	int temp = 0;
// 	cin >> temp;
// 	cout << "请输入要排序的数\n";
// 	vector<int> pNum;
// 	int pNumber = 0;
// 	while (cin >> pNumber)
// 	{
// 		pNum.push_back(pNumber);
// 	}
// 	switch (temp)
// 	{
// 	case 0:
// 		uniSolt_ptr->BuppleSort(pNum);
// 		break;
// 	case 1:
// 		uniSolt_ptr->SelectSort(pNum);
// 		break;
// 	case 2:
// 		uniSolt_ptr->InsertSort(pNum);
// 		break;
// 	case 3:
// 		uniSolt_ptr->ShellSort(pNum);
// 		break;
// 	case 4:
// 		uniSolt_ptr->MergeSort(pNum);
// 		break;
// 	case 5:
// 		uniSolt_ptr->QuickSort(pNum);
// 		break;
// 	case 6:
// 		uniSolt_ptr->HeapSort(pNum);
// 		break;
// 	case 7:
// 		uniSolt_ptr->RadixSort(pNum);
// 		break;
// 	default:
// 		break;
// 	}
// 	cout << "排序结果\n";
// 	for (auto &it:pNum)
// 	{
// 		cout << it << " ";
// 	} 
	cout << endl;
	vector<string> res = { "a==b", "b!=a" };
	vector<char> a1({ '.', '1', '.', '.', '7', '.', '.', '.', '.' });
	vector<char> a2({ '.', '.', '.', '.', '.', '1', '2', '9', '.' });
	vector<char> a3({ '2', '.', '.', '.', '.', '.', '.', '.', '6' });
	vector<char> a4({ '.', '.', '7', '.', '.', '.', '.', '.', '.' });
	vector<char> a5({ '.', '.', '.', '.', '8', '.', '1', '6', '4' });
	vector<char> a6({ '.', '.', '.', '.', '4', '.', '.', '.', '.' });
	vector<char> a7({ '.', '.', '.', '.', '5', '8', '.', '7', '.' });
	vector<char> a8({ '6', '.', '.', '.', '.', '2', '.', '.', '.' });
	vector<char> a9({ '5', '4', '.', '.', '.', '3', '9', '.', '.' });
	vector<vector<char>> aa({ a1, a2, a3, a4, a5, a6, a7, a8, a9 });
	int number = 0;
    vector<int> vec;
    srand((unsigned int)time(NULL));
    for (int i = 0; i < 10; ++i)
    {
        vec.emplace_back(rand());
    }
	//AutumnMove::Instance().findContinuousSequence(9);
	cout << hight_bitCur(64);
	system("pause");
	return 0;
}