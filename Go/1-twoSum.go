package main

import "fmt"

func twoSum(nums []int, target int) []int {

	m := make(map[int]int)

	for indx, val := range nums {

		k := target - nums[indx]
		if indx1, val1 := m[k]; val1 {
			return []int{indx1, indx}
		} else {
			m[val] = indx
		}

	}
	return []int{0, 0}
}
func main() {

	l := []int{2, 7, 11, 5}
	t := 9

	fmt.Println(twoSum(l, t))

}
