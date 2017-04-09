#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QLabel *label = new QLabel;
    label->setText("<center><h1><font color=blue>Hello World!</font></h1></center>");
    label->setWindowTitle("QT");
    label->resize(200, 50);

    label->show();

    return app.exec();
}

