package main

import "fmt"

func main() {
	var sum int = 1

	for i := 0; i < 42; i++ {
		sum *= 2
		fmt.Print(sum, ":true,")
	}

}
