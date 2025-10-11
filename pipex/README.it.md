<p align="right">
  🌐 Disponibile in:
  <a href="./README.md"><b>English</b></a> | <a href="./README.it.md"><b>Italiano</b></a>
</p>

# 🔧 pipex

## 📝 Descrizione
Replica in C della pipeline shell `cmd1 | cmd2` con redirezioni da/verso file. Gestione di `fork`, `pipe`, `dup2`, `execve`, con attenzione a permessi, PATH e messaggi d’errore.

## ⚙️ Caratteristiche
- Esecuzione di due o più comandi collegati da pipe (bonus: multi-pipe, here_doc)
- Redirezioni `< infile` e `> outfile`
- Ricerca in `$PATH`, controllo permessi, error handling

## 🧠 Competenze acquisite
- Programmazione di sistema su Unix (processi, file descriptor)
- Gestione errori e risorse (chiusura fd, `perror`)
- Parsing argomenti e robustezza del flusso

## 🛠️ Compilazione
```bash
make
./pipex infile "cmd1" "cmd2" outfile
