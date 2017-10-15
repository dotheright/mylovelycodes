/*
question:
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8

*/

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;    // 数据域
 *     ListNode next; //指针域 这里只是一个引用
 *     ListNode(int x) { val = x; } //构造函数
 * }
 */
public class ListNode {
   int val;    // 数据域
   ListNode next; //指针域 这里只是一个引用
   ListNode(int x) { val = x; } //构造函数
}
class Solution 
{
	public ListNode addTwoNumbers(ListNode l1, ListNode l2) 
	{
        int  carry =0;
        ListNode retNode= new ListNode(0); // 给返回的指针分配空间并且初始化为 0

        
        ListNode  pTmp =retNode; // retNode 作为返回的链表头，不能让它的值变化，pTmp 作为循环体使用，会经常变化
        
        //继续计算的条件是 每个至少有链表不为空 ,且没有进位
        while ((null != l1) || (null != l2) || (0 != carry) )
        {
            int  sum =0;
            if(null !=l1)
            {
                sum += l1.val;  //
                l1 = l1.next; //l1的引用域指向下一个 
            }
            if(null !=l2)
            {
                sum += l2.val;  //
                l2 = l2.next; //l2的引用域指向下一个 
            }
            
            sum = sum+carry;
            pTmp.val = sum %10;
            carry = sum /10;
            
            if((null != l1) || (null != l2) || (0 != carry))
            {
                pTmp.next = new ListNode(0);
                pTmp =pTmp.next;    
            }
            
        } 
        
        return  retNode;      	
    } 
}

