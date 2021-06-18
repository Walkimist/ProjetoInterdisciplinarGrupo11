#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>

///Declara��o de fun��es
void logar(void);
void registrar(void);
void consultarVacinas(void);
void sistema(void);
void consultarPaciente(void);
void registrarPaciente(void);

///Declara��o de vari�veis
//Login
char senhaRegistrada[25];
char usuarioRegistrado[40];
char tentativaSenha[25];
char tentativaUsuario[40];
//Paciente
char nomePaciente[32];
char sexoPaciente;
char cpfPaciente[12];
char cpfBusca[12];

int quantVacinas = 0;
int idVacina[10];
int opcao;
int buffer;
int quantidadeVacinas;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	do { //Pegar op��o do usu�rio
		printf("============ Bem Vindo ao VacinaSil =============\n\n");
		printf("Escolha uma das seguintes op��es para prosseguir:\n\n");
		printf("=================================================\n\n");
		printf("1.Consultar Vacinas      2.Logar      3.Registrar\n\n");
		printf("=================================================\n\n");
		
		scanf("%i", &opcao);
		system("cls");
	} while (opcao < 1 || opcao > 3);
	getchar();
	
	switch(opcao) { //Levar o usu�rio at� a interface desejada
		case 1: 
			consultarVacinas();
		break;
		case 2:
			logar();
		break;
		case 3:
			registrar();
		break;
	}
}

void consultarVacinas(void) {
	do { //Pegar op��o do usu�rio
		printf("======================= Consultar Vacinas =======================\n\n");
		printf("Escolha uma das seguintes vacinas para ver mais informa��es:\n\n");
		printf("=================================================================\n\n");
		printf("1.BCG       2.DTP e HIB     3.HEPATITE B     4.PNEUMOC�CICA 10\n");
		printf("5.VOP       6.VORH          7.FEBRE AMARELA  8.MENINGOC�CICA C\n");
		printf("                   9.SCR       10.CORONAVAC\n\n");
		printf("=================================================================\n\n");
		
		scanf("%i", &opcao);
		system("cls");
	} while(opcao < 1 || opcao > 10);
	
	buffer = opcao;
	
	do { //Mostrar mais informa��es sobre a vacina desejada
	printf("=========================== Consultar Vacinas ===========================\n\n");
	switch(buffer) {
		case 1:
			printf("BCG:\n\n");
			printf("� uma vacina aplicada em uma �nica dose e protege a crian�a\n");
			printf("contra a tuberculose. Normalmente, � a primeira vacina que o\n");
			printf("beb� toma j� nas primeiras horas de vida. Ela deve ser aplicada\n");
			printf("antes do primeiro m�s de vida.\n\n");
			printf("ID: 1\n");
			printf("Quantidade em estoque: 1923\n\n");
		break;
		case 2:
			printf("DTP e HIB:\n\n");
			printf("Voc� conhece aquelas doen�as antigas que raramente acometem a\n");
			printf("popula��o atual? Essas vacinas s�o a grande raz�o para evit�-las.\n");
			printf("Tamb�m com o nome de vacina Tetravalente, ela protege o beb�\n");
			printf("contra difteria, t�tano, coqueluche e meningite.\n\n");
			printf("Aplicada em tr�s doses � aos dois, quatro e seis meses do beb�.\n");
			printf("� preciso ainda receber mais duas doses de refor�o, sendo uma\n");
			printf("quando a crian�a completa um ano e tr�s meses e outra aos quatro\n");
			printf("anos.\n\n");
			printf("ID: 2\n");
			printf("Quantidade em estoque: 831\n\n");
		break;
		case 3:
			printf("HEPATITE B:\n\n");
			printf("No total s�o tr�s doses contra Hepatite B, que s�o aplicadas ap�s\n");
			printf("o nascimento, a segunda no primeiro m�s do beb� e a terceira com\n");
			printf("seis meses de idade.\n\n");
			printf("ID: 3\n");
			printf("Quantidade em estoque: 3746\n\n");
		break;
		case 4:
			printf("PNEUMOC�CICA 10:\n\n");
			printf("Esta vacina combate a pneumonia, a meningite e a otite. S�o aplicadas\n");
			printf("doses aos dois, quatro, seis e doze meses de vida.\n\n");
			printf("ID: 4\n");
			printf("Quantidade em estoque: 4285\n\n");
		break;
		case 5:
			printf("VOP:\n\n");
			printf("A Vacina Oral Poliomielite protege a crian�a contra a chamada\n");
			printf("paralisia infantil e deve ser aplicada aos quatro meses de idade\n");
			printf("e aos seis meses. O refor�o � necess�rio quando a crian�a atinge\n");
			printf("um ano e tr�s meses de vida.\n\n");
			printf("ID: 5\n");
			printf("Quantidade em estoque: 2531\n\n");
		break;
		case 6:
			printf("VORH:\n\n");
			printf("A Vacina Oral de Rotav�rus Humano imuniza o beb� da diarreia provocada\n");
			printf("pelo micro-organismo conhecido por rotav�rus. Aplica-se aos dois meses\n");
			printf("de idade e aos quatro meses.\n\n");
			printf("ID: 6\n");
			printf("Quantidade em estoque: 1432\n\n");
		break;
		case 7:
			printf("FEBRE AMARELA:\n\n");
			printf("A vacina � aplicada pela primeira vez aos nove meses de vida. Antes\n");
			printf("era necess�rio tomar a vacina de 10 em 10 anos, mas desde 11 de julho\n");
			printf("de 2016, a OMS afirmou n�o ser necess�rio novo certificado por n�o\n");
			printf("ser preciso tomar uma nova dose da vacina. A dose �nica imuniza\n");
			printf("pelo resto da vida.\n\n");
			printf("ID: 7\n");
			printf("Quantidade em estoque: 2541\n\n");
		break;
		case 8:
			printf("MENINGOC�CICA C:\n\n");
			printf("Contra a meningite, a primeira dose da vacina � aplicada aos tr�s\n");
			printf("meses de vida. A segunda dose aos cinco meses e a terceira dose com\n");
			printf("um ano e tr�s meses de idade.\n\n");
			printf("ID: 8\n");
			printf("Quantidade em estoque: 2051\n\n");
		break;
		case 9:
			printf("SCR:\n\n");
			printf("Tamb�m conhecida como tr�plice viral, a vacina previne contra a\n");
			printf("caxumba, rub�ola e sarampo, e deve ser tomada em dois momentos:\n");
			printf("quando a crian�a atingir os 12 meses de idade e aos quatro anos\n");
			printf("de idade.\n\n");
			printf("ID: 9\n");
			printf("Quantidade em estoque: 7962\n\n");
		break;
		case 10:
			printf("CORONAVAC:\n\n");
			printf("CoronaVac � uma vacina contra a COVID-19 desenvolvida pela companhia\n");
			printf("biofarmac�utica chinesa Sinovac Biotech. A vacina utiliza uma vers�o\n");
			printf("quimicamente inativada do SARS-CoV-2, o tipo de coronav�rus que causa\n");
			printf("COVID-19.\n\n");
			printf("ID: 10\n");
			printf("Quantidade em estoque: 1359\n\n");
		break;
	}	
	printf("=========================================================================\n\n");
	printf("             1.L�r sobre outra vacina         2.Voltar ao menu\n\n");
	printf("=========================================================================\n\n");
	scanf("%i", &opcao); //Pegar op��o do usu�rio
	system("cls");
	} while(opcao != 1 && opcao != 2);
	
	switch(opcao) { //Levar o usu�rio at� a interface desejada
		case 1:
			consultarVacinas();
		break;
		case 2:
			main();
		break;
	}
}

