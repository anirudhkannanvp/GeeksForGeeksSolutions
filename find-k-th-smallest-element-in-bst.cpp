Node is as follows:
struct Node
{
    int data;
    int lCount;
 
    Node* left;
    Node* right;
};*/
int KthSmallestElement(Node *root, int k)
{   
    if(k==root->lCount+1)return root->data;
    if(k<=root->lCount+1)return KthSmallestElement(root->left,k);
    else return KthSmallestElement(root->right,k-(root->lCount+1));
    //add code here.
}