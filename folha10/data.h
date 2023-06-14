// Dados fict�cios
#define MAXDISC 100
#define MAXALUNOS 1000
#define MAX 11
#define MAXNOME 100


typedef struct aluno {
    char nome[MAXNOME], codigo[MAX];
    int disc[MAX], nd;
} ALUNO;

typedef struct disciplina {
    char nome[MAXNOME];
    int ano;
} DISCIPLINA;

int NDisc = 29;
DISCIPLINA Disc[MAXDISC] = {
	 {"Programacao Imperativa",1},
	 {"Calculo Infinitesimal I",1},
	 {"Introducao aos Computadores",1},
	 {"Matematica para Ciencia de Computadores",1},
	 {"Programacao Estruturada",1},
	 {"Elementos de Algebra Linear",1},
	 {"Calculo Infinitesimal II",1},
	 {"Arquitectura de Computadores",1},
	 {"Probabilidades e Estatistica ",2},
	 {"Analise Infinitesimal",2},
	 {"Estruturas de Dados e Algoritmos",2},
	 {"Algebra",2},
	 {"Interfaces Graficas",2},
	 {"Sistemas de Operacao",2},
	 {"Modelos de Computacao",2},
	 {"Redes e Sistemas Distribuidos",3},
	 {"Bases de Dados",3},
	 {"Logica Computacional",3},
	 {"Compiladores",3},
	 {"Inteligencia Artificial",3},
	 {"Metodos de Apoio a Decisao",4},
	 {"Teoria da Computacao",4},
	 {"Complementos de Inteligencia Artificial",4},
	 {"Engenharia de Software ",4},
	 {"Seguranca de Redes e Sistemas",4},
	 {"Introducao a Simulacao",3},
	 {"Aplicacoes em Rede",4},
	 {"Complexidade",4},
	 {"Estagio",4}
	};

