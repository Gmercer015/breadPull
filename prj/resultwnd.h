#ifndef RESULTWND_H
#define RESULTWND_H

#include <QGroupBox>

class breadData;

namespace Ui {
class resultWnd;
}

class resultWnd : public QGroupBox
{
    Q_OBJECT

public:
    explicit resultWnd(QWidget *parent = 0);
    void res(breadData *dat);
    ~resultWnd();

private slots:
    void on_commandLinkButton_clicked();

private:
    Ui::resultWnd *ui;
};

#endif // RESULTWND_H
