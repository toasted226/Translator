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
    void on_translatebutton_clicked();

private:
    Ui::Translator *ui;
};
#endif // TRANSLATOR_H
