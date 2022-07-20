package main

func isPalindrome(x int) bool {

	if x < 0 {
		return false
	}
	temp := x
	rev := 0
	last := 0

	for temp > 0 {
		last = temp % 10
		rev = (rev * 10) + last
		temp = temp / 10
	}

	if rev == x {

		return true
	} else {
		return false
	}
}

func main() {
	b := isPalindrome(-121)
	println(b)
}
