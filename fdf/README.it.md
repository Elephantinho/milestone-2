<p align="right">
  🌐 Disponibile in:
  <a href="./README.md"><b>English</b></a> | <a href="./README.it.md"><b>Italiano</b></a>
</p>

# 🗺️ fdf

## 📝 Descrizione
Visualizzatore **wireframe 3D** in C che proietta una mappa di quote (file `.fdf`) in **isometria** usando **MiniLibX**. Supporta zoom, traslazioni e rotazioni.

## ⚙️ Caratteristiche
- Proiezione isometrica (e seconda proiezione opzionale)
- Input da file mappa, parsing robusto
- Interazioni: zoom, pan, rotazioni, colori
- Finestra grafica con MiniLibX (Linux)

## 🧠 Competenze acquisite
- Matematica per grafica 2D/3D (isometria, trasformazioni)
- Event handling e loop grafico con MiniLibX
- Strutture dati per rappresentare griglie e segmenti

## 🛠️ Compilazione
```bash
make
./fdf maps/42.fdf
