#ifndef THEME_MANAGER_H
#define THEME_MANAGER_H

#include <QObject>
#include <QString>

enum class Theme {
    LIGHT = 0,
    DARK
};

class ThemeManager : public QObject
{
    Q_OBJECT
public:

    ThemeManager(QObject *parent = nullptr);

    void ApplyTheme(Theme theme);
    QString GetCurrentThemeName() const;
    Theme CurrentTheme() const;

    static QString darkStyle();
    static QString lightStyle();

private:
    Theme current_theme_;
};

#endif // THEME_MANAGER_H
