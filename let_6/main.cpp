#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    /// Что будет если массив символов получаем извне ? К примеру через аргументы командной строки
    /// ? То ваш код не отработает
    /// Исправим ситуацию --> "сейчас" алфавит для генерации паролей вы получаете из аргументов командной строки, если аргументов командной строки
    /// не передано используем дефолтный алфавит 1234567890AaBbCcDdEeFfGghhXxYyZz
    /// чтобы понять, что вы не списали код, переделайте программу.
    if(argc == 1){
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

    }else{
        std::string str1 = argv[1];
        for (size_t a = 0; a < str1.length(); ++a) {
            for (size_t b = 0; b < str1.length(); ++b) {
                for (size_t c = 0; c < str1.length(); ++c) {
                    for (size_t d = 0; d < str1.length(); ++d) {
                        for (size_t e = 0; e < str1.length(); ++e) {
                            std::cout << str1[a] << str1[b] << str1[c] << str1[d] << str1[e] << std::endl;
                        }
                    }
                }
            }
        }
    }

    return 0;
}
