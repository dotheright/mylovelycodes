package main

import (
	"fmt"
	"unsafe"
)

func main() {
	num := 1
	fmt.Println("defaut := ", unsafe.Sizeof(num))
	var n int8 = 1
	fmt.Println("int8 = ", unsafe.Sizeof(n))
	var nn int16 = 1
	fmt.Println("int16 = ", unsafe.Sizeof(nn))
	var nnn int32 = 1
	fmt.Println("int32 = ", unsafe.Sizeof(nnn))
	var nnnn int64 = 1
	fmt.Println("int64 = ", unsafe.Sizeof(nnnn))
}
