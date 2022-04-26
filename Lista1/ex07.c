p = mat + 1; //Válida, porque p está recebendo o segundo elemento do vetor
p = mat++; //Inválida, porque não é possível fazer incremento no ponteiro
p = ++mat; //Inválida, porque não é possível fazer incremento no ponteiro
x = (*mat)++; //Válida, porque x recebe a posição 0 do vetor incrementando 1