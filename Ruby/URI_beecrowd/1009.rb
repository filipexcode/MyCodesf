nome = gets.chomp
salfix = gets.to_f
valvendas = gets.to_f

tot = salfix + (valvendas * 0.15)

puts "TOTAL = R$ %.2f" % [tot]
