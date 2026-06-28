class Solution {
public:
    int maxSum = INT_MIN;
    int maxGain(TreeNode* root) {

        if (root == nullptr)

            return 0;

        int left = max(0, maxGain(root->left));

        int right = max(0, maxGain(root->right));

        maxSum = max(maxSum, root->val + left + right);

        return root->val + max(left, right);

    }

    int maxPathSum(TreeNode* root) {

        maxGain(root);

        return maxSum;

    }

};
