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
	insertfix(t);
}

void RBtree::insertfix(node* t)
{
	node *u;
	if (root == t)
	{
		t->color = 'b';
		return;
	}

	while(t->parent!=NULL && t->parent->color == 'r')
	{
		node *g=t->parent->parent;
		if (g->left == t->parent)
		{
			if (g->right!=NULL)
			{
				u=g->right;
				if (u->color=='r')
				{
					t->parent->color='b';
					u->color ='b';
					g->color ='r';
					t=g;
				}
			}
			else
			{
				if(t->parent->right==t)
				{
					t = t->parent;
					leftrotate(t);
				}
				t->parent->color='b';
				g->color='r';
				rightrotate(g);
			}
		}
		else
		{
			if (g->left!=NULL)
			{
				U=g->left;
				if (u->color =='r')
				{
					t->parent->color = 'b';
					u->color='b';
					g->color='r';
					t = g;
				}
			}
			else
			{
				if (t->parent->left == t)
				{
					t=t->parent;
					rightrotate(t);
				}
				t->parent->color ='b';
				g->color = 'r';
				leftrotate(g);
			}
		}
		root->color='b';
	}
}

void RBtree::leftrotate(node* t)
{}
