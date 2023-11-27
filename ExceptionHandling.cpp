#include <iostream>
int main() 
{    try 
{        
// Attempt to transfer money  
      int amount = 1000;        
if (amount > 500) 
{
            throw "InsufficientFundsException";        
}        
// Continue with the transfer if no exception is thrown        
std::cout << "Money transferred successfully." << std::endl;   
 
} 
catch (const char* exception) 
{        
// Catch and handle the exception        
std::cerr << "Exception caught: " << exception << std::endl;    
}    
return 0;
}
