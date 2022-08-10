//
// Created by eubgt on 8/10/22.
//

#ifndef INTRO_OBJECT_H
#define INTRO_OBJECT_H


class Object {
public:
    Object();
    static void show();
    static int add(int add, int b);
    void setResult(int result);
    [[nodiscard]] int getResult() const;
private:
    int _addition{};
};


#endif //INTRO_OBJECT_H
