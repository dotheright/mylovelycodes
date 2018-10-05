package main

import "fmt"

type ListNode struct {
	Val  int
	Next *ListNode
}

func removeNthFromEnd(head *ListNode, n int) *ListNode {
	p := head
	count := 0
	q := head // set q point  (N-1)th from end
	for i := 0; p.Next != nil; i++ {
		p = p.Next
		if i > n {
			q = q.Next
		}
	}
	q.Next = q.Next.Next

}
func main() {
	s := "this is my 3th."
	removeNthFromEnd()
	fmt.Println(firstUniqChar(s))
}