void logar(void) {
	printf("================ Login ================\n\n");
	printf("Insira as informa��es de login:\n\n");
	printf("E-Mail: ");
	scanf("%s", &tentativaUsuario); //Pegar e-mail
	printf("Senha: ");
	scanf("%s", &tentativaSenha); //Pegar senha
	printf("\n=======================================\n\n");
	
	if (strcmp(tentativaUsuario, usuarioRegistrado) == 0 && strcmp(tentativaSenha, senhaRegistrada) == 0) { //Checar credenciais
		printf("Login efetuado com sucesso!\n");
		printf("Aperte qualquer bot�o para continuar...\n\n");
		printf("=======================================\n\n");
		getchar();
		getchar();
		system("cls");
		sistema();
	} else {
		printf("Falha no login, credenciais incorretas.\n");
		printf("Escolha uma das seguintes op��es:\n\n");	
		do { //Pegar op��o do usu�rio
			printf("=======================================\n\n");
			printf("1.Tentar novamente    2.Registrar conta\n\n");
			printf("            3.Voltar ao menu\n\n");
			printf("=======================================\n\n");
			scanf("%i", &opcao);
			system("cls");
		} while (opcao < 1 || opcao > 3);
		
		switch(opcao) { //Levar o usu�rio at� a interface desejada
			case 1:
				logar();
			break;
			case 2:
				registrar();
			break;
			case 3:
				main();
			break;
		}
	}
}

void registrar(void) {
	printf("=============== Registrar ===============\n\n");
	printf("Insira um e-mail para a abrir uma conta:\n\n");
	printf("=========================================\n\n");
	scanf("%s", &usuarioRegistrado); //Registrar e-mail
	system("cls");
	
	printf("============ Registrar ============\n\n");
	printf("Identidade confirmada com sucesso!\n\n");
	printf("Insira uma senha para sua conta:\n\n");
	printf("===================================\n\n");
	scanf("%s", &senhaRegistrada); //Registrar senha
	system("cls");
	
	printf("============== Registrar ==============\n\n");
	printf("Conta criada com sucesso!\n\n");
	printf("Aperte qualquer bot�o para continuar...\n\n");
	printf("=======================================\n\n");
	getchar();
	getchar();
	system("cls");
	
	logar();
}

