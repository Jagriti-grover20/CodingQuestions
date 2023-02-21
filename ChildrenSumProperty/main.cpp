#include <iostream>
#include<queue>
using namespace std;
class TreeNode{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data){
        this->data=data;
        left=right=NULL;
    }
};
bool childrenSum(TreeNode*root){
    if(root==NULL){
        return true;
    }
    
}
int main(int argc, const char * argv[]) {
    TreeNode *root=new TreeNode(20);
    root->left=new TreeNode(8);
    root->right=new TreeNode(12);
    root->left->left=new TreeNode(3);
    root->left->right=new TreeNode(5);
    
    childrenSum(root);
    return 0;
}
