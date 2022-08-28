//Á·Ï°5.9£º
//#include<iostream>
//#include<string>
//int main()
//{
//	std::string temp;
//	int cnta = 0, cnte = 0, cnti = 0, cnto = 0, cntu = 0;
//	while (std::cin >> temp)
//	{
//		for (auto i : temp)
//		{
//			if (i == 'a')
//				++cnta;
//			else if (i == 'e')
//				++cnte;
//			else if (i == 'i')
//				++cnti;
//			else if (i == 'o')
//				++cnto;
//			else if (i == 'u')
//				++cntu;
//		}
//		std::cout << "a : " << cnta << " ";
//		std::cout << "e : " << cnte << " ";
//		std::cout << "i : " << cnti << " ";
//		std::cout << "o : " << cnto << " ";
//		std::cout << "u : " << cntu << " ";
//		std::cout << std::endl;
//	}
//	
//	return 0;
//}

//Á·Ï°5.10:
//#include<iostream>
//#include<string>
//int main()
//{
//	std::string temp;
//	int cnta = 0, cnte = 0, cnti = 0, cnto = 0, cntu = 0;
//	while (std::cin >> temp)
//	{
//		for (auto i : temp)
//		{
//			if (i == 'a'||i=='A')
//				++cnta;
//			else if (i == 'e'||i=='E')
//				++cnte;
//			else if (i == 'i'||i=='I')
//				++cnti;
//			else if (i == 'o'||i=='O')
//				++cnto;
//			else if (i == 'u'||i=='U')
//				++cntu;
//		}
//		std::cout << "a : " << cnta << " ";
//		std::cout << "e : " << cnte << " ";
//		std::cout << "i : " << cnti << " ";
//		std::cout << "o : " << cnto << " ";
//		std::cout << "u : " << cntu << " ";
//		std::cout << std::endl;
//	}
//
//	return 0;
//}
//Á·Ï°5.11:Í³¼Æ¿Õ¸ñÒªÓÃstd::cin.get()
//#include<iostream>
//int main()
//{
//	int aCnt, eCnt, iCnt, oCnt, uCnt,spaceCnt,tabCnt,newlineCnt;
//	aCnt = eCnt = iCnt = oCnt = uCnt = spaceCnt = tabCnt = newlineCnt = 0;
//	char c;
//	while (std::cin.get(c)) {
//		switch (c)
//		{
//		case 'a':
//		case 'A':
//			aCnt++;
//			break;
//		case 'e':
//		case 'E':
//			eCnt++;
//			break;
//		case 'i':
//		case 'I':
//			iCnt++;
//			break;
//		case 'o':
//		case 'O':
//			oCnt++;
//			break;
//		case 'u':
//		case 'U':
//			uCnt++;
//			break;
//		case ' ':
//			spaceCnt++;
//			break;
//		case '\n':
//			newlineCnt++;
//			break;
//		case '\t':
//			tabCnt++;
//			break;
//		}
//	}
//	std::cout << " a : " << aCnt << " ";
//	std::cout << " e : " << eCnt << " ";
//	std::cout << " i : " << iCnt << " ";
//	std::cout << " o : " << oCnt << " ";
//	std::cout << " u : " << uCnt << " ";
//	std::cout << " space : " << spaceCnt << " ";
//	std::cout << " tab : " << tabCnt << " ";
//	std::cout << " newline : " << newlineCnt << " ";
//}
//Á·Ï°5.12:
#include<iostream>
int main()
{
	int aCnt, eCnt, iCnt, oCnt, uCnt,ffCnt,flCnt,fiCnt;
	aCnt = eCnt = iCnt = oCnt = uCnt = ffCnt = flCnt = fiCnt = 0;
	char c;
	std::string s;
	while (std::cin.get(c)) {
		switch (c)
		{
		case 'a':
		case 'A':
			aCnt++;
			break;
		case 'e':
		case 'E':
			eCnt++;
			break;
		case 'i':
		case 'I':
			iCnt++;
			break;
		case 'o':
		case 'O':
			oCnt++;
			break;
		case 'u':
		case 'U':
			uCnt++;
			break;
		}
		if(c=='f')
			s += c;
		
		//std::cout << s << std::endl;
		if (s[0]=='f'&&s.size()==2) {
			if (s[1] == 'f')
			{
				ffCnt++; s.clear();
			}
			else if (s[1] == 'l')
			{
				flCnt++; s.clear();
			}
			else if (s[1] == 'i')
			{
				fiCnt++; s.clear();
			}

		}
	
		
	}
	std::cout << " a : " << aCnt << " ";
	std::cout << " e : " << eCnt << " ";
	std::cout << " i : " << iCnt << " ";
	std::cout << " o : " << oCnt << " ";
	std::cout << " u : " << uCnt << " ";
	std::cout << " ff : " << ffCnt << " ";
	std::cout << " fl : " << flCnt << " ";
	std::cout << " fi : " << fiCnt << " ";
}