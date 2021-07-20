def insurance(age, size, num_of_days):
    if num_of_days <= 0:
        return 0
    result=50
    if size == "medium":
        result+=10
    elif size != "economy":
        result+=15
    if age < 25:
        result+=10
    return result*num_of_days        

def main():
  print (insurance(18, "medium", 7))
  print (insurance(30,"full-size",30))
  print (insurance(21,"economy",-10))
  print (insurance(42,"my custom car",7))


if __name__ == '__main__':
  main()