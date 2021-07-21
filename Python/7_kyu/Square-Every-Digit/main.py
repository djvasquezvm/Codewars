def square_digits(num):
    return int("".join(str(int(n) ** 2) for n in str(num)))

def main():
  print (square_digits(9119))
  print (square_digits(0))


if __name__ == '__main__':
  main()