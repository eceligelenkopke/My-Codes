while True:
    n = input("Number: ")
    if n.isdigit():
        n = int(n)
        if n >=1 and n <=8:
            break
for i in range(n):
    for j in range(n-i-1):
        print(" ", end="")
    for w in range(i+1):
        print("#", end="")
    print()
