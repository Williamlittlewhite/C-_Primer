//��ϰ10.29����������Ĭ�ϳ�ʼ������β�������
//#include<iostream>
//#include<fstream>
//#include<string>
//#include<vector>
//#include<iterator>
//int main()
//{
//	std::fstream ifs("iostream_iter");
//	std::istream_iterator<std::string> string_it(ifs);
//	std::istream_iterator<std::string> string_end;//Ĭ�ϳ�ʼ������β��������
//	std::vector<std::string> v;
//	while (string_it != string_end)
//	{
//		v.push_back(*string_it);
//		++string_it;
//	}
//	for (auto i : v)
//		std::cout << i << " ";
//	return 0;
//}

//��ϰ10.30:
//#include<iterator>
//#include<iostream>
//#include<algorithm>
//#include<vector>
//int main()
//{
//	std::istream_iterator<int> is(std::cin);
//	std::istream_iterator<int> is_end;
//	std::vector<int> v;
//	std::copy(is, is_end, std::back_inserter(v));
//	sort(v.begin(), v.end());
//	std::ostream_iterator<int> out_iter(std::cout, " ");
//	std::copy(v.begin(), v.end(), out_iter);
//	/*sort(v.begin(), v.end());
//	for (auto i : v)
//		std::cout << i << " ";*/
//	
//}
//��ϰ10.31
//#include<iterator>
//#include<iostream>
//#include<algorithm>
//#include<vector>
//int main()
//{
//	std::istream_iterator<int> is(std::cin);
//	std::istream_iterator<int> is_end;
//	std::vector<int> v;
//	std::copy(is, is_end, std::back_inserter(v));
//	sort(v.begin(), v.end());
//	/*v.erase(std::unique(v.begin(), v.end()), v.end());*/
//	std::ostream_iterator<int> out_iter(std::cout, " ");
//	std::unique_copy(v.begin(), v.end(), out_iter);
//	/*sort(v.begin(), v.end());
//	for (auto i : v)
//		std::cout << i << " ";*/
//
//}

//��ϰ10.32; accumulate������ҿ��� find_if���������ң�
//#include<iostream>
//#include<vector>
//#include"Sales_item.h"
//#include<algorithm>
//#include<numeric>
//int main()
//{
//	std::vector<Sales_item> v,v1;
//	Sales_item trans;
//	while (std::cin >> trans)
//	{
//		v.emplace_back(trans);
//	}
//	std::sort(v.begin(), v.end(), [](const Sales_item& s1, const Sales_item& s2) {return s1.isbn() < s2.isbn(); });
//	for (auto i =v.begin();i!=v.end();)
//	{
//		auto temp = *i;
//		auto j = std::find_if(i+1, v.end(), [temp](const Sales_item& s1)
//			{return s1.isbn() != temp.isbn();});
//		v1.push_back(std::accumulate(i+1, j, temp)); 
//		i = j;
//	}
//	for (auto i : v1)
//		std::cout << i << std::endl;
//
//	return 0;
//}

//��ϰ10.33��ѧ���õ��������ļ�������� ѧ����������ļ��������ļ���
//#include<iostream>
//#include<fstream>
//#include<iterator>
//int main(int argc,char** argv)
//{
//	std::ifstream ifs(argv[1]);
//	std::istream_iterator<int> it(ifs);
//	std::istream_iterator<int> it_end;
//	std::ofstream ofs1(argv[2]);
//	std::ofstream ofs2(argv[3]);
//	std::ostream_iterator<int> ot1(ofs1," ");
//	std::ostream_iterator<int> ot2(ofs2," ");
//	while (it!=it_end)
//	{
//		if ((*it) & 1)
//			*ot1++ = *it++;
//		else
//			*ot2++ = *it++;
//	}
//	return 0;
//}