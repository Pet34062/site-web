*{
    margin: 0;
    padding: 0;
    outline: none;
    border: none;
    box-sizing: border-box;
}



body {
    font-family: Arial, sans-serif;
}

/* Estilo para o cabeçalho */
header {
    color: black;
    padding: 5px 0;
    display: flex;
    justify-content: space-between;
    align-items: baseline;
    height: 80px;
}



nav ul {
    list-style-type: none;
    padding: 0;
    transform: translateY(-80%);
}

nav ul li {
    display: inline;
    margin-right: 10px;
}

nav ul li a {
    color: black;
    text-decoration: none;
    float: right;
    text-align: right;
    padding: 5px;
    font-size: 20px;
    font-family: Arial, sans-serif;
}

.secao_botao {
    line-height: 100px;
}

/* Estilo para a seção de perfil */

header h1 {
    margin-top: 8px; 
}

.nome {
    background-color: #e7e5e5; /* Cor do fundo */
    border: 1px solid #ccc; /* Borda */
    padding: 2px 30px; /* Espaçamento interno */
}

.perfil {
    background-color: #f9f9f9;
    border: 2px solid #ccc;
    border-radius: 10px;
    padding: 10px;
}

.perfil-img img {
    float: left;
    margin-right: 10px;
    width: 265px;
    height: 265px;
}



/* Estilo para a linha da seção */
.linha-secao {
    border: none;
    border-top: 1px solid black;
    width: 100%;
    position: absolute;
    top: 0;
    left: 0;
}

/* Estilo para os botoes */
.botoes-contato {
    text-align: center;
}

.botoes-contato .bi {
    font-size: 28px; /* Tamanho personalizado */
    color: black; /* Cor do ícone */
    transition: color 0.3s ease; /* Transição de cor */
}

.botoes-contato .bi:hover {
  color: #007bff; /* Cor do ícone ao passar o mouse */
}

/* Estilo para o botão secundário */
.btn.btn-secondary {
    background-color: cornflowerblue;
}

/* Estilo para seção 2, os cards de repositórios */
.secao2{
    margin-top: 10px;
    padding: 20px;
}

.secao2 .card{
    margin-bottom: 10px;
}

.card-img-1{
    width: 100%;
    height: 200px;
    object-fit: cover;
}
.card-img-2{
    width: 100%;
    height: 200px;
    object-fit: cover;
}

.card-img-3{
    width: 100%;
    height: 200px;
    object-fit: cover;
}


/* Estilo para seção 3, slides/conteudo sugerido */

.img-slide1{
    width: 100%;
}

.img-slide2{
    width: 100%;
}

.img-slide3{
    width: 100%;
}

.img-slide4{
    width: 100%;
}

.img-slide5{
    width: 100%;
}


/* Estilo para seção 4, grade colegas de curso */

.secao4{
    margin-top: 10px;
    padding: 20px;
}

.colega {
    text-align: center;
}

.colega a{
   text-decoration: none;
}

.colega img {
    width: 100%;
    border-radius: 8px;
    margin-bottom: 10px;
}

.colega-nome {
    font-weight: bold;
    font-size: 1.2rem;
}


/* Estilo para o Rodapé */
.rodape {
    background-color: #f0f0f0;
    padding: 20px 0;
    text-align: center;
}

.responsavel {
    font-weight: bold;
}

/* Estilo para os links no Rodapé */
.rodape a {
    color: #333;
    text-decoration: none;
    transition: color 0.3s ease;
}

.rodape a:hover {
    color: #007bff;
}

/* Estilo para o repo.html */

.secao1 a {
    text-decoration: none; /* Remove a decoração dos links */
    color: inherit;
    transition: color 0.3s ease; /* Transição de cor ao passar o mouse */
}
.secao1 a:hover {
    text-decoration: none; /* Remove a decoração dos links */
    color: #007bff; /* Cor azul ao passar o mouse */
}

.card-title {
    font-size: 20px;
}

#card-title {
    font-size: 20px;
    font-weight: bold;
    color: #007bff;
}

.card-text {
    font-size: 18px;
    line-height: 1.6;
}

.titulo{
    color: #007bff;
}

.tag {
    background-color: #007bff; /* Cor azul */
    color: white; /* Texto em branco para contrastar */
    padding: 2px 6px; /* Espaçamento interno */
    border-radius: 8px; /* Borda arredondada */
    margin-right: 4px; /* Margem à direita para separar as tags */
  }
  


 /* Estilos para telas menores */
@media (max-width: 768px) {
    header {
        padding: 5px 5px; /* Espaçamento interno */
        height: 100px; /* Altura */
    }

    nav ul li a {
        padding: 5px;
        font-size: 10px;
    }
    
    .secao_botao {
        float: right;
        padding-top: 70px;
    }

    .nome {
        font-size: 13px;
        padding: 3px 5px;
    }

    .perfil-img img {
        width: 100px;
        height: 100px;
    }

    .secao_botao {
        justify-content: center;
    }

    .secao_botao li {
        margin-right: 0;
        margin-bottom: 10px;
    }

    .perfil {
        padding: 15px;
    }

    .botoes-contato {
        margin-top: 10px;
    }

    .botoes-contato .bi {
        font-size: 24px;
    }

    .tag {
        padding: 0px 8px;
        margin-right: 2px;
    }
}