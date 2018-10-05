package leetcode

import "fmt"

func isAnagram(s string, t string) bool {
	size := len(s)
	if size != len(t) {
		return false
	}
	sum := 0
	for i := 0; i < size; i++ {
		//fmt.Println(int(s[i]),int(t[i]))
		sum += int(s[i]) - int(t[i])
	}
	if sum != 0 {
		return false
	}

	mps := map[rune]int{}
	mpt := map[rune]int{}
	for _, ch := range s {
		_, ok := mps[ch]
		if ok {
			mps[ch]++
		} else {
			mps[ch] = 1
		}
	}

	for _, ch := range t {
		_, ok := mpt[ch]
		if ok {
			mpt[ch]++
		} else {
			mpt[ch] = 1
		}
	}
	for k, vs := range mps {
		vt, ok := mpt[k]
		if ok {
			if vt != vs {
				return false
			}
		} else {
			return false
		}
	}

	return true
}

func main() {
	s := "ac"
	t := "bb"
	fmt.Println(isAnagram(s, t))
}
