#include <iostream>
#include <vector>

using namespace std;

template <typename T>

/// Pentru implementarea clasei Stack, voi folosi din STL un 'vector', care are definite functiile urmatoare:
/// - size_type size() - returneaza numarul de elemente din vector
/// - bool empty() - testeaza daca vectorul este gol
/// - void push_back(const value_type& val) - adauga element la sfarsitul vectorului
/// - void pop_back() - elimina ultimul element din vector
/// - const_reference back() const - returneaza o referinta la ultimul element din vector
/// - const_reference at(size_type n) const - returneaza o referinta la elementul de pe pozitia n

class Stack
{
    private:
        vector<T> vec;

    public:

        bool Empty()
        {
            return vec.empty();
        }

        void push(const T &item)
        {
            vec.push_back(item);
        }

        void pop()
        {
            if ( vec.empty() == 0 )
                vec.pop_back();
            else
                cout << "\nStiva este goala!";
        }

        T& top()
        {
            if ( vec.empty() == 0 )
                return vec.back();
            else
                cout << "\nStiva este goala!";
        }

        void afisare()
        {
            int i;
            for(i = vec.size() - 1; i>=0; i--)
                cout << vec.at(i) << endl;
        }
};

int main()
{
    /// Stiva cu elemente de tip char*
    cout << "Creez o stiva pentru elemente de tip char*\n";
    Stack<char*> stiva1;

    cout << "Testez functia Empty()\n";
    if( stiva1.Empty() == 1)
        cout << "Stiva este goala!";
    else
        cout << "Stiva nu este goala!";

    cout << "\nAdaug in stiva elementele: pizza, este, buna, !\n";
    stiva1.push("pizza");
    stiva1.push("este");
    stiva1.push("buna");
    stiva1.push("!");
    stiva1.afisare();

    cout << "\nElementul din varful stivei este: ";
    cout << stiva1.top();
    cout << "\nElimin ultimul element din stiva:\n";
    stiva1.pop();
    stiva1.afisare();



    /// Stiva cu elemente de tip int
    cout << "\n\nCreez o stiva pentru elemente de tip int\n";
    Stack<int> stiva2;

    cout << "Testez functia Empty()\n";
    if( stiva2.Empty() == 1)
        cout << "Stiva este goala!";
    else
        cout << "Stiva nu este goala!";

    cout << "\nAdaug in stiva elementele: 7, 3, 15, 1\n";
    stiva2.push(7);
    stiva2.push(3);
    stiva2.push(15);
    stiva2.push(1);
    stiva2.afisare();
    cout << "\nElementul din varful stivei este: ";
    cout << stiva2.top();
    cout << "\nElimin ultimul element din stiva:\n";
    stiva2.pop();
    stiva2.afisare();

    return 0;
}
