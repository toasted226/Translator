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

std::string getCode(std::string language)
{
    return language.substr(0, language.find(' '));
}

std::string getName(std::string language)
{
    return language.substr(language.find(':') + 2, language.size());
}

void Translator::Translate()
{
    std::string inputtext = ui->inputbox->toPlainText().toStdString();
    std::string inputcode = getCode(ui->inputlang->currentText().toStdString());
    std::string outputcode = getCode(ui->outputlang->currentText().toStdString());

    if(inputtext.size() >= 1)
    {
        std::string input = "trans -b -show-original n "+inputcode+":"+outputcode+" \""+inputtext+'"';

        std::string output = exec(input.c_str());
        QString qOutput;

        if(output.size() > 1)
        {
            qOutput = QString::fromUtf8(output.c_str());
        }
        else
        {
            std::string error = "ERROR: You've used this service too much. Try again later.\nThis isn't a normal problem, if it occurs and you haven't used it excessively, then there's something else wrong. If that's the case, please submit an issue on GitHub.\nThis warning should display if you've used the maximum number of translations allowed by the API in a given time.";
            qOutput = QString::fromUtf8(error.c_str());
        }

        ui->outputbox->setText(qOutput);
    }
}

void Translator::on_translatebutton_clicked()
{
    Translate();
}

void Translator::on_inputlang_currentTextChanged(const QString &arg1)
{
    std::string choice = getName(arg1.toStdString());

    ui->input_title->setText(QString::fromUtf8(choice.c_str()));
}

void Translator::on_outputlang_currentTextChanged(const QString &arg1)
{
    std::string choice = getName(arg1.toStdString());

    ui->output_title->setText(QString::fromUtf8(choice.c_str()));
}

void Translator::on_swap_button_clicked()
{
    int outputCode = ui->outputlang->currentIndex();
    QString outputText = ui->outputbox->toPlainText();
    QString outputTitle = ui->output_title->text();

    int inputCode = ui->inputlang->currentIndex();
    QString inputText = ui->inputbox->toPlainText();
    QString inputTitle = ui->input_title->text();

    ui->inputlang->setCurrentIndex(outputCode);
    ui->outputlang->setCurrentIndex(inputCode);

    ui->inputbox->setText(outputText);
    ui->outputbox->setText(inputText);

    ui->input_title->setText(outputTitle);
    ui->output_title->setText(inputTitle);
}
