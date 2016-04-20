#ifndef CADASTRO_CORRIDA
#define CADASTRO_CORRIDA

struct padrao {

	char *genero;
	char *marca;
	double preco;
	char *indicacao;
	int estoque;
	double percentual_desconto;

};
struct cadastro_acessorio {

	struct padrao *padrao;
	char *cor;
	char *tipo;
	char *tamanho;

};
struct cadastro_camiseta {

	struct padrao *padrao;
	char *cor;
	char *tipo;
	char *gola;
	char *manga;
	char *tamanho;
};
struct cadastro_calca {

	struct padrao *padrao;
	char *tamanho;
	char *material;

};
struct cadastro_meias {

	struct padrao *padrao;
	char *tamanho;
	char *material;

};
struct monitoramento_cardiaco {

	struct padrao *padrao;
	char *tamanho;
	char *tipo_esporte;
	char *distancia_velocidade;
	char *transmissao_fc;
	char *calculo_calorias;

};
struct tennis_perfomance {

	struct padrao *padrao;
	int tamanho;
	char *pisada;
	char *terreno;
	char *material;

};

typedef struct cadastro_acessorio Acessorio;
typedef struct cadastro_camiseta Camiseta;
typedef struct cadastro_meias Meias;
typedef struct cadastro_calca Calca;
typedef struct monitoramento_cardiaco MonitoramentoCardiaco;
typedef struct tennis_perfomance TennisPerfomance;

#endif