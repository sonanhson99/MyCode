a = int(input())
b = int(input())
sum = 0
print(f"cac so le tu {a} to {b} la: ")
for i in range(a, b + 1):
    if 1 % 2 == 1:
        sum += i
print(f"tong cac so le tu {a} toi {b} la {sum}")