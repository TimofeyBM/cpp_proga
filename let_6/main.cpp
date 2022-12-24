#include <iostream>
#include <string>

int main() {
    std::string str;
    str = "1234567890AaBbCcDdEeFfGghhXxYyZz";
    for(size_t a = 0; a < 32; ++a){
        for(size_t b = 0; b < 32; ++b){
            for(size_t c = 0; c < 32; ++c){
                for(size_t d = 0; d < 32; ++d){
                    for(size_t e = 0; e < 32; ++e){
                        std::cout << str[a] << str[b] << str[c] << str[d] << str [e] << std::endl;
                    }
                }
            }
        }
    }
    return 0;
}