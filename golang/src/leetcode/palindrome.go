package main

//import ss "strings" //strings取个别名

import "fmt"

//我们给 fmt.Println 一个短名字的别名，我们随后将会经常用到。
var pp = fmt.Println

func getValidNext(s string, i int, j int, orientation int) (byte, int) { //多个返回值需要用括号,这里类似于一个元祖
	index := &i
	if orientation < 0 {
		index = &j
	}
	elem := s[*index]
	for i < j {
		//pp(orientation, "==", i, *index, s[i], ";;", s[*index], byte(s[*index]), ";;", j, *index, s[j])
		elem := s[*index]
		//pp("%t \n %T \n", elem, '0')
		switch {
		case (elem >= '0') && (elem <= '9'), elem >= 'a' && elem <= 'z': //swith 表示多种if else
			return elem, *index
		case elem >= 'A' && elem <= 'Z':
			elem = elem - 'A' + 'a'
			return elem, *index
		default:
			*index += orientation
		}
	}
	return elem, *index
}
func isPalindrome(s string) bool {
	size := len(s)
	left := byte('0')
	right := byte('0')

	for i, j := 0, size-1; i < j; i, j = i+1, j-1 { // 多变量的for循环 ,需要使用 x,y:=a,b 方式赋值,
		left, i = getValidNext(s, i, j, 1)
		right, j = getValidNext(s, i, j, -1)
		//pp(i, string(left), j, string(right))
		if i == j {
			return true
		}
		if left != right {
			return false
		}
	}
	return true
}

func main() {
	//s := ".Cpapc."
	s := ""
	fmt.Println(isPalindrome(s))
}
