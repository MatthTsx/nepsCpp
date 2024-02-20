class Fracao:
    def __init__(self, numerador, denominador):
        self.numerador = numerador
        self.denominador = denominador
    def __mul__(self, fracao):
        self.numerador *= fracao.numerador
        self.denominador *= fracao.denominador
        return self
    def __truediv__(self, fracao):
        self.numerador *= fracao.denominador
        self.denominador *= fracao.numerador
        return self


if __name__ == "__main__":

    a_numerador, a_denominador = map(int, input().split())
    b_numerador, b_denominador = map(int, input().split())
    op = input()

    a = Fracao(a_numerador, a_denominador)
    b = Fracao(b_numerador, b_denominador)

    if op == "M":
        c = a * b
    else:
        c = a / b

    print(c.numerador, c.denominador)
