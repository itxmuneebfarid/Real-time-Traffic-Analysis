#include "realtimeTrafficanalysis.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    realtimeTrafficanalysis window;
    window.show();
    return app.exec();
}
