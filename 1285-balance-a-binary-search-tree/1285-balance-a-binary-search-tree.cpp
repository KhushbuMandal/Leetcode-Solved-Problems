/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorderTraversal (TreeNode* root , vector <int> &in){
        //base case
        if (root == NULL) return;

        inorderTraversal (root->left , in);
        in.push_back(root->val);
        inorderTraversal (root->right ,in);
    }

    TreeNode* inorderToBST (int s , int e , vector <int> &in){
        //base case
        if (s > e){
            return NULL;
        }

        int mid = s + (e-s)/2;
        
        TreeNode* root = new TreeNode (in[mid]);
        root->left = inorderToBST (s , mid-1 , in);
        root->right = inorderToBST (mid+1 , e , in);
        return root; 
    }

    TreeNode* balanceBST(TreeNode* root) {

        vector <int> inorderVector;
        inorderTraversal (root , inorderVector);

        return inorderToBST (0 , inorderVector.size()-1 , inorderVector);
        
    }
};