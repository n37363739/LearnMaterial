#ifndef AUTUMNMOVE_H
#define AUTUMNMOVE_H

#include "Common.h"
#include "Singleton.h"

class AutumnMove :public Singleton<AutumnMove>
{
public:
    /******************************************************************************
     函数名称： maxProfit
     功能说明： 买卖股票的最佳时机-121如果你最多只允许完成一笔交易（即买入和卖出一支股票一次)
     参    数： vector<int> & prices 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/07/31
    ******************************************************************************/
    int maxProfit1(vector<int>& prices);
    /******************************************************************************
     函数名称： maxProfit2
     功能说明： 买卖股票的最佳时机-122 如果你允许买卖多次
     参    数： vector<int> & prices 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/07/31
    ******************************************************************************/
    int maxProfit2(vector<int>& prices);
    /******************************************************************************
     函数名称： maxProfit3
     功能说明： 买卖股票的最佳时机-123 如果你允许买卖2次
     参    数： vector<int> & prices 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/07/31
    ******************************************************************************/
    int maxProfit3(vector<int>& prices);
    /******************************************************************************
     函数名称： maxProfit4
     功能说明： 买卖股票的最佳时机-188 如果你允许买卖k次
     参    数： int k 
     参    数： vector<int> & prices 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/07/31
    ******************************************************************************/
    int maxProfit4(int k, vector<int>& prices);
    /******************************************************************************
     函数名称： maxProfit5
     功能说明： 买卖股票的最佳时机-309 含有冷冻期一天
     参    数： vector<int> & prices 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/07/31
    ******************************************************************************/
    int maxProfit5(vector<int>& prices);
    /******************************************************************************
     函数名称： maxProfit6
     功能说明： 买卖股票的最佳时机含手续费-714
     参    数： vector<int> & prices 
     参    数： int fee 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/07/31
    ******************************************************************************/
    int maxProfit6(vector<int>& prices, int fee);
    /******************************************************************************
     函数名称： smallestRange
     功能说明： 632-最小区间
     参    数： vector<vector<int>> & nums 
     返 回 值： std::vector<int>
     作    者： Ru Long
     日    期： 2020/08/01
    ******************************************************************************/
    vector<int> smallestRange(vector<vector<int>>& nums);
    /******************************************************************************
     函数名称： addStrings
     功能说明： 字符串加法-415
     参    数： string num1 
     参    数： string num2 
     返 回 值： std::string
     作    者： Ru Long
     日    期： 2020/08/03
    ******************************************************************************/
    string addStrings(string num1, string num2);
    /******************************************************************************
     函数名称： canJump
     功能说明： 跳跃游戏-55
     参    数： vector<int> & nums 
     返 回 值： bool
     作    者： Ru Long
     日    期： 2020/08/03
    ******************************************************************************/
    bool canJump(vector<int>& nums);
    /******************************************************************************
     函数名称： mergeVector
     功能说明： 合并排序的数组
     参    数： vector<int> & A 
     参    数： int m 
     参    数： vector<int> & B 
     参    数： int n 
     返 回 值： void
     作    者： Ru Long
     日    期： 2020/08/03
    ******************************************************************************/
    void mergeVector(vector<int>& A, int m, vector<int>& B, int n);
    /******************************************************************************
     函数名称： cuttingRope
     功能说明： 剪绳子
     参    数： int n 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/08/03
    ******************************************************************************/
    int cuttingRope(int n);
    /******************************************************************************
     函数名称： getIntersectionNode
     功能说明： 判断链表是否相交，如果相交则返回交点
     参    数： ListNode * headA 
     参    数： ListNode * headB 
     返 回 值： ListNode*
     作    者： Ru Long
     日    期： 2020/08/03
    ******************************************************************************/
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB);
    /******************************************************************************
     函数名称： Sqrt
     功能说明： 开根号 有精度要求
     参    数： double target 
     参    数： double diff 
     返 回 值： double
     作    者： Ru Long
     日    期： 2020/08/03
    ******************************************************************************/
    double Sqrt(double target,double diff);
    /******************************************************************************
     函数名称： canFinish
     功能说明： 完成课表-207
     参    数： int numCourses 
     参    数： vector<vector<int>> & prerequisites 
     返 回 值： bool
     作    者： Ru Long
     日    期： 2020/08/04
    ******************************************************************************/
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites);
    /******************************************************************************
     函数名称： addTwoNumbers
     功能说明： 链表求和-2.05
     参    数： ListNode * l1 
     参    数： ListNode * l2 
     返 回 值： ListNode*
     作    者： Ru Long
     日    期： 2020/08/04
    ******************************************************************************/
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
    /******************************************************************************
     函数名称： lowestCommonAncestor
     功能说明： 二叉树的最近公共祖先-236
     参    数： TreeNode * root 
     参    数： TreeNode * p 
     参    数： TreeNode * q 
     返 回 值： TreeNode*
     作    者： Ru Long
     日    期： 2020/08/04
    ******************************************************************************/
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
    /******************************************************************************
     函数名称： maxPathSum
     功能说明： 二叉树的最大路径和-124
     参    数： TreeNode * root 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/08/04
    ******************************************************************************/
    int maxPathSum(TreeNode* root);
    /******************************************************************************
     函数名称： QuickSort
     功能说明： 快速排序
     参    数： vector<int> & nums 
     返 回 值： void
     作    者： Ru Long
     日    期： 2020/08/04
    ******************************************************************************/
    void QuickSort(vector<int>& nums);
    /******************************************************************************
     函数名称： preorderTraversal
     功能说明： 二叉树的先序遍历，非递归版-144
     参    数： TreeNode * root 
     返 回 值： std::vector<int>
     作    者： Ru Long
     日    期： 2020/08/04
    ******************************************************************************/
    vector<int> preorderTraversal(TreeNode* root);
    /******************************************************************************
     函数名称： postorderTraversal
     功能说明： 二叉树的后序遍历-145
     参    数： TreeNode * root 
     返 回 值： std::vector<int>
     作    者： Ru Long
     日    期： 2020/08/04
    ******************************************************************************/
    vector<int> postorderTraversal(TreeNode* root);
    /******************************************************************************
     函数名称： longestConsecutive
     功能说明： 最长连续序列的长度-
     参    数： vector<int> & nums 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/08/04
    ******************************************************************************/
    int longestConsecutive(vector<int>& nums);
    /******************************************************************************
     函数名称： trap
     功能说明： 接雨水-42
     参    数： vector<int> & height 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/08/04
    ******************************************************************************/
    int trap(vector<int>& height);
    /******************************************************************************
     函数名称： rob
     功能说明： 打家劫舍 -337
     参    数： TreeNode * root 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/08/05
    ******************************************************************************/
    int rob(TreeNode* root);
    /******************************************************************************
     函数名称： MergeSort
     功能说明： 归并排序
     参    数： vector<int> & nums 
     返 回 值： void
     作    者： Ru Long
     日    期： 2020/08/06
    ******************************************************************************/
    void MergeSort(vector<int>& nums);
    /******************************************************************************
     函数名称： isSameTree
     功能说明： 判断两个数是否相同-100
     参    数： TreeNode * p 
     参    数： TreeNode * q 
     返 回 值： bool
     作    者： Ru Long
     日    期： 2020/08/07
    ******************************************************************************/
    bool isSameTree(TreeNode* p, TreeNode* q);
    /******************************************************************************
     函数名称： reverseList
     功能说明： 翻转链表-206
     参    数： ListNode * head 
     返 回 值： ListNode*
     作    者： Ru Long
     日    期： 2020/08/07
    ******************************************************************************/
    ListNode* reverseList(ListNode* head);
    /******************************************************************************
     函数名称： reverseKGroup
     功能说明： K个一组翻转链表-25
     参    数： ListNode * head 
     参    数： int k 
     返 回 值： ListNode*
     作    者： Ru Long
     日    期： 2020/08/07
    ******************************************************************************/
    ListNode* reverseKGroup(ListNode* head, int k);
    /******************************************************************************
     函数名称： generateMatrix
     功能说明： 螺旋矩阵-59
     参    数： int n 
     返 回 值： std::vector<std::vector<int>>
     作    者： Ru Long
     日    期： 2020/08/07
    ******************************************************************************/
    vector<vector<int>> generateMatrix(int n);
    /******************************************************************************
     函数名称： countBinarySubstrings
     功能说明： 计算二进制子串-696
     参    数： string s 
     返 回 值： int
     作    者： Ru Long
     日    期： 2020/08/10
    ******************************************************************************/
    int countBinarySubstrings(string s);
    /******************************************************************************
     函数名称： restoreIpAddresses
     功能说明： 复原IP地址-93
     参    数： string s 
     返 回 值： std::vector<std::string>
     作    者： Ru Long
     日    期： 2020/08/10
    ******************************************************************************/
    vector<string> restoreIpAddresses(string s);
    /******************************************************************************
     函数名称： HeapSort
     功能说明： 堆排序
     参    数： vector<int> & nums 
     返 回 值： void
     作    者： Ru Long
     日    期： 2020/08/10
    ******************************************************************************/
    void HeapSort(vector<int>& nums);
    /******************************************************************************
     函数名称： buildTree
     功能说明： 根据前序遍历和中序遍历重建二叉树
     参    数： vector<int> & preorder 
     参    数： vector<int> & inorder 
     返 回 值： TreeNode*
     作    者： Ru Long
     日    期： 2020/08/10
    ******************************************************************************/
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder);
    /******************************************************************************
     函数名称： solve
     功能说明： 被环绕的区域-130
     参    数： vector<vector<char>> & board 
     返 回 值： void
     作    者： Ru Long
     日    期： 2020/08/11
    ******************************************************************************/
    void solve(vector<vector<char>>& board);
    /******************************************************************************
     函数名称： hasPathSum
     功能说明： 路径总和-112
     参    数： TreeNode * root 
     参    数： int sum 
     返 回 值： bool
     作    者： Ru Long
     日    期： 2020/08/11
    ******************************************************************************/
    bool hasPathSum(TreeNode* root, int sum);
    /******************************************************************************
     函数名称： pathSum
     功能说明： 路径总和
     参    数： TreeNode * root 
     参    数： int sum 
     返 回 值： std::vector<std::vector<int>>
     作    者： Ru Long
     日    期： 2020/08/11
    ******************************************************************************/
    vector<vector<int>> pathSum(TreeNode* root, int sum);
    /******************************************************************************
     函数名称： multiply
     功能说明： 字符串相乘-43
     参    数： string num1 
     参    数： string num2 
     返 回 值： std::string
     作    者： Ru Long
     日    期： 2020/08/13
    ******************************************************************************/
    string multiply(string num1, string num2);
    /******************************************************************************
     函数名称： merge
     功能说明： 合并区间-56
     参    数： vector<vector<int>> & intervals 
     返 回 值： std::vector<std::vector<int>>
     作    者： Ru Long
     日    期： 2020/08/13
    ******************************************************************************/
    vector<vector<int>> merge(vector<vector<int>>& intervals);
    /******************************************************************************
     函数名称： reverseWords
     功能说明： 翻转字符串中的单词-151
     参    数： string s 
     返 回 值： std::string
     作    者： Ru Long
     日    期： 2020/08/13
    ******************************************************************************/
    string reverseWords(string s);
};

#endif
