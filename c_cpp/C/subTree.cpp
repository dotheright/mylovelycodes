/*************************************************************************
	> File Name: SubTree.cpp
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年06月10日 星期五 23时07分03秒
 ************************************************************************/

#include<iostream>

using namespace std;

stuct TreeNode
{
	int m_iValue;
	TreeNode *m_pLeftNode;
	TreeNode *m_pRightNode;
};

bool judgeSubTree(TreeNode *pRoot1,TreeNode *pRoot2)
{
	if ( NULL == pRoot1)
		return false;
	if (NULL == pRoot2 )
		return true;

	return judgeSubTree(pRoot1->m_pLeftNode,pRoot2->m_pLeftNode)
		&&  judgeSubTree(pRoot1->m_pRightNode,pRoot2->m_pRightNode);

}

bool subTree(TreeNode *pRoot1 ,TreeNode *pRoot2)
{
	if ( NULL == pRoot1)
		return false;
	if (NULL == pRoot2 )
		return true;

	if(pRoot)
}
void CreateBinaryTree( TreeNode *pTree)
{

}

int main()
{

}
