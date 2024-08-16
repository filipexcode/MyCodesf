vendedor = input()
salarioFixo = float(input())
totalVendas = float(input())

salarioFinal = (totalVendas * 0.15) + salarioFixo

print(f"TOTAL = R$ {salarioFinal:.2f}")
