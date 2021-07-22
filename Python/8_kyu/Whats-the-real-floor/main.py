def get_real_floor(n):
    if n<1: return n
    elif n<13: return n-1
    else: return n-2

def main():
    print(get_real_floor(1))
    print(get_real_floor(0))
    print(get_real_floor(5))
    print(get_real_floor(15))
    print(get_real_floor(-3))


if __name__ == '__main__':
    main()