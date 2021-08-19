#include "translator.h"
#include "ui_translator.h"
#include "command.h"
#include <QString>

Translator::Translator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Translator)
{
    ui->setupUi(this);
}

Translator::~Translator()
{
    delete ui;
}


void Translator::on_translatebutton_clicked()
{
    std::string input = "trans -b -show-original n :de \"" + ui->inputbox->toPlainText().toStdString() + '"';

    std::string output = exec(input.c_str());

    QString qOutput = QString::fromUtf8(output.c_str());

    ui->outputbox->setText(qOutput);
}
