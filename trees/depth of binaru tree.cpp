int depth(TreeNode* root){
    if(root == NULL){
        return 0;
    }
    return max(1 + depth(root->left), 1 + depth(root->right));
} 

int Solution::maxDepth(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    return depth(A);
}