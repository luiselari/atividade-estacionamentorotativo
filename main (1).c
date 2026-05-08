#include <stdio.h>

int main() {

    char nome_placa[20];
    int com_placa;
    int tipo_auto;
    int h_ent, m_ent;
    float preco_hora;

    // =========================
    // PLACA OU CPF
    
    printf("O veiculo possui placa?\n");
    printf("1 - SIM\n");
    printf("0 - NAO\n");
    printf("Escolha: ");
    scanf("%d", &com_placa);

    if (com_placa == 1) {
        printf("Digite a placa: ");
        scanf("%19s", nome_placa);
    } else {
        printf("Nao foi possivel identificar a placa.\n");
        printf("Por favor, digite seu CPF: ");
        scanf("%19s", nome_placa);
    }

    // =========================
    // TIPO DE VEICULO

    printf("\nTIPO DE VEICULO\n");
    printf("1 - Moto\n");
    printf("2 - Carro\n");
    printf("3 - Caminhonete\n");
    printf("Escolha: ");
    scanf("%d", &tipo_auto);

    switch (tipo_auto) {
        case 1: preco_hora = 3.0; break;
        case 2: preco_hora = 5.0; break;
        case 3: preco_hora = 8.0; break;
        default:
            printf("Tipo invalido! Definindo como Carro.\n");
            preco_hora = 5.0;
            tipo_auto = 2;
    }

    // =========================
    // HORA DE ENTRADA
  
    printf("\n Digite a hora \n");
    printf("Hora, somente a hora (ex: 13): ");
    scanf("%d", &h_ent);

    printf("Minuto (0 a 59): ");
    scanf("%d", &m_ent);

    // =========================
    // TICKET DE ENTRADA
  
    printf("\n- TICKET --------\n");
    printf("Identificacao: %s\n", nome_placa);

    if (tipo_auto == 1)
        printf("Tipo: Moto        | R$ 3.00/h\n");
    else if (tipo_auto == 2)
        printf("Tipo: Carro       | R$ 5.00/h\n");
    else
        printf("Tipo: Caminhonete | R$ 8.00/h\n");

  
    printf("Entrada: %02d:%02d\n", h_ent, m_ent);
    printf("------------------------\n");
    printf("Ola! Acesso liberado, pegue seu ticket e siga em frente!\n");

    return 0;
}