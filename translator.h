#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Translator; }
QT_END_NAMESPACE

class Translator : public QMainWindow
{
    Q_OBJECT

public:
    Translator(QWidget *parent = nullptr);
    ~Translator();

private slots:
    void Translate();

    void on_translatebutton_clicked();

    void on_inputlang_currentTextChanged(const QString &arg1);

    void on_outputlang_currentTextChanged(const QString &arg1);

    void on_swap_button_clicked();

private:
    Ui::Translator *ui;
};
#endif // TRANSLATOR_H
