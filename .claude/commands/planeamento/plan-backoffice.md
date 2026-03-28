# Plano: Reestruturação do Backoffice

Propõe uma reestruturação das equipas de backoffice da Quintinha ABC para melhorar a resiliência, eficácia e cobertura de todas as áreas críticas.

## Contexto do problema

O backoffice da Quintinha ABC tem 12 áreas funcionais com equipas de tamanho muito variável (de 1 a 5 pessoas), várias em situação crítica (sócios/padrinhos com 1 pessoa, email geral sem responsável claro, transportes em sobrecarga). Não há coordenação transversal entre equipas. Muitas dependências da presidente.

## O que fazer

### 1. Auditoria de prioridade de cada equipa
Para cada equipa, classifica:
- **Criticidade para a operação** (se parar, o que acontece?)
- **Estado atual** (funcional / em risco / em falha)
- **Urgência de reforço** (imediato / médio prazo / baixa prioridade)

### 2. Mapa de recrutamento interno
Antes de recrutar novos voluntários, verifica:
- Há voluntários existentes que poderiam integrar equipas de backoffice?
- Há voluntários do abrigo com competências específicas (ex: comunicação, gestão, informática)?
- Como fazer o match entre skills de voluntários e necessidades de backoffice?

### 3. Proposta de reestruturação por área crítica

#### Sócios e Padrinhos (1 pessoa — CRÍTICO)
- Reforço imediato com pelo menos 2 pessoas adicionais
- Processo documentado para cartões anuais
- Automatização parcial com ferramentas (ex: template de email, base de dados de padrinhos)
- SLA de resposta a padrinhos e sócios

#### Email Geral (terra de ninguém — CRÍTICO)
- Definir 1 responsável de triagem por dia ou semana (rotação)
- Criar regras de encaminhamento automático por categoria
- SLA de triagem (ex: resposta em 48h úteis)
- Escalada clara: quem decide o que fazer com emails ambíguos?

#### Transportes (sobrecarga crescente)
- Sistema de pedido estruturado (não por WhatsApp)
- Base de dados de voluntários disponíveis para transportes com disponibilidade horária
- Processo de confirmação e follow-up
- Análise do volume atual: quantas consultas por semana? Quantos voluntários de transporte disponíveis?

#### Stock (Google Sheets desatualizado)
- Processo de atualização obrigatório pós-entrega
- Alertas automáticos de stock mínimo
- Responsável de reposição semanal com checklist
- Registo de validades de medicação

### 4. Governança do backoffice
- Criação de um grupo de coordenação de backoffice (reunião mensal / call mensal)
- Dashboard de estado de cada equipa (semáforo simples)
- Processo de escalada quando uma equipa fica sem capacidade
- Regra clara sobre o que precisa de aprovação da presidente vs. o que não precisa

### 5. Documentação de processos
- Cada equipa deve ter um "runbook" — documento com os passos do seu processo principal
- O runbook garante continuidade quando alguém sai
- Formato simples: quem faz o quê, quando, com que ferramenta

## Output esperado

1. **Mapa de prioridade de equipas** — tabela com criticidade, estado, urgência de reforço
2. **Plano de reforço imediato** — ações para as 3 equipas mais críticas
3. **Proposta de governança** — estrutura de coordenação do backoffice
4. **Template de runbook** — formato para documentar processos de cada equipa
5. **Roadmap de 6 meses** — o que fazer em que ordem

Argumentos adicionais passados: $ARGUMENTS
