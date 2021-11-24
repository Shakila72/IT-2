#include <iostream> 

using namespace std; 

class Sand 

{ 

public: 

Sand() 

        { 

            cout << "Sand "; 

        } 

        ~Sand() 

        { 

            cout << "~Sand "; 

        } 

}; 

class Rock 

{ 

    public: Rock() 

        { 

            cout << "Rock "; 

        } 

        ~Rock() 

        { 

            cout << "~Rock "; 

        } 

}; 

class Hill: public Rock 

    { 

        Rock data_; 

        public:
 Hill() 

            { 

                cout << "Hill " << endl; 

            } 

            ~Hill() 

            { 

                cout << "~Hill "; 

            } 

    }; 

  

int main() 

{ 

Rock r;
    Hill h; 

    return 0; 

}

