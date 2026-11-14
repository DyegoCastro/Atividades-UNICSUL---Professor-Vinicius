
const inputNome = document.getElementById('input-nome');
const selectArea = document.getElementById('select-area');
const btnGerar = document.getElementById('btn-gerar');
const btnTema = document.getElementById('btn-tema');
const areaResultado = document.getElementById('area-resultado');


btnTema.addEventListener('click', function() {
    document.body.classList.toggle('tema-escuro');
});

btnGerar.addEventListener('click', function() {
    const nome = inputNome.value.trim();
    const areaEscolhida = selectArea.value;

    if (nome === "") {
        areaResultado.textContent = "Por favor, digite o seu nome antes de gerar a orientação!";
        areaResultado.classList.add('erro'); 
        return; 
    }

    areaResultado.classList.remove('erro');

   let mensagemOrientacao = " ";

   switch (areaEscolhida) {
        case "HTML":
            mensagemOrientacao = `Olá, ${nome}! Continue praticando a estruturação semântica, formulários e acessibilidade com tags HTML.`;
            break;
        case "CSS":
            mensagemOrientacao = `Olá, ${nome}! Continue praticando cores, espaçamentos, Flexbox, Grid e responsividade.`;
            break;
        case "JavaScript":
            mensagemOrientacao = `Olá, ${nome}! Continue praticando lógica de programação, manipulação do DOM e eventos.`;
            break;
        default:
            mensagemOrientacao = `Olá, ${nome}! Escolha uma área válida para receber sua orientação.`;
    }
    areaResultado.textContent=mensagemOrientacao;
});