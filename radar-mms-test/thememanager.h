#ifndef THEMEMANAGER_H
#define THEMEMANAGER_H

#include <QObject>

enum class Theme{
    LIGHT = 0,
    DARK
};

class ThemeManager : public QObject{
    Q_OBJECT

public:

    Q_ENUM(Theme);

    ThemeManager(QObject *parent = nullptr);

    void ApplyTheme(Theme theme);
    QString GetCurrentThemeString() const;
    Theme GetTheme() const;
    QString LightTheme();
    QString DarkTheme();

private:
    Theme curr_theme;
};

#endif // THEMEMANAGER_H
