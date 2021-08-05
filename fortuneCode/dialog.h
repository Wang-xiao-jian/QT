#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class FortuneCode;
}

class FortuneCode : public QDialog
{
    Q_OBJECT

public:
    explicit FortuneCode(QWidget *parent = nullptr);
    ~FortuneCode();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FortuneCode *ui;
};

#endif // DIALOG_H
