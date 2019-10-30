#ifndef VIEWREMOTE_H
#define VIEWREMOTE_H



#include <QWidget>
#include <QGroupBox>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QRadioButton>
#include <QGroupBox>

#include <string>
using std::string;

class viewRemote : public QWidget{
    Q_OBJECT
public:
    explicit viewRemote(/*const QString& controlli,*/ QWidget *parent = 0);

private:
    //QGridLayout* GridLayout;
    QHBoxLayout* HBoxLayout;

    QPushButton* NW;
    QPushButton* N;
    QPushButton* NE;
    QPushButton* W;
    QPushButton* E;
    QPushButton* SW;
    QPushButton* S;
    QPushButton* SE;

    QPushButton* startButton;
    QPushButton* stopButton;

    QPushButton* exButton;
    QPushButton* plusButton;


signals:
    void clickedNW();
    void clickedN();
    void clickedNE();
    void clickedW();
    void clickedE();
    void clickedSW();
    void clickedS();
    void clickedSE();
    void clickedMovementButton(int); // insert 'STRING'

public slots:

    void selectedEx();
    void selectedPlus();
    void selectedStop();
    void selectedStart();


/*
    void selectedNW();

    void selectedNE();
    void selectedW();
    void selectedE();
    void selectedSW();
    void selectedS();
    void selectedSE();
*/
};

#endif // VIEWREMOTE_H
