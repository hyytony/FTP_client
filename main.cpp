#include <QApplication>
#include "login.h"

int main(int argc, char *argv[]) {

    QApplication a(argc, argv);

    FTPAPI ftpAPI;

    Login w(ftpAPI);
    w.show();

    return a.exec();
}
