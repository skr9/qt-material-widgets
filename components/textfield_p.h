#ifndef TEXTFIELD_P_H
#define TEXTFIELD_P_H

#include <QObject>

class TextField;
class TextFieldStateMachine;

class TextFieldPrivate
{
    Q_DISABLE_COPY(TextFieldPrivate)
    Q_DECLARE_PUBLIC(TextField)

public:
    TextFieldPrivate(TextField *q);
    void init();

    TextField *const q_ptr;
    TextFieldStateMachine *machine;
    QColor textColor;
    QColor backgroundColor;
    QColor inkColor;
    QColor underlineColor;
};

#endif // TEXTFIELD_P_H