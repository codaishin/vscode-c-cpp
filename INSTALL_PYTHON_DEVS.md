
# Install Python extension

Install python extension in VSCode


# Install Python

```console
$ sudo pacman -S python
$ python --version
Python 3.9.7
```


# Settings

Copy the python settings from the provided `.vscode/settings.json` into
your workspace `.vscode/settings.json`


# Install dependencies


## Option 1: In Environemnt (recommended)

The name of the environment will be ".env" in this example.
But you can name it whatever you want. If you do, you neet to change
`python.defaultInterpreterPath` in `.vscode/settings.json`

This approach is used to install dependencies for a given python program
inside an environment. The python program should then always be run from
within this environment.

This enables us to use different environments for different programs. This is
especially helpful when different programs have conflicting dependencies.


### Install environment
```console
$ python -m venv .env
```


### Enter environment
```console
$ source .env/bin/activate
```


### Install dependencies

```console
(.env) $ pip install pylint black mypy
```


### Test with test script

Write in a file `main.py` the following script:

```python
"""my module"""


def main() ->None:
	"""my main"""

	print(
		'Hello, World!'
	)


if __name__ ==   '__main__':
	main()
```

It should be converted to:
```python
"""my module"""


def main() -> None:
    """my main"""

    print("Hello, World!")


if __name__ == "__main__":
    main()
```

Run the file with:
```console
(.env) $ python ./main.py
```

The folling statements should cause a series of problems on save:
```python
def sum(a: int, b: int) -> int:
    return "I tricked you"
```

problems:
```
Redefining built-in 'sum' pylint(redefined-builtin)
Argument name "a" doesn't conform to snake_case naming style pylint(invalid-name)
Argument name "b" doesn't conform to snake_case naming style pylint(invalid-name)
Missing function or method docstring pylint(missing-function-docstring)
Unused argument 'a' pylint(unused-argument)
Unused argument 'b' pylint(unused-argument)
Incompatible return value type (got "str", expected "int") mypy(error)
```


### Leave environment

```console
(.env) $ deactivate
```


## Option 2: Globally (NOT recommended)

This approach is simpler, but not recommended.
If you choose this approach you need to change `python.defaultInterpreterPath`
in `python.defaultInterpreterPath` to you `/usr/bin/python`.


### Install dependencies

```console
$ python -m pip install pylint black mypy
```

### Test with test script

Write in a file `main.py` the following script:

```python
"""my module"""


def main() ->None:
	"""my main"""

	print(
		'Hello, World!'
	)


if __name__ ==   '__main__':
	main()
```

It should be converted to:
```python
"""my module"""


def main() -> None:
    """my main"""

    print("Hello, World!")


if __name__ == "__main__":
    main()
```

Run the file with:
```console
$ python ./main.py
```

The folling statements should cause a series of problems on save:
```python
def sum(a: int, b: int) -> int:
    return "I tricked you"
```

problems:
```
Redefining built-in 'sum' pylint(redefined-builtin)
Argument name "a" doesn't conform to snake_case naming style pylint(invalid-name)
Argument name "b" doesn't conform to snake_case naming style pylint(invalid-name)
Missing function or method docstring pylint(missing-function-docstring)
Unused argument 'a' pylint(unused-argument)
Unused argument 'b' pylint(unused-argument)
Incompatible return value type (got "str", expected "int") mypy(error)
```
