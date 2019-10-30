#include <QApplication>
#include <viewmainwindow.h>
#include <QFrame>
#include <QVBoxLayout>
//#include <eccezione.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    viewMainWindow mw;
    mw.show();

    return app.exec();
}
