aloha[2] = value; //válido 

scanf("%f", &aloha); //válido 

aloha = value; // inválido - não é possível guardar o valor de uma variável num vetor sem  a posição do vetor

printf("%f", aloha); // válido  

coisas[4][4] = aloha[3]; // válido 

coisas[5] = aloha; //inválido, não é possível armazenar um vetor em uma linha de matriz

pf = value; //inválido - como é um valor do tipo float, é necessário colocar o operador & na frente para receber o endereço dessa variável, 
            //ou o * para receber seu conteúdo

pf = aloha; //válido - pf irá receber o endereço do primeiro elemento do vetor aloha, não precisa colocar o operador & por ser um vetor
