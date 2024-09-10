#define MAX 100

typedef struct fila_prioridade FilaPrio;

FilaPrio* cria_FilaPrio();
void libera_filaPrio(FilaPrio* fp);
int consulta_filaPrio(FilaPrio* fp, char* nome);
int insere_filaPrio(FilaPrio* fp, char* nome, int prio);
int remove_filaPrio(FilaPrio* fp);
int tamanho_filaPrio(FilaPrio* fp);
int estaCheia_FilaPrio(FilaPrio* fp);
int estaVazia_FilaPrio(FilaPrio* fp);