#include <iostream>

using namespace std;

struct node
{
	int key;
	node *parent;
	char color;
	node *left;
	node *right;
};

class RBtree
{
	node *root;
	node *q;
public:
	RBtree()
	{
		q = NULL;
		root = NULL;
	}
	void insert();
	void insertfix(node *);
	void leftrotate(node *);
	void rightrotate(node *);
	void del();
	node* successor(node *);
	void delfix(node *);
	void search();

};

void RBtree::insert()
{
	int z, i = 0;
	cout <<"\nEnter key of the node to be inserted: ";
	cin >>z;
	node *p, *q;
	node *t = new node;
	t->key =z;
	t->left =NULL;
	t->color = 'r';
	p = root;
	q = NULL;
	if (root == NULL)
	{
		root = t;
		t->parent=NULL;
	}
	else
	{
		while(p !=NULL)
		{
			q = p;
			if (p->key<t->key)
				p = p->right;
			else
				p=p->left;
		}
		t->parent=q;
		if(q->key<t->key)
			q->right =t;
		else
			q->left =t;
	}
}