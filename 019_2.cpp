struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
//使用遍历+队列的方法
//step1：将根节点入队；
//step2：队列为非空时获取当前层的节点总数（即队列的长度）；
//step3：按照当前层的节点总数，出队进行遍历节点，在遍历时交换左右结点，
//       如果左右结点存在，则入队；当遍历完当前层所有结点时，遍历下一层，执行第二部；
void Mirror(TreeNode* pRoot){
    if(pRoot == NULL)
        return NULL;
    queue <TreeNode*> que;
    que.push(pRoot); //在对尾压入新元素
    int cnt_currLevelNodes = 0;
    while(! que.empty()){
        cnt_currLevelNodes = que.size();//返回队列中元素的个数（左子树右子树） 、、每次更新
        int cnt = 0;//每次清零重新计数；（左子树右子树）
        while(cnt<cnt_currLevelNodes){
            ++cnt;
            pRoot = que.front();//返回队列首元素的值，但不删除该元素
            que.pop();//首元素删除队列但不返回其值
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