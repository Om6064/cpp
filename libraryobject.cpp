#include <iostream>
#include <vector>
using namespace std;

class Book{
    private:
        int BookId;
        string title;
        string author;

    public :
        Book(int BookId,string title,string author){
            this->BookId = BookId;
            this->title = title;
            this->author = author;
        }

        void GetBookDetails(){
            cout << "----------------------"<<endl;
            cout << "Book Id : "<<this->BookId<<endl;
            cout << "Book Title : "<<this->title<<endl;
            cout << "Book author : "<<this->author<<endl;
            cout << "----------------------"<<endl;
        }
        int GetBookId(){
            return BookId;
        }
};

int main(){
    vector<Book> arr;
    int choice;
    
    do
    {
        cout << "Enter 1 for Add Book : "<<endl;
        cout << "Enter 2 for Remove Book : "<<endl;
        cout << "Enter 3 for Show All Book : "<<endl;
        cout << "Enter 4 for Search Book : "<<endl;
        cout << "Enter 5 for Exit : "<<endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            {
                int id;
                string title,author;

                cout << "Enter Book Id : ";
                cin >> id;

                cin.ignore();

                cout << "Enter Book title : ";
                getline(cin,title);

                cout << "Enter Book Author : ";
                getline(cin,author);

                arr.push_back(Book(id,title,author));

                break;
            }
        case 2:
            {
                int id;
                cout << "Enter Id For Remove : ";
                cin >> id;

                bool isFound  = false;

                for(auto i = arr.begin();i != arr.end();i++)
                {
                  if (i->GetBookId() == id)
                  {
                    isFound = true;
                    arr.erase(i);
                    cout << "Book Removed SuccesFully...."<<endl;
                    break;
                  }
                   
                }
                if (isFound == false)
                {
                    cout << "Book Is Not Found!..."<<endl;
                }
                
                break;
            }
            case 3:
                for(auto &val : arr){
                    val.GetBookDetails();
                }
                break;
            case 4:
                 {
                int id;
                cout << "Enter Id For Search : ";
                cin >> id;

                bool isFound  = false;

                for(auto i = arr.begin();i != arr.end();i++)
                {
                  if (i->GetBookId() == id)
                  {
                    isFound = true;
                    i->GetBookDetails();
                    cout << "Book Searched SuccesFully....";
                    break;
                  }
                   
                }
                if (isFound == false)
                {
                    cout << "Book Is Not Found!...";
                }
                
                break;
            }
                
            case 5:
            cout << "Thank You Visit Again...!";
                break;
            
        
        default:
        cout << "Invaild Input...";
            break;
        }
    } while (choice != 5);
    

    return 0;
}