var res = document.getElementById("res")
var num = 1


function contar() {
    res.innerHTML = `O botão recebeu ${num} cliques` 
    num ++
}


function zerar() {
    res.innerHTML = ''
    num = 1
}