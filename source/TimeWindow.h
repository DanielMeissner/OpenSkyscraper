#pragma once
#include "GameObject.h"
#include <TGUI/Widget.hpp>
#include <TGUI/Widgets/ChildWindow.hpp>

namespace OT {
    class TimeWindow : public GameObject {
        public:
            TimeWindow(Game * game);
            //~TimeWindow() { close(); }

            void close();

            //tgui::ChildWindow * window;           
    };
}