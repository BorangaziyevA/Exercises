#include<string>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool pred(char i)
{ 
	return i == ' ';
}

void main()
{
	string str("мир! Привет!");

	////2.2

	//int x;
	//cout << "String:" << endl;
	//cin >> str;

	//cout << "Number:" << endl;
	//cin >> x;

	//string str1(str,0, x);
	//cout << str1;

	////2.1
	//char c;
	//int n;
	//cout << "Symbol:" << endl;
	//cin >> c;	
	//cout << "Number of repetitions:" << endl;	
	//cin >> n;

	//string str1(n,c);
	//cout << str1 << endl;

	////1.5
	//cout << "Sentence:" << endl;
	//cin >> str;

	//string str1;

	//cout << "Another sentence:" << endl;
	//cin >> str1;

	//if (str.size() == str1.size())
	//{
	//	cout << str << " " << str1 << "(They are equal)" << endl;
	//}
	//else if (str.size() > str1.size())
	//{
	//	cout << str << endl;
	//}
	//else
	//{
	//	cout << str1 << endl;
	//}




	////1.4
	//cout << "Sentence:" << endl;
	//cin >> str;

	//string str1;
	//cout << "Enter reverse sentence:" << endl;
	//cin >> str1;

	//reverse(str1.begin(), str1.end());

	//if (str1 == str)
	//{
	//	cout << "correct" << endl;
	//}
	//else
	//{
	//	cout << "incorrect" << endl;
	//}

	////1.3
	//cout << "Sentence:" << endl;
	//cin >> str;

	//string str1("мир!");
	//cout << "Word:" << endl;
	//cin >> str1;
	//if (str.find(str1) != string::npos)
	//{
	//	cout << "Word" << endl;
	//}
	//else
	//{
	//	cout << "No word" << endl;
	//}

	////1.2
	//cout << "Sentence:" << endl;
	//cin >> str;
	//int x = 0;
	//for (size_t i = 0; i < str.size(); i++)
	//{
	//	if (str[i] == ' ')
	//	{
	//		x++;
	//	}
	//}
	//x++;
	//cout << "Count of words: " << x << endl;


	//cout << count_if(str.begin(), str.end(), pred);


	////1.1
	//cout << "Sentence:" << endl;
	//cin >> str;
	//string str1 = str;

	//reverse(str1.begin(), str1.end());

	//if (str1 == str )
	//{
	//	cout << "This is palyndrom" << endl;
	//}
	//else
	//{
	//	cout << "This is not palyndrom" << endl;
	//}













	//string s("Hello world!1234");

	//cout << s.size() << endl;
	//cout << s.max_size() << endl;
	//cout << s.capacity() << endl;




















	//char c = 'a';
	//wchar_t wc = L'f';

	//cout << c << endl;

	//wcout << wc << endl;


	//string s;
	//basic_string<char> ss;
	//
	//wstring ws = L"Hello!";
	//basic_string<wchar_t> wss;

	//s = string(begin(ws), end(ws));

	//cout << s << endl;

	//s += to_string(1);

	//cout << s << endl;

	//

	system("pause");
}