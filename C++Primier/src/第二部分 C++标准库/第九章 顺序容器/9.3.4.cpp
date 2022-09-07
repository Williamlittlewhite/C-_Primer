//练习9.27 单链表需要记录其前驱节点才能删除
//#include<forward_list>
//#include<iostream>
//
//int main()
//{
//	std::forward_list<int> l1{ 1,2,3,4,5,6,7,8,9,10 };
//	auto prev = l1.before_begin(), curr = l1.begin();
//	while (curr!=l1.end())
//	{
//		if ((*curr) & 1)
//		{
//			curr = l1.erase_after(prev);
//		}
//		else
//		{
//			prev = curr;
//			++curr;
//		}
//	}
//
//	for (auto i : l1)
//		std::cout << i << " ";
//
//	return 0;
//}

//练习9.28：单链表需要记录其前驱节点才能在尾部插入
//#include<forward_list>
//#include<string>
//#include<iostream>
//#include<algorithm>
//void myfun(std::forward_list<std::string>& l1,const std::string& s1,const std::string& s2)
//{
//	bool flag = false;
//	auto prev = l1.before_begin(), curr = l1.begin();
//	for (;curr != l1.end();)
//		if (*curr != s1)
//		{
//			prev = curr;
//			curr++;
//		}
//		else if (*curr == s1)
//		{
//			curr = l1.insert_after(curr, s2);
//			flag = true;
//		}
//	if (!flag)
//		l1.insert_after(prev,s2);
//}
//
//int main()
//{
//	std::forward_list<std::string> sflst{ "Hello", "!", "World", "!" };
//	myfun(sflst, "Hello", "你好");
//	myfun(sflst, "!", "?");
//	myfun(sflst, "no!", "你好啊");
//	for (auto i : sflst)
//		std::cout << i << " ";
//	return 0;
//}


