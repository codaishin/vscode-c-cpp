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


# 3 Power

Program mit exponent funktionalität

Code Ausgangspunkt:
```c
int main(int argc, char* argv[]) {
	int base = str_to_int(argv[1]);	 // nur erste ziffer zu int
	int power = str_to_int(argv[2]);
	int result = math_power(base, power);
	printf("result: %i\n", result);
	return 0;
}
```

Beispie:
```console
> ./a.out 2 3
> 8
```

Optional:
- Zahlen mit mehr als einer Ziffer
- Fehlermeldungen bei fehlerhaften Eingaben
  (einschließlich negatover exponent)
- Negative Exponenten sind keine Fehler mehr,
  sondern können genutzt werden


# 3 str_cmp

String compare function.

Code-Ausgangspunkt:
```c
int str_cmp(char[] a, char[] b) { ... }
```

Rückgaben:
- `0`: strings waren gleich
- `1`: strings waren ungleich
- `2`: strings waren ungleich lang

Beispiel:
```console
> ./a.out hello world
> "hello" und "world" sind unterschiedlich

> ./a.out hello world!
> "hello" und "world!" sind unterschiedlich lang

> ./a.out hello hello
> "hello" und "hello" sind gleich
```


# 4 print_nums

Print funktion, die int[] printed.

Code-Ausgangspunkt:
```c
void int print_nums(int[] numbers) { ... }
```

Rückgaben:
- Keine

Beispiel:
```console
> ./a.out 2 3 10
> [2, 3, 10]
```

Optional:
- `void int print_nums(int[] numbers, char delim[]) { ... }`:
  `delim` ist ein delimiter, den die Funktion nutzt, um Zahlen
	beim printen voneinader abzugrenzen


# 5 mutliply

Multiply funktion.

Code-Ausgangspunkt:
```c
int mutliply(int[] numbers) { ... }
```

Rückgaben:
- Ergebnis der multiplizierten Zahlen

Beispiel:
```console
> ./a.out 2 3 10
> 30
```
