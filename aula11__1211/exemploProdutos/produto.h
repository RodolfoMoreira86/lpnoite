//definir um tipo produto (ponteiro para o produto)
typedef struct Produto * p_produto;

//inicilizar um vetor do tamanho x de ponteiros para produtos
void inicializar(p_produto pProduto[], int tamanho);

//cadastrar em uma posicao (um novo produto) e alocar nesta
//posicao do ponteiro
void cadastrar(p_produto pProduto[], int posicao);

//listar na tela apenas os produtos cadastrados
void imprimir(p_produto pProduto[], int tamanho);

//recebe o vetor, seu tamanho, e pede qual deseja-se alterar
void atualizar(p_produto pProduto[], int tamanho);

//percorre a lista somando (preco_unitario * qtd)
void verificarPatrimonio(p_produto pProduto[], int tamanho);

//percorre a lista, ao encontrar o produto solicita a qtd
//comprada ao usuario
void comprar(p_produto pProduto[], int tamanho);

//percorre a lista, ao encontrar o produto solicita a qtd
//vendida ao usuario
void vender(p_produto pProduto[], int tamanho);

//listar um unico produto encontrado a partir da solicitacao
//do usuario
void listarProdutoUnico(p_produto pProduto[], int tamanho);

//leitura para o codigo procurado
int procurarProduto();

void imprimirProduto(p_produto const *pProduto, int i);
