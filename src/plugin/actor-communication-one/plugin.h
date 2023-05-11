#ifndef FILETREEWIDGET_H
#define FILETREEWIDGET_H

#include <QWidget>
#include <QMenu>
#include <QString>
#include <iostream>
struct Param{
    int a; int b;
};


class QsciScintilla;
class PluginPrivate;
class ActorProcessor;

class Plugin : public QObject
{
    Q_OBJECT
public:
    Plugin(QObject *parent = nullptr);
    ~Plugin();

public:
    void setActorProcessor(ActorProcessor*processor);
    void setNotepad(QWidget *newNotepad);
    void setTopMenu(QMenu *newTopMenu);

    int test_commcuncation(int a, int b){return a + b;}
    int test_ref_commcuncation(int a, int b) { return a + b; }
    void test_commcuncation_const(QWidget* a){a->setMinimumWidth(10);a->setMinimumHeight(10); a->show();}

    void test_function_add(int a, int b)
    {
        std::cout << "hi I am method fucntion add test" <<std::endl;
        std::cout <<  a << "+" << b  << std::endl;
    }

    void test_function_para(Param * p)
    {
        std::cout << "hi I am param test" <<std::endl;
        std::cout <<  p->a << "+" << p->b  << std::endl;
    }

    void test_function_more_para(int a ,int b, int c, int d, int e,int f, int g, int h, int i, int j, int k, int l, int m){
        std::cout << "hi I am function super param" <<std::endl;
        std::cout << "test super param" <<  a <<"+"<< b  <<"+"<< c <<"+"<< d <<"+"<< e << "+"<<f <<"+"<< g << "+"<<h <<"+"<< i <<"+"<< j  <<"+"<< k <<"+"<< l <<"+"<< m  << "=" \
                  <<  a + b + c + d + e + f + g + h + i + j  + k + l + m<< std::endl;
        std::cout << std::endl;
    }

    void test_function_para_combine(Param * p, int c)
    {
        std::cout << "hi I am method fucntion para conbine test" <<std::endl;
        std::cout <<  p->a << "+" << p->b  << "-" << c << "=" <<p->a + p->b -c << std::endl;
        std::cout << std::endl;
    }

    int test_function_return ()
    {
        std::cout << "hi I am method fucntion" <<std::endl;
        return 6;
    }

private:
    PluginPrivate * const d_ptr;
    Q_DECLARE_PRIVATE(Plugin)

    Plugin(const Plugin &) = delete;
    Plugin &operator=(const Plugin &) = delete;
};

#endif // FILETREEWIDGET_H
