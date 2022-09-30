#include<iostream>
#define SPACE 10
using namespace std;
class treeNode
{
	public:
		int value;
		treeNode* left;
		treeNode* right;		
		treeNode()
		{
			value=0;
			left=NULL;
			right=NULL;				
		}
		
		treeNode(int val)
		{
			value=val;
			left=NULL;
			right=NULL;				
		}
};
class BST
{
	public:
		treeNode* root;		
		bool IsTreeEmpty()
		{
			if(root==NULL)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void insertTreeNode(treeNode* n)
		{
			if( root==NULL )
			{
				root = n;
				//cout<<"\nRoot Node Inserted\n";				
			}
			else
			{

				treeNode* temp = root;				
				while( temp != NULL)
				{
					if( temp->value == n->value)
					{
						cout<<"\nNo Dupplicate Values\n";
						return;
					}
					else if( (temp->value > n->value) && (temp->left==NULL) )
					{
						temp->left= n;
						//cout<<"\nNode Inserted\n";						
						break;
					}
					else if (temp->value > n->value )
					{
						temp= temp->left;
					}
					else if( (temp->value < n->value) && (temp->right==NULL) )
					{
						temp->right = n;
						//cout<<"\nNode Inserted\n";						
						break;
					}
					else
					{
						temp= temp->right;
					}					
				}
			}
		}
		bool searchTreeNode(treeNode* n)
		{
			if(root==NULL)
			{
				return false;
			}
			else
			{
				treeNode* temp = root;	
				while(temp!=NULL)					
				{
					if(temp->value==n->value)
					{
						return true;
					}
					else if(temp->value > n->value)
					{
						temp=temp->left;
					}
					else
					{
						temp=temp->right;
					}
				}
			}
			return false;
		}
		void deleteTreeNode(treeNode* n)
		{
			if(searchTreeNode(n)==true)
			{
				treeNode* temp = root;				
				treeNode* prev = NULL;
				cout<<"\nhello\n";
					while(temp->value != n->value) // traverse through tree
					{
						if(temp->value > n->value)
						{
							prev=temp;
							temp = temp->left;
						}
						else
						{
							prev=temp;
							temp = temp->right;							
						}
					}
					cout<<"\nPrev->value: "<<prev->value<<" | temp->value: "<<temp->value<<" | temp->right(pointer): "<<temp->right<<endl;
					if(temp->left!=NULL && temp->right!=NULL) // Binary Child Node
					{
						cout<<"\n1 hello";
						treeNode* tLeft = temp->right;						
						while(tLeft->left!=NULL)
						{
							tLeft=tLeft->left;
						}
						tLeft->left = temp->left;
						if(prev->value > temp->value)
						{
							prev->left = temp->right;
							cout<<"\nTree Node Deleted\n";
						}
						else
						{
							prev->right = temp->right;							
							cout<<"\nTree Node Deleted\n";								
						}						
					}
					else if(temp->left==NULL && temp->right==NULL) // Leaf Node
					{
						cout<<"\n2 hello";						
						if(root->value == temp->value)
						{
							root=NULL;
							cout<<"\n1 Root Node Deleted\n";							
						}
						else if(prev->value > temp->value)
						{
							prev->left = NULL;
							cout<<"\nTree Node Deleted\n";
						}
						else
						{
							prev->right = NULL;
							cout<<"\nTree Node Deleted\n";								
						}
					}
					else   //Single Child Node
					{
						cout<<"\n3 hello";						
						if(temp->left!=NULL)
						{
							if(root->value == temp->value)
							{
								root=temp->left;
								cout<<"\n2 Root Node Deleted\n";							
							}							
							else if(prev->value > temp->value)
							{
								prev->left = temp->left;
								cout<<"\nTree Node Deleted\n";
							}
							else
							{
								prev->right = temp->left;
								cout<<"\nTree Node Deleted\n";								
							}							
						} 
						else
						{
							if(root->value == temp->value)
							{
								root=temp->right;
								cout<<"\n2 Root Node Deleted\n";							
							}							
							else if(prev->value > temp->value)
							{
								prev->left = temp->right;
								cout<<"\nTree Node Deleted\n";
							}
							else
							{
								prev->right = temp->right;
								cout<<"\nTree Node Deleted\n";								
							}							
						}						
					}
			}
			else
			{
				cout<<"Tree Node With Value "<<n->value<<" is not Present In This Tree\n";
				return;
			}
		}
	   void print2D(treeNode * r, int space)
	   {
	    if (r == NULL) // Base case  1
	      return;
	    space += SPACE; // Increase distance between levels   2
	    print2D(r -> right, space); // Process right child first 3 
	    cout << endl;
	    for (int i = SPACE; i < space; i++) // 5 
	      cout << " "; // 5.1  
	    cout << r -> value << "\n"; // 6
	    print2D(r -> left, space); // Process left child  7
	   }		
};
int main()
{
	BST b;							//    9,7,3,6,2,18,5,21    
	treeNode n(4);
	treeNode n1(3);
	treeNode n2(10);		
	treeNode n3(1);
	treeNode n4(2);	
	treeNode n5(5);	
	treeNode n6(8);	
	treeNode n7(6);
	treeNode n8(7);
	/*treeNode n9(3);
	treeNode n10(16);
	treeNode n11(63);
	treeNode n12(67);				
	treeNode n13(617);	*/
	b.insertTreeNode(&n);
	b.insertTreeNode(&n1);
	b.insertTreeNode(&n2);		
	b.insertTreeNode(&n3);
	b.insertTreeNode(&n4);
	b.insertTreeNode(&n5);	
	b.insertTreeNode(&n6);
	b.insertTreeNode(&n7);
	b.insertTreeNode(&n8);		
	/*b.insertTreeNode(&n9);
	b.insertTreeNode(&n10);
	b.insertTreeNode(&n11);	
	b.insertTreeNode(&n12);		*/
	b.print2D(b.root,5);	
	b.deleteTreeNode(&n2);
	cout<<"\n-----------------------------------------------------------------------------------------------------------\n";
	b.print2D(b.root,5);
	cout<<"\n10th->right->value: "<<b.root->right->right->value;		
	//cout<<"\nSearch: "<<b.searchTreeNode(&n13);*/
	return 0;
}
