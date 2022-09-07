 //练习9.52：
//#include<stack>
//#include<string>
//#include<vector>
//#include<iostream>
//#include<stdexcept>
//enum obj_type {LP,RP,ADD,SUB,VAL};
//struct obj{
//	obj_type t;
//	double v;
//	obj(obj_type type, double val = 0) { t = type; v = val; }
//};
//
//inline void skipws(std::string& exp, std::size_t& p)
//{
//	p = exp.find_first_not_of(" ", p);
//}
//
//inline void new_val(std::stack<obj>& so, double v)
//{
//	if (so.empty() || so.top().t == LP)
//		so.push(obj(VAL, v));
//	else if (so.top().t == ADD || so.top().t == SUB)
//	{
//		obj_type type = so.top().t;
//		so.pop();
//		if (type == ADD)
//			v += so.top().v;
//		else
//			v = so.top().v - v;
//		so.pop();
//		so.push(obj(VAL, v));
//	}
//	else
//		throw std::invalid_argument("缺少运算符");
//}
//int main()
//{
//	std::stack<obj> s;
//	std::string exp;
//	size_t p = 0, q;
//	double v;
//
//	getline(std::cin, exp);
//
//	while (p < exp.size())
//	{
//		skipws(exp, p);
//		if (exp[p] == '(') {
//			s.push(obj(LP));
//			p++;
//		}
//		else if (exp[p] == '+' || exp[p] == '-') {
//			if (s.empty() || s.top().t != VAL)
//				throw std::invalid_argument("缺少运算数");
//			if (exp[p] == '+')
//				s.push(obj(ADD));
//			else
//				s.push(obj(SUB));
//			p++;
//		}
//		else if (exp[p] == ')') {
//			p++;
//			if (s.empty())
//				throw std::invalid_argument("未匹配右括号");
//
//			if (s.top().t == LP)
//				throw std::invalid_argument("空括号");
//
//			if (s.top().t == VAL) {
//				v = s.top().v;
//				s.pop();
//				if (s.empty() || s.top().t != LP)
//					throw std::invalid_argument("未匹配右括号");
//				s.pop();
//				new_val(s, v);
//			}
//			else
//				throw std::invalid_argument("缺少运算数");
//		}
//		else
//		{
//			v = std::stod(exp.substr(p), &q);//q保存s中第一个非数值字符下标	 从运算符跳过所有空格到下一个类型
//			p += q;
//			new_val(s, v);
//		}
//	}
//
//	if (s.size() != 1 || s.top().t != VAL)
//		throw std::invalid_argument("非法表达式");
//
//	std::cout << s.top().v << std::endl;
//	return 0;
//}