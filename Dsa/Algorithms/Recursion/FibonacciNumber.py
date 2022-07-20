from re import X


def fibonacci(x):
    if x <= 1:
        return x
    return fibonacci(x-1)+fibonacci(x-2)


if __name__ == "__main__":
    print(fibonacci(10))
