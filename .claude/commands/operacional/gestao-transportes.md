# Gestão: Transportes Veterinários

Ajuda a organizar, priorizar e gerir pedidos de transporte de animais da Quintinha ABC a consultas veterinárias.

## Como usar

Descreve o pedido de transporte ou lista de pedidos pendentes.
Podes também pedir análise do sistema atual e recomendações de melhoria.

Contexto / pedidos: $ARGUMENTS

---

## Formulário de Pedido de Transporte

Quando um animal precisa de transporte, a informação deve incluir:

```
🚗 PEDIDO DE TRANSPORTE

Animal: [nome + espécie + raça se relevante]
Urgência: [ ] Urgente (hoje/amanhã)  [ ] Normal (esta semana)  [ ] Eletivo (próximas semanas)
Data/Hora da consulta: [data e hora]
Destino: [clínica/hospital + morada]
Duração estimada: [aprox.]
Necessidades especiais: [ex: precisa de caixa de transporte M, animal agressivo, sedação provável]
Pedido feito por: [nome + equipa]
Data do pedido: [data]
```

---

## Triagem de Pedidos

Quando há múltiplos pedidos, prioriza por:

1. **Urgência médica** — animal em sofrimento ou situação de risco
2. **Data da consulta** — consultas mais próximas primeiro
3. **Distância/tempo de transporte** — otimizar quando possível agrupar transportes

---

## Matching com Voluntários

Para encontrar voluntário de transporte disponível:

1. Verificar disponibilidade na base de dados de voluntários de transporte
2. Contactar por ordem de proximidade geográfica ao abrigo / à clínica
3. Se nenhum voluntário disponível: escalar para coordenador de backoffice
4. Último recurso: contactar clínica para reagendar ou verificar se há taxi de animais parceiro

---

## Checklist pré-transporte (para o voluntário)

```
Antes de sair:
☐ Confirmar hora e morada da consulta
☐ Levar caixa de transporte adequada ao animal
☐ Levar cartão/histórico do animal (ou aceder ao ASM)
☐ Confirmar se o animal tem medicação ou jejum para a consulta
☐ Informar coordenador que está a sair com o animal

Após a consulta:
☐ Obter relatório/prescrição do veterinário
☐ Registar no ASM: diagnóstico, tratamento, medicação prescrita, próxima consulta
☐ Informar equipa de clínica de qualquer seguimento necessário
☐ Entregar medicação à equipa de stock se houver nova prescrição
```

---

## Análise do Sistema Atual

Se pedires uma análise do sistema de transportes atual, avalio:

- Volume de pedidos por semana e tendência
- Capacidade atual da equipa de 3 voluntários vs. procura
- Bottlenecks no processo de pedido e confirmação
- Alternativas ao WhatsApp para gestão de pedidos
- Possibilidade de criar pool alargado de voluntários de transporte
- Parcerias com clínicas para consultas itinerantes no abrigo (reduz transportes)
- Telemedicina veterinária para triagem (reduz consultas presenciais desnecessárias)

---

## Métricas a acompanhar

- Nº de pedidos de transporte por semana
- Tempo médio entre pedido e confirmação de voluntário
- Nº de pedidos não atendidos ou remarcados por falta de voluntário
- Nº de voluntários ativos de transporte
- Taxa de utilização por voluntário (evitar burnout de sempre os mesmos)
