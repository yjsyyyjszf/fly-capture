/***************************************************************************
 *   Copyright (C) 2018 by FlyCapture team <public.irkutsk@gmail.com>      *
 *                                                                         *
 *   Part of the FlyCapture engine:                                        *
 *   https://github.com/AndreyBarmaley/fly-capture                         *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include "settings.h"

std::string Settings::programName(void)
{
    return "Fly Capture";
}

std::string Settings::programDomain(void)
{
    return "fly-capture";
}

std::string Settings::programVersion(void)
{
    std::string version;
#ifdef BUILDDATE
    version.append(BUILDDATE);
#ifdef SRCREVISION
    version.append(".").append(SRCREVISION);
#endif
#endif
    return version;
}

std::string Settings::dataPath(void)
{
    return "data";
}

std::string Settings::dataLang(const std::string & fn)
{
    return Systems::concatePath(Systems::concatePath(dataPath(), "lang"), fn);
}

std::string Settings::dataFonts(const std::string & fn)
{
    return Systems::concatePath(Systems::concatePath(dataPath(), "fonts"), fn);
}

std::string Settings::dataJson(const std::string & fn)
{
    return Systems::concatePath(Systems::concatePath(dataPath(), "json"), fn);
}
