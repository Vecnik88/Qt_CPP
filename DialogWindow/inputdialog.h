#ifndef INPUTDIALOG_H
#define INPUTDIALOG_H

#include <QDialog>
#include <QtWidgets>
#include <QLabel>

class QLineEdit;
class QLabel;

class InputDialog : public QDialog{
    Q_OBJECT
private:
    QLineEdit* m_ptxtFirstName;
    QLineEdit* m_ptxtLastName;

public:
    InputDialog(QWidget* pwgt = 0);
    QString firstName() const;
    QString lastName() const;
};
#endif // INPUTDIALOG_H
