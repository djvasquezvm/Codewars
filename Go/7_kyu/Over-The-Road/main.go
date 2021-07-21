package main

import (
	"fmt"
)

func main() {
	fmt.Println(OverTheRoad(1, 3))
	fmt.Println(OverTheRoad(3, 3))
	fmt.Println(OverTheRoad(2, 3))
	fmt.Println(OverTheRoad(3, 5))
	fmt.Println(OverTheRoad(7, 11))
	fmt.Println(OverTheRoad(23633656673, 310027696726))
}

func OverTheRoad(address int, n int) int {
	if address % 2 == 0 { return 1+2*(n-(address/2)) } else { return 2*(1+n-((address/2)+1)) }
}