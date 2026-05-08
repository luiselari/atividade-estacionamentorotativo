#include <stdio.h>

int main() {

    char nome_placa[20];
    int tipo_auto;
    int h_ent, m_ent;   
    int h_sai, m_sai;   
    int entrada_min;    
    int saida_min;      
    int perm_min;     
    float total_horas;  
    float preco_hora;
    float valor_total;

    // =========================
    // BUSCA NO SISTEMA
    
    printf("===== SAIDA DO VEICULO =====\n");
    printf("Digite a placa ou CPF: ");
    scanf("%19s", nome_placa);

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
        printf("Tipo invalido! Encerrando o sistema.\n");
        return 0;
    }

    // =========================
    // HORA DE ENTRADA (do ticket)
 
    printf("\nHORA DE ENTRADA (conforme ticket)\n");
    printf("Hora   (0 a 23): ");
    scanf("%d", &h_ent);

    printf("Minuto (0 a 59): ");
    scanf("%d", &m_ent);

    // converte entrada para minutos 
    entrada_min = (h_ent * 60) + m_ent;

    // =========================
    // HORA DE SAIDA
    
    printf("\nHORA DE SAIDA\n");
    printf("Hora   (0 a 23): ");
    scanf("%d", &h_sai);

    printf("Minuto (0 a 59): ");
    scanf("%d", &m_sai);

    // converte saida para minutos (uso interno)
    saida_min = (h_sai * 60) + m_sai;

    // =========================
    // CALCULO DE PERMANENCIA
    
    perm_min = saida_min - entrada_min;

    // converte minutos para horas para calcular preco
    total_horas = perm_min / 60.0;

    // regra: minimo cobrado e 1 hora
    if (total_horas < 1.0) {
        total_horas = 1.0;
    }

    // =========================
    // CALCULO DO VALOR
    
    valor_total = preco_hora * total_horas;

    // regra: mais de 5h aplica desconto de 10%
    if (total_horas > 5.0) {
        valor_total = valor_total * 0.90;
    }

    // regra: mais de 10h aplica multa de R$20 (acumula com desconto)
    if (total_horas > 10.0) {
        valor_total = valor_total + 20.0;
    }

    // =========================
    // COMPROVANTE FINAL
  
    printf("\n====COMPROVANTE =======\n");
    printf("Identificacao: %s\n", nome_placa);

    if (tipo_auto == 1)
        printf("Tipo: Moto\n");
    else if (tipo_auto == 2)
        printf("Tipo: Carro\n");
    else
        printf("Tipo: Caminhonete\n");

    printf("Entrada:     %02d:%02d\n", h_ent, m_ent);
    printf("Saida:       %02d:%02d\n", h_sai, m_sai);
    printf("Permanencia: %.2f horas\n", total_horas);
    printf("Preco/hora:  R$ %.2f\n", preco_hora);

    if (total_horas > 10.0) {
        printf("Desconto 10%% aplicado + Multa R$ 20,00\n");
    } else if (total_horas > 5.0) {
        printf("Desconto 10%% aplicado\n");
    } else if (perm_min < 60) {
        printf("Cobrado minimo de 1 hora\n");
    }

    printf("---------------------------\n");
    printf("VALOR A PAGAR: R$ %.2f\n", valor_total);
    printf("===========================\n");
    printf("Agradecemos, ate a proxima!\n");

    return 0;
}