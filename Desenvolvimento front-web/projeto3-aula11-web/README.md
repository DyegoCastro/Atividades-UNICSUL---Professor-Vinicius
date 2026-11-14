# Projeto 3: Painel Interativo com JavaScript

Painel interativo desenvolvido como parte da atividade prática da disciplina de Desenvolvimento Front-End para Web. O objetivo principal é aplicar os fundamentos do JavaScript, integrando-o à estrutura HTML e ao design CSS para criar uma experiência dinâmica e acessível.

---

## 👥 Integrantes do Grupo
* **Nome:** Dyego Luiz Paiva de Castro — RGM: 49442708
---

## 💻 Comandos e Recursos de JavaScript Utilizados
O projeto faz uso dos seguintes recursos fundamentais de JavaScript exigidos pela atividade:

1. **`document.getElementById()`**: Utilizado para localizar e capturar os elementos do HTML (inputs, botões e a área de resultado) através de seus identificadores únicos[cite: 2, 3].
2. **`const` e `let`**: Declaração de variáveis e constantes para armazenar elementos da DOM e os dados inseridos pelo usuário[cite: 2, 3].
3. **`addEventListener('click', ...)`**: Adiciona ouvintes de eventos para capturar o momento exato em que o usuário clica nos botões de gerar orientação e de alterar o tema[cite: 2, 3].
4. **`.value` e `.trim()`**: Utilizados para ler o conteúdo digitado no campo de nome e remover espaços em branco desnecessários antes de validar a entrada[cite: 2, 3].
5. **Estrutura condicional (`if/else` e `switch`)**: Valida se o campo de nome está vazio (exibindo um alerta caso esteja) e direciona a mensagem personalizada de acordo com a tecnologia escolhida (HTML, CSS ou JavaScript)[cite: 2, 3].
6. **Template Strings (`` `${nome}` ``)**: Inserem o nome do visitante de forma dinâmica dentro do texto de orientação de maneira limpa e legível[cite: 2, 3].
7. **`.textContent`**: Altera dinamicamente o texto exibido na caixa de resultado da página sem precisar recarregá-la[cite: 2, 3].
8. **`.classList.toggle()`**: Alterna a classe `.tema-escuro` no elemento `<body>` para mudar a paleta de cores entre o modo claro e o modo escuro[cite: 2, 3].

---

## 🚀 Como Executar o Projeto
1. Baixe ou clone o repositório contendo a pasta do projeto.
2. Certifique-se de que a estrutura de pastas está organizada da seguinte forma:
   ```text
   projeto3_javascript/
   ├── index.html
   ├── README.md
   ├── css/
   │   └── estilo.css
   └── js/
       └── script.js