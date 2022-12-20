puts "--------------- CALC ---------------"

puts "Insira o valor A: "
A = gets.chomp.to_i

puts "Insira um operador: "
oper = gets.chomp.to_s

puts "Insira o valor B: "
B = gets.chomp.to_i

case oper
    when '+'
        soma = A + B
        puts "A SOMA É IGUAL A #{soma}" 
    when '-'
        subt = A - B
        puts "A SUBTRAÇÃO É IGUAL A #{subt}"
    when '*'
        mult = A * B
        puts "A MULTIPLICAÇÃO É IGUAL A #{mult}"
    when '/'
        divi = A / B
        puts "A DIVISÃO É IGUAL A #{divi}"
    else
        puts "Operador Invalido"
    end
