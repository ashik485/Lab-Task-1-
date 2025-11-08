#include<iostream>

using namespace std ;

class Customer
{
private :
    string fname ;
    string lname ;
    string db ;
    string num ;
    string country ;
public :
    void setinfo (string Fname, string Lname, string DB, string NUM, string
                  Country)
    {
        fname = Fname ;
        lname = Lname ;
        db = DB ;
        num = NUM ;
        country = Country ;
    }
    void getinfo ()
    {
        cout<<"First Name : "<<fname <<endl ;
        cout<<"Last Name : "<<lname <<endl;
        cout<<"Date of Birth : "<<db<<endl;
        cout<<"Phone Number : "<<num<<endl;
        cout<<"Country : "<<country<<endl<<endl<<endl;
    }
};
int main()
{
    Customer no1 ;
    no1.setinfo("ASHIKUR", "RAHMAN", "14-08-2005", "017262561",
                "Bangladesh");
    no1.getinfo();
    Customer no2 ;
    no2.setinfo("Arif", "Islam", "9-11-2004", "01861265264", "Bangladesh");
    no2.getinfo();
    return 0 ;
}
