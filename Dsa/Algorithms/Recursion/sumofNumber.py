def sum(x):
    if x == 1:
        return x
    return x+sum(x-1)


if __name__ == "__main__":
    print(sum(99))
