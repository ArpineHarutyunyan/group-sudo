n = input("Enter number:")

def foo(n):
    n = str(n)
    sum = 0
    i = 0
    while i < len(n):
        sum = sum + int(n[i])
        i+=1
    return sum

print("sum =", foo(n))
