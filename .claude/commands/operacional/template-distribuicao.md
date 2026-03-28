# Template: Distribuição de Tarefas

Gera uma distribuição de tarefas para uma equipa do abrigo, adaptada ao dia e às pessoas disponíveis.

## Como usar

Indica: dia da semana, número de voluntários presentes, e quaisquer condicionantes (ex: animal com medicação especial, limpeza extra necessária, visita de adoção agendada).

Contexto fornecido: $ARGUMENTS

---

## Estrutura da Distribuição

A distribuição deve cobrir obrigatoriamente as seguintes áreas, mesmo que não sejam explicitadas:

### BLOCO 1 — Animais (manhã, logo ao chegar)
- Verificação do estado geral dos animais (comportamento, saúde visual)
- Alimentação — cães (ração + água)
- Alimentação — gatos (ração + água + limpeza liteiras)
- Alimentação — animais de quinta (se aplicável)
- Medicações da manhã (verificar lista de animais com medicação)

### BLOCO 2 — Limpeza
- Limpeza dos canis (varrer, lavar, desinfetar)
- Limpeza dos gateiros
- Limpeza das zonas comuns
- Limpeza de bebedouros e comedouros
- Recolha e eliminação de resíduos

### BLOCO 3 — Socialização e bem-estar
- Passeios individuais com cães que precisam
- Tempo de socialização com animais mais ansiosos ou em recuperação
- Observação de comportamentos anómalos (registar)

### BLOCO 4 — Logística e stock
- Verificação de stock de ração (quantidade para os próximos dias)
- Verificação de stock de medicação (algum em falta?)
- Atualização do Google Sheets de stock se houve consumo
- Recolha de encomendas pendentes (se houver)

### BLOCO 5 — Registos
- Registo no ASM de medicações administradas e observações relevantes
- Registo de qualquer animal que precise de atenção veterinária
- Preparação do reporte da equipa para o coordenador

---

## Formato da Distribuição

A distribuição deve ser clara, curta e direta. Usa o seguinte formato:

```
📋 DISTRIBUIÇÃO — [DIA] [DATA]
Coordenador: [nome]
Equipa: [nomes dos voluntários presentes]

👤 [Nome Voluntário 1]
- Alimentação cães (canil norte)
- Limpeza canis 1 a 5
- Medicação: Rex (Prednisolona 5mg, manhã)

👤 [Nome Voluntário 2]
- Alimentação gatos + limpeza liteiras
- Socialização gatos sala B
- Atualizar stock ração gatos no Sheets

[etc.]

⚠️ ATENÇÃO GERAL
- [Animal X]: em observação, não abrir box sem coordenador
- [Animal Y]: medicação nova, ver instruções no ASM
- Visita de adoção às 11h — receber [nome adotante]

📝 REPORTE
Cada pessoa escreve o que fez e o que observou. Coordenador consolida até às 19h.
```

---

## Notas para o coordenador

- A distribuição não é uma lista de tarefas mínimas — é um ponto de partida. Voluntários devem resolver o que virem que precisa, mesmo que não esteja escrito.
- Se algo fica por fazer, regista no reporte com o motivo.
- Se um animal precisar de consulta urgente, contacta a equipa de transportes pelo canal próprio.
