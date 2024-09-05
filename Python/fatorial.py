num = int(input("Digite um numero: "))
i = num

for i in range(num - 1, 0, -1):
  num *= i

print(num)
