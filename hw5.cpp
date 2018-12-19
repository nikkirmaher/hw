#include <iostream>
using namespace std;

struct Node
{
	int value;
	int val;
	Node *left;
	Node *right;

	Node(val)
	{
		this->value=val;
	}

	Node(val, Node *left, Node *right)
	{
		this->value=val;
		this->left=left;
		this->right=right;
	}
};

void DFS_PreOrder(const Node *entry)
{
	if(entry==nullptr)
	{
		return;
	}

	cout << entry->value << " ";

	DFS_PreOrder(entry->left);
	DFS_PreOrder(entry->right);
}

Node *BinaryTree()
{
	Node *root=new Node(2);

	root->right=new Node(5, nullptr, new Node(9, new Node(4), nullptr));
	root->left=new Node(7, new Node(2), new Node(6, new Node(5), new Node(11)));

	return root;
}

int main()
{
	Node *root=BinaryTree();
	cout << "Steps: ";
	DFS_PreOrder(root);
	cout << endl;
}