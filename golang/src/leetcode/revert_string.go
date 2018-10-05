package main

import "fmt"

func reverseString(s string) string {
	size := len(s)
	cs := []rune(s)
	for i := 0; i < size/2; i++ {
		cs[i], cs[size-1-i] = cs[size-1-i], cs[i]
	}

	return string(cs)
}

func main() {
	s := "this is my pc."
	fmt.Println(reverseString(s))
}
