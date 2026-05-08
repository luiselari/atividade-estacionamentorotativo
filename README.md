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