void sistema(void) {
	do { //Pegar op��o do usu�rio
		printf("==================== Sistema ====================\n\n");
		printf("Escolha uma das seguintes opcoes para prosseguir:\n\n");
		printf("=================================================\n\n");
		printf("1.Consultar paciente         2.Registrar paciente\n\n");
		printf("                   3.Deslogar\n\n");
		printf("=================================================\n\n");
		scanf("%i", &opcao);
		system("cls");
	} while (opcao < 1 || opcao > 3);
	getchar();
	
	switch(opcao) { //Levar o usu�rio at� a interface desejada
		case 1:
			consultarPaciente();
		break;
		case 2:
			registrarPaciente();
		break;
		case 3:
			main();
		break;
	}
}

void registrarPaciente(void) {
	printf("============ Registrar Paciente ============\n\n");
	printf("Insira o nome completo do(a) paciente:\n\n");
	printf("============================================\n\n");
	fgets(nomePaciente, 32, stdin); //Pegar nome do(a) paciente
	nomePaciente[strcspn(nomePaciente, "\n")] = 0;
	system("cls");
	
	do { //Pegar sexo do(a) paciente
		printf("======== Registrar Paciente ========\n\n");
		printf("Insira o sexo do(a) paciente (m ou f):\n\n");
		printf("====================================\n\n");
		scanf("%c", &sexoPaciente);
		system("cls");
	} while (tolower(sexoPaciente) != 'f' && tolower(sexoPaciente) != 'm');
	
	printf("======= Registrar Paciente =======\n\n");
	printf("Insira o cpf do(a) paciente:\n\n");
	printf("==================================\n\n");
	scanf("%s", &cpfPaciente); //Pegar o CPF do(a) paciente
	system("cls");
	
	do {
		printf("=============================== Registrar Paciente ===============================\n\n");
		printf("Insira o ID das vacinas tomadas pelo paciente, ou -1 para finalizar (m�ximo 10): ");
		scanf("%i", &opcao);
		system("cls");
		
		if (opcao > 0 && opcao <= 10) { //Registrar as vacinas tomadas pelo paciente
			idVacina[quantVacinas] = opcao;
			quantVacinas ++;
		} else if (opcao != -1){
			printf("ID Inv�lido. \n\n");
		}
	} while (opcao != -1 && quantVacinas < 10);
	
	printf("========== Registrar Paciente ==========\n\n");
	printf("Paciente cadastrado com sucesso!\n\n");
	printf("Aperte qualquer bot�o para continuar...\n\n");
	printf("========================================\n\n");
	getchar();
	getchar();
	system("cls");
		
	consultarPaciente();
}

void consultarPaciente(void) {
	printf("=========== Consultar Paciente ===========\n\n");
	printf("Insira o CPF do paciente a ser consultado:\n\n");
	printf("==========================================\n\n");
	scanf("%s", &cpfBusca);
	system("cls");
	
	if (strcmp(cpfBusca, cpfPaciente) == 0) {
		do {
			printf("=========== Consultar Paciente ===========\n\n");
			printf("Nome: ");
			puts(nomePaciente);
			printf("Sexo: %c\n", sexoPaciente);
			printf("CPF: %s\n\n", cpfPaciente);
			printf("============ Vacinas Aplicadas ===========\n\n");
			for(int i = 0; i < quantVacinas; i ++) {
				switch(idVacina[i]) {
					case 1:
						printf("BCG");
					break;
					case 2:
						printf("DTP e HIB");
					break;
					case 3:
					printf("HEPATITE B");
					break;
					case 4:
						printf("PNEUMOC�CICA 10");
					break;
					case 5:
						printf("VOP");
					break;
					case 6:
						printf("VORH");
					break;
					case 7:
						printf("FEBRE AMARELA");
					break;
					case 8:
						printf("MENINGOC�CICA C");
					break;
					case 9:
						printf("SCR");
					break;
					case 10:
						printf("CORONAVAC");
					break;
			}
			if (i < quantVacinas - 1) {
				printf("\n");
			} else {
				printf("\n\n");
			}
		}
			printf("==========================================\n\n");
			printf("1.Voltar ao menu        2.Finalizar sess�o\n\n");
			printf("==========================================\n\n");
			scanf("%i", &opcao); //Pegar op��o do usu�rio
			system("cls");
		} while (opcao < 1 || opcao > 2);
		getchar();
		
		switch(opcao) { //Levar o usu�rio at� a interface desejada
			case 1:
				sistema();
			break;
			case 2:
			break;
		}
	} else {
		printf("Falha na busca, paciente n�o encontrado.\n");
		printf("Escolha uma das seguintes op��es:\n\n");	
		do { //Pegar op��o do usu�rio
			printf("==========================================\n\n");
			printf("1.Tentar novamente    2.Registrar paciente\n\n");
			printf("            3.Voltar ao menu\n\n");
			printf("==========================================\n\n");
			scanf("%i", &opcao); 
			system("cls");
		} while (opcao < 1 || opcao > 3);
		getchar();
		
		switch(opcao) { //Levar o usu�rio at� a interface desejada
			case 1:
				consultarPaciente();
			break;
			case 2:
				registrarPaciente();
			break;
			case 3:
				sistema();
			break;
		}
	}
}
