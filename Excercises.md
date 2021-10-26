Für Aufgaben 1 und 2:
Verwendung von Funktionen optional, kann auch
erstmal alles noch in der `main` gemacht werden.

# 1 Sort numbers

Sortieren einer beliebigen Anzahl an Integers.

z.B.:
```console
> ./a.out 4 -3 44 11
> Sorted: -3 4 11 44
```


# 2 Validator

Validieren eines strings.

z.B.:
```console
> ./a.out --mail myName@prov.gov
> Valid!

> ./a.out --mail myNameprov.gov@megaman
> Invalid!

> ./a.out --ipv4 192.168.41.3
> Valid!

> ./a.out --ipv4 abc.168::41.3
> Invalid!
```

Strategie:
- ersmtal nur eine validierung
- dann parameter check für Validierungsart
- dann andere Validierung

Optional:
- änderbare Reihenfolge
- andere Validierungen
