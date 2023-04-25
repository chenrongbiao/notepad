#include "ndd_plugin_implement.h"

#include <qsciscintilla.h>
#include <QDebug>

NddPluginImplement::NddPluginImplement(QsciScintilla *editor)
{
    QString text = editor->text();
    qInfo() << "text:" << text;
}
