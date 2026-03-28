# Template: Reporte Diário

Gera ou consolida o reporte diário do abrigo, a partir das notas da equipa.

## Como usar

Cola as notas de cada voluntário e pede ao Claude para consolidar num reporte claro para o grupo geral.
Ou pede para gerar um template de reporte em branco para a equipa preencher.

Contexto / notas da equipa: $ARGUMENTS

---

## Template de Reporte para a Equipa Preencher

Cada voluntário deve preencher no final do turno:

```
👤 [Nome] — [Dia] [Data]

✅ O que fiz:
-

🐾 Observações de animais:
- [Nome animal]: [o que observei]
-

⚠️ Atenção / urgências:
-

📦 Stock:
- Ração: [nível ok / a acabar / repor urgente]
- Medicação: [tudo ok / falta X]
-

❓ Ficou por fazer:
- [O que não consegui fazer e porquê]
```

---

## Template do Reporte Consolidado (para o grupo geral)

Após o coordenador consolidar, o reporte enviado ao grupo geral deve seguir este formato:

```
📋 REPORTE DO DIA — [DIA] [DATA]

🏡 Equipa presente: [nomes]

✅ Realizado hoje:
- Alimentação e medicações em dia
- Limpeza geral dos canis e gateiros
- [Outras tarefas realizadas]

🐾 Animais com nota:
- [Nome]: [situação — ex: "vomitou de manhã, em observação"]
- [Nome]: [situação — ex: "medicação nova iniciada, a tolerar bem"]

🚨 Urgências / seguimento necessário:
- [Ex: "Rex precisa de consulta urgente — contactar equipa de transportes"]
- [Ex: "Ração de gatinhos a acabar — stock crítico"]

📦 Stock:
- Ração cães: [ok / repor esta semana / urgente]
- Ração gatos: [ok / repor esta semana / urgente]
- Medicação: [ok / falta X]

📝 Notas adicionais:
- [Qualquer outra informação relevante]

Bom trabalho a todos! 🐾
[Coordenador]
```

---

## Consolidação automática

Se tiveres as notas de cada voluntário, pede:
"Consolida estas notas no formato de reporte para o grupo geral"

O reporte deve ser:
- **Curto** — quem não foi ao abrigo hoje precisa de saber o essencial em 30 segundos
- **Claro** — sem jargão, sem ambiguidades
- **Acionável** — urgências destacadas, com o que é preciso fazer a seguir
- **Positivo** — termina sempre com reconhecimento da equipa
