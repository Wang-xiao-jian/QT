#include "dialog.h"
#include "ui_dialog.h"

FortuneCode::FortuneCode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FortuneCode)
{
    ui->setupUi(this);
}

FortuneCode::~FortuneCode()
{
    delete ui;
}

int cmp(const void *a, const void *b)
{
    return *(const int *)a - *(const int *)b;
}

void FortuneCode::on_pushButton_clicked()
{
    srand((unsigned int)time(nullptr));

    int nums[6] = {0};
    int visited[34] = {0};

    for (int i = 0; i < 6; i++) {
        nums[i] = rand() % 33 + 1;
        while(visited[nums[i]] == 1) {
            nums[i] = rand() % 33 + 1;
        }
        visited[nums[i]] = 1;
    }

    qsort(nums, 6, sizeof(int), cmp);

    ui->lineEdit_1->setText(QString().setNum(nums[0]));
    ui->lineEdit_2->setText(QString().setNum(nums[1]));
    ui->lineEdit_3->setText(QString().setNum(nums[2]));
    ui->lineEdit_4->setText(QString().setNum(nums[3]));
    ui->lineEdit_5->setText(QString().setNum(nums[4]));
    ui->lineEdit_6->setText(QString().setNum(nums[5]));

    int num = rand() % 16 + 1;
    ui->lineEdit_7->setText(QString().setNum(num));

    return;
}
