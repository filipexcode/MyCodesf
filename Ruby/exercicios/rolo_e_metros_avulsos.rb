puts "---------- CALCULADORA DE METRAGEM E METROS AVULSOS ----------"


puts "Digite aqui a quantidade de metros do terreno: "
qtd = gets.chomp.to_i

rolo = qtd / 50
avulsos = qtd % 50

puts "A quantidade de rolos necessária para o terreno é: #{rolo}"
puts "A quantidade de metros avulsos é: #{avulsos}"
