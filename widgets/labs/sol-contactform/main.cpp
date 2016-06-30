/*************************************************************************
 *
 * Copyright (c) 2016 Qt Group Plc.
 * All rights reserved.
 *
 * See the LICENSE.txt file shipped along with this file for the license.
 *
 *************************************************************************/

#include <QtWidgets>
#include "contactform.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    ContactForm form;
    form.show();
    return app.exec();
}