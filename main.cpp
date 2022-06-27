class Foo
{
public:
    Foo(int j) { i = new int[j]; }
    ~Foo() { delete i; }
    //�������� ����������� � �������� �����������
private://�������� �� protected
    int* i;
};

class Bar : Foo // Foo �������� �� public Foo
{
public:
    Bar(int j) { i = new char[j]; }// ��������  : Foo(j)
    ~Bar() { delete i; }// �������� virtual
    // delete �������� �� delete[]
private://�������� �� protected
    char* i;//�������� �� int* i
};

void main() //void �������� �� int
{
    Foo* f = new Foo(100);
    Foo* b = new Bar(200);
    *f = *b;
    delete f;
    delete b;
}

