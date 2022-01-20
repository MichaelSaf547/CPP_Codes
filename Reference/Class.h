/*
// Here i am using member initializer list to pass a reference to
// the class cons. If the we don't give the cons the reference,
// we would get a compilation error as we can not define a reference 
// without initializing it.
*/


class shape
{
    private:
        int & h;
        int & m;

    public:
        //shape(); 
        /*
        // shape default cons is wrong here as the cons must get two
        // references. I just included it to enables the checking of the error.
        */
        shape(int & temp1, int & temp2);

        void Func1(void);

        ~shape(void);
        
};