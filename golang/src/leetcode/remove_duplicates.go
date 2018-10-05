package main

import "fmt"

func compress(nums []int, start int, offset int, length int) {
	fmt.Println("com", nums, start, offset, length)
	for i := start; i+offset < length; i++ {
		nums[i+1] = nums[i+offset]
	}
}

func removeDuplicates(nums []int) int {
	length := len(nums)
	for i := 0; i < length; i++ {
		flag := false
		for j := i + 1; j < length; j++ {
			if nums[i] == nums[j] {
				flag = true
				continue
			} else {
				//fmt.Println("in",nums,i,j,length);
				if flag == true {
					compress(nums, i, j-i, length)
					length -= (j - i - 1)
					flag = false
					break
				}
			}
		}
		if flag == true {
			compress(nums, i, length-i, length)
			length -= (length - i - 1)
		}
		fmt.Println(nums)
	}
	return length
}

func main() {
	//nums := []int{0,0,1,1,1,2,2,3,3,4};
	nums := []int{0, 0, 0, 1, 2, 2, 2}
	fmt.Println(removeDuplicates(nums))

}
