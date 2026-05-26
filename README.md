# Painel de Gestão de Condomínios

Aplicação fullstack desenvolvida com React + TypeScript no frontend e Node.js + TypeScript no backend.

O sistema consome uma API externa no backend, transforma os dados para o modelo de condomínio e disponibiliza essas informações para o frontend através do endpoint `/api/condominiums`.

---

# Estrutura do projeto

```txt
condominios/
├── backend/
│   ├── src/
│   │   ├── controller/
│   │   ├── routes/
│   │   ├── services/
│   │   ├── app.ts
│   │   └── server.ts
│   ├── package.json
│   └── tsconfig.json
│
├── frontend/
│   ├── src/
│   │   ├── services/
│   │   ├── types/
│   │   ├── App.tsx
│   │   ├── App.css
│   │   └── main.tsx
│   ├── package.json
│   └── tsconfig.json
```

---

# Pré-requisitos
Antes de executar o projeto, é necessário ter instalado na máquina:

- Node.js
- npm
- Git

---

# 1) Clonar o repositório

Execute o comando abaixo no terminal:

```bash
git clone https://github.com/FelipeMatrone/teste_euro.git
```

Após clonar o projeto, entre na pasta:

```bash
cd teste_euro
```

---

# 2) Executar o backend

Entrar na pasta backend

## 2.1) Instalar as dependências

```bash
npm install
```

## 2.2) Executar o servidor backend

```bash
npm run dev
```

Se tudo estiver correto, o terminal exibirá:

```txt
Servidor rodando na porta 3333
```
---

# 3) Executar o frontend

Abra um novo terminal.

Entrar na pasta frontend

## 3.1) Instalar as dependências

```bash
npm install
```

## 3.2) Executar o frontend

```bash
npm run dev
```

O terminal mostrará um endereço parecido com:

```txt
http://localhost:5173
```

Abra esse endereço no navegador para visualizar a aplicação.

---

# Observação

O backend e o frontend precisam estar executando ao mesmo tempo.

Utilize dois terminais:

```txt
Terminal 1 → backend → npm run dev
Terminal 2 → frontend → npm run dev
```
