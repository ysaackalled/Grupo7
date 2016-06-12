#ifndef FUNCOES
#define FUNCOES

int iniciar_arquivo(char *nome_arquivo, char *modo_acesso, FILE *fp) {

  fp = fopen(nome_arquivo, modo_acesso);
  if(fp == NULL) {
    printf ("Houve um erro ao abrir o arquivo.\n");
    return 1;
  } else {
    printf ("Arquivo %s criado com sucesso.\n", nome_arquivo);
  }

  return 0;
}

int fechar_arquivo(FILE *fp) {
  fclose(fp);
}

int ler_arquivo(char arquivo_abrir) {

  char letra;
  FILE *leitura;

  leitura = fopen(arquivo_abrir, "r");

  if(fp == NULL) {
    printf("Erro, nao foi possivel abrir o arquivo\n");
  } else {
    while( (letra=fgetc(leitura))!= EOF ) {
		  putchar(letra);
    }
  }
  fclose(leitura);
}

#endif
