//��ϰ5.9��
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

//��ϰ5.10:
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
//��ϰ5.11:ͳ�ƿո�Ҫ��std::cin.get()
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
//��ϰ5.12:
//#include<iostream>
//int main()
//{
//	int ffCnt,flCnt,fiCnt;
//	ffCnt = flCnt = fiCnt = 0;
//	char c,prech='\0';
//	std::string s;
//	while (std::cin.get(c)) {
//		bool flag = false;
//		if (prech == 'f')
//		{
//			switch (c)
//			{
//			case 'f':
//				ffCnt++;
//				flag = true;
//				break;
//			case 'l':
//				flCnt++;
//				break;
//			case 'i':
//				fiCnt++;
//				break;
//			}
//			
//		}
//		if (flag) prech = '\0';
//		else prech = c;
//		
//	}
//	std::cout << " ff : " << ffCnt << " ";
//	std::cout << " fl : " << flCnt << " ";
//	std::cout << " fi : " << fiCnt << " ";
//}