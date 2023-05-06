```mermaid
flowchart TD;
A(start) --> B[/float
fJumlahBeli, fHarga, fDiskon/];
B --> C[/String sBonus/];
C --> D[print Harga Barang];
D --> E[/input Jumlah Barang/];
E --> F[print Jumlah Belinya];
F --> G[/input Jumlah Belinya/];
G --> H[Jumlah Beli > 15];
H --ya--> I[/bonus payung/];
I --> J[/diskon 0.15 x harga/];
H --tidak--> K[tidak ada bonus/];
J --> 0(finish)
K --> 0
```