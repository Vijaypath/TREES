#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node*l,*r;
};
void Levelorder(node*root)  //T.C FOR ALL-> O(N)   S .C ->> O(1)BEST   WORST O(N)
{
	if(root==NULL) return;
	queue<node*>Q;
	Q.push(root);
	
	While(!Q.empty())
	{
		node* curr=Q.front();
		cout<<curr->data<<" ";
		if(curr->l!=NULL) Q.push(curr->l);
		if(curr->r!=NULL) Q.push(curr->r);
		Q.pop();
	}
}
