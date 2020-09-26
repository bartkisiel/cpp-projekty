#include <iostream> 
#include <string>
using namespace std; 


string compression(string &str){
    string result = "";
    char prev = str[0];
    int counter = 1;
    
    for(int i = 1; i < str.length(); i++){
        if(str[i] == prev){
            counter++;
        }
        else {
            result = result + prev + to_string(counter);
            prev = str[i];
            counter = 1;
        }
    }
    result = result + prev + to_string(counter);
    
    if(result.empty() || result.length() >= str.length()){
        return str;
    }
    return result;
}
int main() {
    string str; 
    string result; 
    cout << "Podaj wyraz do kompresji: " << endl;
    cin >> str;
    result = compression(str);
    cout << result << endl;
    
}