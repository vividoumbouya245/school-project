  std::string getRandomCode(int length) {
    std::string code;
    for (int i = 0; i < length; ++i) {
        code += "A" + std::to_string(rand() % 26);
    }
    return code;
}