int NAlunos = 86;
ALUNO Alunos[MAXALUNOS] = {
	 {"Joao Diogo Silva","2000018001",{1,2,27,28},4},
	 {"Mariana Pinto Matias","2001018003",{2,17,19,14,13,27,8,20,11},9},
	 {"Anabela Moreira","2001018004",{21,22,23,28,29},5},
	 {"Sonia Silva","2002020005",{16,17,18,19,20},5},
	 {"Joao Pereira","2004010099",{8,1,2,3,4,5,6},7},
	 {"Manuel Magno Pereira","2003020005",{9,10,11,12,13,14,15},7},
	 {"Cristina Cal Santos","2004020007",{1,2,3,4,5,6,7,8},8},
	 {"Jose Carlos Silvado","2004020006",{1,2,3,4,5,6,7,8},8},
	 {"Manuel Silva Pereira","2004020005",{1,2,3,4,5,6,7,8},8},
	 {"Jose Joao Maria Pinto","2004018010",{2},1},
	 {"Maria Gil Matos","2001018005",{3,4},2},
	 {"Pedro Santiago","2002019021",{1,2,3,4,5,6,7,8},8},
	 {"Ana Santos Sousa","2004020004",{1,2,3,4,5,6,7,8},8},
	 {"Ana Moura","2003018023",{9,10,11,12,13},5},
	 {"Joao Carlos Silva","2004018055",{1,2,3,4,5,6,7,8},8},
	 {"Daniel Pereira","2003018066",{9},1},
	 {"David Matias Pinto","2002018015",{9,10,11,12,13,14,15,16,17},9},
	 {"Helder Matos","2001018014",{2,4,6,7,9,10,15,14,16,17,20},11},
	 {"Joaquim Montes","2002018002",{9,10,11,12,13,14,15,16,17},9},
	 {"Paulo Gomes Costa","2001020044",{9,10,11,12,13,14,15},7},
	 {"Mario Rocha","2001020011",{2,4,6,7,9,10,15,14,16,17,20},11},
	 {"Marta Faro","2001020016",{7,9,11,10,12,13,15,14},8},
	 {"Manuela Filipa Magalhaes","2001020023",{21,22,23,28,29,27},6},
	 {"Joao Margarido Santos","2000019027",{21,22,23,28,29,27},6},
	 {"Maria Manuela Pinto","2001019003",{21,22,23,28,29,27,2},7},
	 {"Ana Rodrigues Moreira","2001019004",{21,2,22,23,15,28,29,27},8},
	 {"Sofia Silva Egas","2002019005",{5},1},
	 {"Manuel Pereira Moniz","2003019025",{9,10},2},
	 {"Cristina Sangalho","2004019017",{4,5,6},3},
	 {"Henrique Silva","2004019016",{1,2,3,4,5,6,7,8},8},
	 {"Jose Miguel Pereira","2004019015",{1,2,3,4,5,6,7,8},8},
	 {"Jose Torres Pinto","2004019014",{1,2,3,4,5,6,7,8},8},
	 {"Maria Ana Matos","2001019025",{15,2,13,14,5,16,21,11},8},
	 {"Ana Santareno","2004019008",{5,6,7,8,1,2,3,4},8},
	 {"Ana Moura Costa","2003019031",{4,14,12,13,15,9,10,11},8},
	 {"Joao Antero Silva","2004019065",{5,6,7,8,1,2,3,4},8},
	 {"Daniel Portugal","2003019067",{5,14,12,13,15,9,10,11},8},
	 {"David Santos","2001019015",{16,20,17,18,19},5},
	 {"Helder Joao Matos","2001019014",{16,20,17,18,29,0},6},
	 {"Joaquim Manuel Montes","2002019002",{2,11,16,20,17,18,19,8,12,15,7},11},
	 {"Paulo Freire","2001019044",{16,20,17,18,29,0},6},
	 {"Mariana Roque","2000019011",{16,17,18,29,15},5},
	 {"Marta Campos","2000019016",{29},1},
	 {"Manuel Filipe Marcos Campos","2001019023",{26,21,22,25,24,27,17,20,14,28},10},
	 {"Joao Andre Silva","2000019001",{2,21,22,5,24,27,7,20,14,28},10},
	 {"Andre Maria Pinto","2001019030",{16,17,18,29,15,13,7,8},8},
	 {"Ana Margarida Moreira","2001019024",{29,21,22,25,24,27,17},7},
	 {"Sofia Alves Silva","2002019043",{16,17,18,19,25,20,24},7},
	 {"Manuel Carlos Peres","2003019015",{9,10,5,11,12,15,14,13,6},9},
	 {"Carla Orta Torres","2004019003",{1,2,5,6,3,4,7,8},8},
	 {"Jose Miguel Carlos","2004019026",{1,2,5,6,3,4,7,8},8},
	 {"Jorge Peres Vivaldi","2004019035",{1,2,5,6,3,4,7,8},8},
	 {"Jose Maria Magno","2004019010",{1,2,5,6,3,4,7,8},8},
	 {"Maria Alegre","2001019075",{27,26,29,21,22,23,20},7},
	 {"Ana Clemente Santos","2004019034",{1,2,3,4,7,8,5,6},8},
	 {"Marta Gabriela Moura","2003019021",{9,2,3,4,7,8,5,6,15,12,11},11},
	 {"Sebastiao Gomes","2004019058",{1,2,3,4,7,8,5,6},8},
	 {"Miguel Pereira Crespo","2003019070",{1,2,3,4,7,8,5,6},8},
	 {"David Costa Pinto","2002019035",{9,2,3,4,7,8,5,6,15,12,16},11},
	 {"Helder Luis Matos","2001019034",{9,2,3,4,7,18,5,6,17,12,16},11},
	 {"Joaquim Lorenzo","2002019012",{16,17,18,19,20,9,10,15},8},
	 {"Paulo Ortega","2001019041",{16,17,18,19,20,9,10,15},8},
	 {"Mario Santos Faria","2001019101",{21,22,23,27,28,29},6},
	 {"Martim Alves","2001019061",{21,22,23,27,28,29},6},
	 {"Manuel Antonio Castro","2001019053",{21,22,23,27,28,29},6},
	 {"Gabriel Marques","2000019031",{7,19,29,21,20,24},6},
	 {"Margarida Lucas","2001019037",{2,19,15,21,20,24},6},
	 {"Ana Isabel Moreira","2001019049",{2,19,15,21,20,25},6},
	 {"Maria Augusta Silva","2002019025",{16,17,18,20},4},
	 {"Ana Manuela Alves","2003019024",{9,10,11,12,13,14,15},7},
	 {"Claudia Pereira Afonso","2004019157",{1,2,3,4,5,6,7,8},8},
	 {"Luisa Silva","2004019063",{1,2,3,4,5,6,7,8},8},
	 {"Luis Trigo Gomes","2004019057",{1,2,3,4,5,6,7,8},8},
	 {"Joana Lemos Faria","2004019071",{1,2,4,5,6,8},6},
	 {"Catarina Augusto","2001019105",{9,10,11,12,13,20,21,17,19,15,8},11},
	 {"Ana Claudia Santiago","2004019104",{1,2,7,8,3,4,5,6},8},
	 {"Ana Andrade Jorge","2003019123",{2,7,8,3,4,5,6,10},8},
	 {"Rui Santos Pereira","2004019155",{1,2,7,8,3,4,5,6},8},
	 {"Daniel Marques Pinto","2003019166",{1,2,7,8,3,4,5,6,9,10,11},11},
	 {"David Saraiva Fontes","2002019115",{16,17,18,19,20,15,14,13,11},9},
	 {"Helder Matos Moura","2001019114",{1,2,7,8,3,4,5,6,9,10,11},11},
	 {"Joana Luz Montes","2002019022",{16,17,18,19,20,15,14,13,11},9},
	 {"Paula Maria Costa","2001019040",{16,10,18,19,21,15,14,13,11,24,8},11},
	 {"Elisabete Rocha","2001019110",{21,24,7,8,23,4,25,6,9,10,11},11},
	 {"Marta Afonso Trindade","2001019160",{29,28,27,2,25,24,23,22,21},9},
	 {"Marco Filipe Santarem","2001019130",{29,28,7,2,25,24,3,22,21},9}
	};