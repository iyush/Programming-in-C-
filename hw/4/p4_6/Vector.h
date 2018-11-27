/*
CH08-320142
Vector.h
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/
class Vector{
    private:
        double *vec_array;
        int size;
    public:
        //Constructors
        Vector();
        Vector(int nsize);

        //Copy Constructor
        Vector(const Vector&);
        
        //Destructor
        ~Vector();

        //setter
        void setAtPos(int, double);
        void setSize(int);

        //getter
        double getAt(int) const; //get a value at given index.

        
        //computations
        double norm() const;
        Vector sum(const Vector&);
        Vector difference(const Vector&);
        double scalar(const Vector&);

        //service
        void print();
};