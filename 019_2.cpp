struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};

void Mirror(TreeNode* pRoot){
    if(pRoot == NULL)
        return NULL;
    queue <TreeNode*> que;
    que.push(pRoot);
    int cnt_currLevelNodes = 0;
    while(! que.empty()){
        cnt_currLevelNodes = que.size();
        int cnt = 0;
        while(cnt<cnt_currLevelNodes){
            ++cnt;
            pRoot = que.front();
            que.pop();
            TreeNode* Tmp = pRoot->left;
            pRoot->left = pRoot->right;
            pRoot->right = Tmp;
            if (pRoot->left != NULL)
            {
                /* code */
                que.push(pRoot->left);
            }
            if (pRoot->right != NULL)
            {
                /* code */
                que.push(pRoot->right);
            }
        }
    }
    return ;
}