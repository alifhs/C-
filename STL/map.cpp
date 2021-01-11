#include <iostream>
#include <map>

using namespace std;

int main ()


{
 for (auto itr = mp.find(3); itr != mp.end(); itr++) {
       
        cout << itr->first << '\t' << itr->second << '\n';
    }
 

    map<string, string> address_book;
for ( auto address_entry : address_book )
{
            cout  << address_entry.first << " < " << address_entry.second << ">" << endl;
}
    map<int,int> m{{1,2} , {2,3} , {3,4} };
    
    m.insert( pair<int,int> (4,5));
    /* inserts a new entry of key = 4 and value = 5 in map m */
    
    /* make_pair() can also be used for creating a pair */
    m.insert( make_pair(5, 6));
    /* inserts a new entry of key = 5 and value = 6 */
    
    
    map::iterator i , j;
    i = m.find(2);    // points to entry having key =2
    j = m.find(5);    // points to entry having key =5
    
    map<int,int> new_m;
    
    new_m.insert(i,j);
     /* insert all the entries which are pointed 
     by iterator i to iterator j*/ 
    
    m.insert( make_pair(3,6));  
     // do not insert the pair as map m already contain key = 3 */ 
    
    m.insert_or_assign( make_pair(3,6));  // assign value = 6 to key =3   
}

//

 map<int,string> m{ {1,”nikhilesh”} , {2,”shrikant”} , {3,”ashish”} };
    
    
    cout << m.at(1) ;  // prints value associated with key 1 ,i.e nikhilesh
    cout << m.at(2) ;  // prints value associated with key 2 ,i.e shrikant
    
    /* note that the parameters in the above at() are the keys not the index */
    
    cout << m[3] ; // prints value associated with key 3 , i.e ashish
    
    
    
    m.at(1) = "vikas";   // changes the value associated with key 1 to vikas
    m[2] = "navneet";   // changes the value associated with key 2 to navneet
    
    m[4] = "doodrah";   
    /* since there is no key with value 4 in the map, 
        it insert a key-value pair in map with key=4 and value = doodrah */
    
    m.at(5) = "umeshwa";


///

map<int,int> m{ {1,2} , {2,3} , {3,4} };
    /* creates a map m with keys 1,2,3 and 
        their corresponding values 2,3,4 */  
    
    map<string,int> map1; 
    /*  creates a map with keys of type character and 
      values of type integer */
    
    map1["abc"]=100;    // inserts key = "abc" with value = 100
    map1["b"]=200;      // inserts key = "b" with value = 200
    map1["c"]=300;      // inserts key = "c" with value = 300
    map1["def"]=400;    // inserts key = "def" with value = 400
    
    map<char,int> map2 (map1.begin(), map1.end());
    /* creates a map map2 which have entries copied 
        from map1.begin() to map1.end() */ 
    
    map<char,int> map3 (m);