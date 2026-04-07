package main

import "fmt"

func main() {
	fmt.Println("MULTIPLE TABLE")
	fmt.Println()

	fmt.Println("    ")
	for i := 1; i < 10; i ++ {
		fmt.Printf("%4d", i)
	}
	fmt.Println()

	fmt.Println("    ")
	for i := 1; i < 10; i ++ {
		fmt.Print("----")
	}
	fmt.Println()


	for i := 1; i < 10; i ++ {
		fmt.Printf("%2d |", i)

		for j := 1; j < 10; j ++ {
			fmt.Printf("%4d", i*j)
		}
		fmt.Println()
	}

}
