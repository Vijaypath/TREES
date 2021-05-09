#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node*l,*r;
};

//T. C -> O(N) 
//S. C-> O(H) WORST  O(N)
//BEST/AVG  -> O(LOGN)

void preorder(Node* root)
{
	if(root==NULL) return;
cout<<root->data<<" "<<endl;
preorder(root->l);
preorder(root->r);
}
void inorder(Node* root)
{
	if(root==NULL)
	return;
	inorder(root->l);
	cout<<root->data;
	inorder(root->r);
}
void postorder(Node* root)
{
	if(root==NULL)
	return;
	postorder(root->l);
	postorder(root->r);
	cout<<root->data;
	
}
