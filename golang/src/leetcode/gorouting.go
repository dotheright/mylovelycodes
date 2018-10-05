package main

import "fmt"

func add(arr []int, result chan int) {
	sum := 0
	for _, v := range arr {
		sum += v
	}
	result <- sum
}

func main() {
	arr := []int{1, 2, 2, 3, 3, 34, 4, 6, 7, 89, 0}
	result := make(chan int)
	go add(arr[:len(arr)/2], result)
	go add(arr[len(arr)/2:], result)
	x, y := <-result, <-result
	fmt.Println(x, y, x+y)
}
