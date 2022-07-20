def sum(x):
    if x > 0:
        print(x)
        sum(x-1)


if __name__ == "__main__":
    sum(10)
