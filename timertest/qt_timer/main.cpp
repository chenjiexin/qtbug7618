#include <QtGui/QtGui>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	QTimer t;
	t.start(1);

	return app.exec();
}
