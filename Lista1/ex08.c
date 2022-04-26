// no primeiro programa será impresso o conteudo do vetor + a posição do index para ir caminhando na memoria, 
// portanto a saída será
// vet[0] vet[1] vet[2] ou seja 4 9 13
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }

// no programa 2 será impresso o endereço de cada posição do vetor, mas em hexadecimal. Logo, no final temos que
// a saída será o endereço+4, sabendo que para caminhar 1 incremento na memoria é necessário pular o tamanho armazenado de uma
// variavel int (4 bytes de memoria)
  
  int vet2[] = {4,9,13};
  int i2;
  for(i2=0;i2<3;i2++){
  printf("%X ",vet2+i2);
  }
