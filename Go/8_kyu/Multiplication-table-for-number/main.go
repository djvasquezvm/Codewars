package main

import (
	"fmt"
)

func main() {
	fmt.Println(MultiTable(5))
	fmt.Println(MultiTable(1))
}


func MultiTable(number int) string {
	var result string
	for i:=1; i<=9; i++ { result += fmt.Sprintf("%d * %d = %d\n", i, number,number*i) }
	return result + fmt.Sprintf("%d * %d = %d", 10, number,number*10)
}