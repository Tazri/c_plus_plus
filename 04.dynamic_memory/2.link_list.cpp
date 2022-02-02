# include <iostream>

using namespace std;

// create link list

// class List_Element
class List_Element{
    int value;

    public : 
        List_Element(int _value = 0){
            value = _value;
        }
        int get(void){
            return value;
        }
        void set(int _value = 0){
            value = _value;
        }
        List_Element *Next_Element;
};

//class List
class List{
    List_Element * Head_Element;
    List_Element * Tail_Element;
    List_Element * New_Element;

    public : 
        List(void){
            Head_Element = NULL;
            Tail_Element = NULL;
            New_Element = NULL;
        }

        void add(int _item){
            // create element
            New_Element = new List_Element(_item);
            New_Element->Next_Element = NULL;

            // set tail next element if tail not exist
            if(Head_Element != NULL){
                Tail_Element->Next_Element = New_Element;
            }else{
                Head_Element = New_Element;
            }
            Tail_Element = New_Element;
        }

        void show(void){
            // show the all element
            List_Element *select_element = Head_Element;

            while(select_element != NULL){
                cout << select_element->get() << "<-";
                select_element = select_element->Next_Element;
            }
            cout << "NULL" << endl;
        }
};

int main(void){
    // create list
    List my_list;
    my_list.add(32);
    my_list.add(21);
    my_list.add(22);
    my_list.add(53);

    my_list.show();
}