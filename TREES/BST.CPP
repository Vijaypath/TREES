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
bool search(Bstnode*root,int data)
{
	if(root==NULL)
	{
		return false;
	}
	else if(data==root->data)
	{
		return true;
	}
	else if(data<=root->data)
	{
		return search(root->l,data);
	}
	else
	{
	return search(root->r,data);
}
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
	int n;
	cin>>n;
	if(search(root,n)==true)
	cout<<"Found"<<endl;
	else
	cout<<"Not Found"<<endl;
}
