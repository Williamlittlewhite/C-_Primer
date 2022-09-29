//Á·Ï°13.27:
//#include<string>
//#include<iostream>
//class HasPtr
//{
//public:
//	HasPtr(const std::string& s = std::string()) :ps(new std::string(s)), i(0), use(new std::size_t(0)) {}
//	HasPtr(const HasPtr& temp) {
//		ps = temp.ps;
//		i = temp.i;
//		++* temp.use;
//		use = temp.use;
//	}
//	HasPtr& operator=(const HasPtr& temp)
//	{
//		++* use;
//		if (-- * use == 0) {
//			delete ps;
//			delete use;
//		}
//		ps = temp.ps;
//		use = temp.use;
//		i = temp.i;
//		return *this;
//	};
//	std::string& operator*()
//	{
//		return *ps;
//	}
//	~HasPtr()
//	{
//		std::cout << "Destruct!"<<std::endl;
//		if (-- * use == 0)
//		{
//			delete ps;
//			delete use;
//		}
//	};
//private:
//	std::string* ps;
//	int i;
//	std::size_t* use;
//};
//
//int main()
//{
//	HasPtr h("hello world!");
//	HasPtr h2 = h;
//	std::cout << "h:" << *h << std::endl;
//	std::cout << "h2: " << *h2 << std::endl;
//	return 0;
//}

//Á·Ï°13.28£º¶þ²æÊ÷µÄ¹¹ÔìÓë¿½±´£¡
//#include<string>
//class TreeNode {
//private:
//	std::string value;
//	int count;
//	TreeNode* left;
//	TreeNode* right;
//public:
//	void copytree() {
//		if (left)
//			left->copytree();
//		if (right)
//			right->copytree();
//		count++;
//	}
//	int releasetree()
//	{
//		if (left)
//		{
//			left->releasetree();
//			delete left;
//		}
//		if (right)
//		{
//			right->releasetree();
//			delete right;
//		}
//		--count;
//		return count;
//	}
//	TreeNode():value(""),count(1), left(nullptr), right(nullptr) {}
//	TreeNode(const TreeNode& rhs):value(rhs.value),count(rhs.count),left(rhs.left),right(rhs.right) {}
//	TreeNode(const std::string& s, TreeNode* lt = nullptr, TreeNode* rt = nullptr) :value(s), left(lt), right(rt) {}
//	~TreeNode() {
//		if (count)
//			releasetree();
//	}
//};
//class BinstrTree {
//private:
//	TreeNode* root;
//public:
//	BinstrTree():root(nullptr){}
//	BinstrTree(const BinstrTree& tree) :root(tree.root) {
//		root->copytree();
//	}
//	~BinstrTree() {
//		if (!root->releasetree())
//			delete root;
//	}
//};
//int main()
//{
//	return 0;
//}