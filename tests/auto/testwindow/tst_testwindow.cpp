#include <QtTest>
#include <QApplication>
#include <QDebug>
#include <QWindow>
#include <QThread>

#include <mainwindow.h>

class TestWindow : public QObject
{
    Q_OBJECT

public:
    TestWindow();
    ~TestWindow();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

private:
    MainWindow w;
};

TestWindow::TestWindow()
{

}

TestWindow::~TestWindow()
{

}

void TestWindow::initTestCase()
{
    w.show();
}

void TestWindow::cleanupTestCase()
{
    w.close();
}

void TestWindow::test_case1()
{
    bool is_present = false;
    foreach(QWindow *w, QApplication::allWindows()){
        if (w->title() == "My Window") {
            is_present = true;
            break;
        }
    }
    QVERIFY(is_present);
}

QTEST_MAIN(TestWindow)

#include "tst_testwindow.moc"
