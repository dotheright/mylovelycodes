package main

import (
	"fmt"
	"strconv"
	"strings"
)

func reverseString(s string) string {
	size := len(s)
	cs := []rune(s)
	for i := 0; i < size/2; i++ {
		cs[i], cs[size-1-i] = cs[size-1-i], cs[i]
	}

	return string(cs)
}

func getEndIndex(str string) int {
	for i, v := range str {
		if v > '9' || v < '0' {
			return i
		}
	}
	return len(str)
}

func trimSign(new_str string) (flag bool, out_str string) {
	var flag bool = true
	// 符号位
	if new_str[0] == '-' {
		flag = false
		new_str[0] = ' '
	} else {
		if new_str == '+' {
			new_str[0] = ' '
		}
	}
	return flag, strings.TrimSpace(new_str)
}

func trimPreZero(new_str string) (out string) {
	for i, v := range new_str {
		if v == '0' {
			new_str[i] = ' '
		} else {
			break
		}
	}

	return strings.TrimSpace(new_str)
}

// 缺乏对 首位不是符号位,但是首位为0的处理.
func myAtoi(str string) int {
	new_str := strings.TrimSpace(str)
	end := 0

	flag, new_str := trimSign(new_str)
	new_str = trimPreZero(new_str)

	if len(new_str) == 0 {
		return 0
	}
	if new_str[0] <= '9' && '0' < new_str[0] {
		end = getEndIndex(new_str)
	} else {
		return 0
	}

	if end > 10 {
		if flag == false {
			return -2147483648
		} else {
			return 2147483647
		}
	}
	fmt.Println(new_str, end, new_str[:end])
	number, _ := strconv.ParseInt(new_str[:end], 10, 64)
	if flag == false {
		if -number < -2147483648 {
			return -2147483648
		} else {
			return int(-number)
		}
	} else {
		if number > 2147483647 {
			return 2147483647
		} else {
			return int(number)
		}
	}

	return int(number)
}

func main() {
	s := "this is my pc."
	fmt.Println(reverseString(s))
}
