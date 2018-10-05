package main

import (
	"fmt"
	"strconv"
)

/*
1.     1
2.     11
3.     21
4.     1211
5.     111221
6.     312211
7.	   13112221
8.     1113213211
9.     31131211131221
*/
func count_num(n int) string {
	last := "1"
	ret := ""
	fmt.Print("\"" + last + "\",")
	for i := 2; i <= n; i++ {
		last_len := len(last)
		count := 0
		for index, v := range last {
			count++
			if index == last_len-1 {
				ret += string(strconv.Itoa(count)) + string(v)
				break
			}
			if rune(v) != rune(last[index+1]) {
				ret += strconv.Itoa(count) + string(v)
				count = 0
			}
		}
		last = ret
		fmt.Print("\"" + last + "\",")
		ret = ""
	}

	return last
}

func main() {
	count_num(30)
}
