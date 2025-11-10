#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
  string str = "Khadijah Irfan ";
 
  // size() function
  cout << "Size: " << str.size() << endl;
 
  // length() function
  cout << "Length: " << str.length() << endl;
 
  // capacity() function
  cout << "Capacity: " << str.capacity() << endl;
 
  // max_size() function
  cout << "Max Size: " << str.max_size() << endl;
 
  // empty() function
  cout << "Empty: " << (str.empty())  << endl;
  if(str.empty())
  {
   cout<<"yes";
  }
  else
  {
   cout<<"no";
  }
  // substr() function
  string substr = str.substr(4, 5);
  cout << "Substring: " << substr << endl;
 
  // at() function
  cout << "Character at index 4: " << str.at(4) << endl;
  
  // find() function
  size_t found = str.find("Hello");
  if (found != string::npos) 
  {
    cout << "Found 'Hello' at index: " << found << endl;
  } 
  else 
  {
    cout << "'Hello' not found" << endl;
  }
  
  // find_first_of() function
  found = str.find_first_of("o");
  if (found != string::npos)
  {
    cout << "Found first 'o' at index: " << found << endl;
  } 
  else 
  {
    cout << "No 'o' found" << endl;
  }
  
  // find_last_of() function
  found = str.find_last_of("o");
  if (found != string::npos) 
  {
    cout << "Found last 'o' at index: " << found << endl;
  } 
  else 
  {
    cout << "No 'o' found" << endl;
  }
 
  // [] operator function
  cout << "Character at index 0: " << str[0] << endl;

  // isalpha() function
  cout << "isalpha() example:" << endl;
  for (char c : str) 
  {
    cout << c << ": " << (isalpha(c)) << endl;
    
  if(isalpha(c))
  {
   cout<<"yes";
  }
  else
  {
   cout<<"no";
  }
   }

  // isalnum() function
  cout << "\nisalnum() example:" << endl;
  for (char c : str)
 {
    cout << c << ": " << (isalnum(c)) << endl;
    
  if(isalnum(c))
  {
   cout<<"yes";
  }
  else
  {
   cout<<"no";
  }
    }

  // isdigit() function
  cout << "\nisdigit() example:" << endl;
  for (char c : str) 
  {
    cout << c << ": " << (isdigit(c)) << endl;
  if(isdigit(c))
  {
   cout<<"yes";
  }
  else
  {
   cout<<"no";
  }
   }

  // islower() function
  cout << "\nislower() example:" << endl;
  for (char c : str) 
  {
    cout << c << ": " << (islower(c)) << endl;
  if(islower(c))
  {
   cout<<"yes";
  }
  else
  {
   cout<<"no";
  } 
    }

  // isprint() function
  cout << "\nisprint() example:" << endl;
  for (char c : str) 
  {
    cout << c << ": " << (isprint(c)) << endl;
   if(isprint (c))
  {
   cout<<"yes";
   }
  else  
  { 
   cout<<"no";
  }
     }

  // ispunct()
  cout << "\nispunct() example:" << endl;
  for (char c : str)
  {
    cout << c << ": " << (ispunct(c)) << endl;
  if(ispunct(c)) 
  {
   cout<<"yes";
  } 
  else
  {
   cout<<"no";
  }
    
    }

  // isupper() function
  cout << "\nisupper() example:" << endl;
  for (char c : str)
  {
    cout << c << ": " << (isupper(c)) << endl;
  if(isupper(c))
  { 
   cout<<"yes";
  }
  else
  {
   cout<<"no";
  }
    
    }

  // isspace() function
  cout << "\nisspace() example:" << endl;
  for (char c : str) 
  {
    cout << c << ": " << (isspace(c)) << endl;
  if(isspace(c))
  {
   cout<<"yes";
  }
  else
  {
   cout<<"no";
  }
    }

  // toupper() function
  cout << "\ntoupper() example:" << endl;
  for (char c : str)
  {
    cout << c << ": " << (islower(c)) << endl;
  if(toupper(c))
  {
   cout<<"yes";
  }
  else
  {
   cout<<" c";
  }


 }

  // tolower() function
  cout << "\ntolower() example:" << endl;
  for (char c : str) 
  {
    cout << c << ": " << (isupper(c) ? tolower(c) : c) << endl;
  }

  return 0;
}