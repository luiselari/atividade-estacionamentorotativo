# SIG — Sistema de Gerenciamento de Estacionamento Rotativo

> Atividade Avaliativa desenvolvido para a disciplina de Laboratório de Programação
> Bacharelado Interdisciplinar em Ciência e Tecnologia — UFMA

---

## 👥 Autores

| Nome | Matrícula |
|------|-----------|
| Daniel Pinheiro | 2023035762 |
| Larissa Luise Lima Nunes | 2023050295 |

---

## 📋 Sobre o Projeto

O **SIG** é um sistema em linguagem C que simula o gerenciamento de um estacionamento rotativo. O sistema controla a entrada e saída de veículos, calcula o tempo de permanência e cobra o valor proporcional ao tipo de veículo, aplicando descontos e multas conforme as regras de negócio definidas.

---

## 🚗 Tipos de Veículos e Tarifas

| Tipo | Código | Tarifa |
|------|--------|--------|
| Moto | 1 | R$ 3,00/h |
| Carro | 2 | R$ 5,00/h |
| Caminhonete | 3 | R$ 8,00/h |

---

## 📐 Regras de Negócio

| Condição | Regra |
|----------|-------|
| Permanência < 1h | Cobra mínimo de 1 hora |
| Permanência > 5h | Aplica desconto de 10% |
| Permanência > 10h | Aplica desconto de 10% + multa de R$ 20,00 |

---

## 🗂️ Estrutura do Projeto

---

## ⚙️ Como Funciona

### Entrada (entrada.c)
1. Sistema verifica se o veículo possui placa legível
   - **Com placa** → cadastro por placa
   - **Sem placa** → solicita CPF do condutor
2. Condutor informa o tipo de veículo
3. Sistema registra o horário de entrada
4. Ticket é gerado com: identificação, tipo, horário e tarifa por hora

### Saída (saida.c)
1. Sistema busca o veículo pela placa ou CPF
2. Condutor informa o horário de entrada (do ticket) e o horário de saída
3. Sistema calcula o tempo de permanência em minutos e converte para horas
4. Aplica as regras de negócio (mínimo, desconto ou multa)
5. Exibe o comprovante com o valor final a pagar

---

## 🧮 Variáveis Principais

| Variável | Tipo | Descrição |
|----------|------|-----------|
| nome_placa | char[20] | Placa ou CPF do veículo |
| tipo_auto | int | Tipo do veículo (1, 2 ou 3) |
| h_ent / m_ent | int | Hora e minuto de entrada |
| h_sai / m_sai | int | Hora e minuto de saída |
| total_horas | float | Tempo total de permanência em horas |
| preco_hora | float | Tarifa por hora conforme tipo |
| valor_total | float | Valor final cobrado |

---

## 🚀 Como Compilar e Executar

### Pré-requisitos
- Compilador GCC instalado

### Compilação

```bash
gcc entrada.c -o entrada
gcc saida.c   -o saida
```

### Execução

```bash
# Ao chegar ao estacionamento:
./entrada

# Ao sair do estacionamento:
./saida
```

> ⚠️ **Atenção:** hora e minuto devem ser digitados **separadamente**.
> Exemplo: Hora: 14 pressione Enter depois Minuto: 30 pressione Enter

---

## 🧪 Exemplos de Cálculo

| Entrada | Saída | Permanência | Veículo | Regra | Valor |
|---------|-------|-------------|---------|-------|-------|
| 14:00 | 15:00 | 1h | Moto | Normal | R$ 3,00 |
| 14:00 | 14:20 | mínimo 1h | Carro | Mínimo 1h | R$ 5,00 |
| 08:00 | 14:00 | 6h | Carro | Desconto 10% | R$ 27,00 |
| 08:00 | 19:00 | 11h | Carro | Desc. 10% + Multa | R$ 69,50 |



