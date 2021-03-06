/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The structure of a BST Node is as follows:
struct Node {
    int data;
    Node * right, * left;
};*/
/*You are required to complete
this function*/
Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   if(root==NULL)return root;
   if(root->data>n1 && root->data>n2)
   return LCA(root->left,n1,n2);
   if(root->data<n1 && root->data<n2)
   return LCA(root->right,n1,n2);
   return root;
}