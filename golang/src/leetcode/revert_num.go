package main

import (
	"fmt"
	"strconv"
)

func reverse_positive(s string) int64 {
	size := len(s)
	cs := []rune(s)
	for i := 0; i < size/2; i++ {
		cs[i], cs[size-1-i] = cs[size-1-i], cs[i]
	}

	ret, _ := strconv.ParseInt(string(cs), 10, 64)
	return ret
}

func reverse(x int) int {
	if x == 0 {
		return 0
	}
	if x < 0 {
		var ret int64 = -reverse_positive(strconv.FormatInt(int64(-x), 10))
		if ret < -2147483648 {
			return 0
		}
		return int(ret)
	} else {
		var ret int64 = reverse_positive(strconv.FormatInt(int64(x), 10))
		if ret > 2147483647 {
			return 0
		}
		return int(ret)
	}

}
func main() {
	s := 4294967299
	fmt.Println(reverse(s))
}
