#include<bits/stdc++.h>
using namespace std;
struct Bstnode
{
	int data;
	Bstnode*l,*r;
};
Bstnode* Getnewnode(int data)
{
Bstnode* newnode=new Bstnode();
newnode->l=newnode->r=NULL;
newnode->data=data;
return newnode;
}
Bstnode* insert(Bstnode* root, int data)
{
	if(root==NULL)
	{
	  root=Getnewnode(data);
	}
	else if(data <= root->data)
	{
		root->l=insert(root->l,data);
	}
	//else if(root >= root->data)
	else{
		root->r=insert(root->r,data);
	}
	return root;
}
int findmin(Bstnode* root)
{
if(root==NULL)
{
	cout<<"error no min element present"<<endl;
	return -1;
}
while(root->l!=NULL)
{
	root=root->l;
}
return root->data;
}
int findmax(Bstnode* root)
{
	if(root==NULL)
	{
		cout<<"No max element present"<<endl;
		return -1;
	}
	while(root->r!=NULL)
	{
		root=root->r;
	}
	return root->data;
}
int main()
{
	Bstnode* root=NULL;
    root=insert(root, 15);
	root=insert(root, 10);
	root=insert(root, 20);
	root=insert(root, 25);
	root=insert(root, 8);
	root=insert(root, 12);
	int data;
    cout<<findmin(root)<<" "<<endl;
	cout<<findmax(root);
}
