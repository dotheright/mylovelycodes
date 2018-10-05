package main

import "fmt"

func firstUniqChar(s string) int {
	dict := map[rune]int{}
	for _, ch := range s {
		_, ok := dict[ch]
		if ok {
			dict[ch]++
		} else {
			dict[ch] = 1
		}
	}

	for i, ch := range s {
		if dict[ch] == 1 {
			return i
		}
	}
	return -1
}

func main() {
	s := "this is my 3th."
	fmt.Println(firstUniqChar(s))
}
