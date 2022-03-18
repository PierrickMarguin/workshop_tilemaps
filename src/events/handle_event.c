/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "event.h"

/*
typedef enum
{
    sfEvtClosed,                 ///< The window requested to be closed (no data)
    sfEvtResized,                ///< The window was resized (data in event.size)
    sfEvtLostFocus,              ///< The window lost the focus (no data)
    sfEvtGainedFocus,            ///< The window gained the focus (no data)
    sfEvtTextEntered,            ///< A character was entered (data in event.text)
    sfEvtKeyPressed,             ///< A key was pressed (data in event.key)
    sfEvtKeyReleased,            ///< A key was released (data in event.key)
    sfEvtMouseWheelMoved,        ///< The mouse wheel was scrolled (data in event.mouseWheel) (deprecated)
    sfEvtMouseWheelScrolled,     ///< The mouse wheel was scrolled (data in event.mouseWheelScroll)
    sfEvtMouseButtonPressed,     ///< A mouse button was pressed (data in event.mouseButton)
    sfEvtMouseButtonReleased,    ///< A mouse button was released (data in event.mouseButton)
    sfEvtMouseMoved,             ///< The mouse cursor moved (data in event.mouseMove)
    sfEvtMouseEntered,           ///< The mouse cursor entered the area of the window (no data)
    sfEvtMouseLeft,              ///< The mouse cursor left the area of the window (no data)
    sfEvtJoystickButtonPressed,  ///< A joystick button was pressed (data in event.joystickButton)
    sfEvtJoystickButtonReleased, ///< A joystick button was released (data in event.joystickButton)
    sfEvtJoystickMoved,          ///< The joystick moved along an axis (data in event.joystickMove)
    sfEvtJoystickConnected,      ///< A joystick was connected (data in event.joystickConnect)
    sfEvtJoystickDisconnected,   ///< A joystick was disconnected (data in event.joystickConnect)
    sfEvtTouchBegan,             ///< A touch event began (data in event.touch)
    sfEvtTouchMoved,             ///< A touch moved (data in event.touch)
    sfEvtTouchEnded,             ///< A touch event ended (data in event.touch)
    sfEvtSensorChanged,          ///< A sensor value changed (data in event.sensor)

    sfEvtCount,                  ///< Keep last -- the total number of event types
} sfEventType;
*/

static int (*event_functions[sfEvtCount][MAX_EVENT_FUNCTION])(game_t *, sfEvent) = { \
    {event_closed, NULL},
    {event_resized, NULL},
    {NULL},
    {NULL},
    {NULL},
    {event_key_pressed, NULL},
    {NULL},
    {NULL},
    {NULL},
    {event_mouse_button_pressed, NULL},
    {event_mouse_button_released, NULL},
    {event_mouse_moved, NULL},
    {NULL},
    {NULL},
    {NULL},
    {NULL},
    {NULL},
    {NULL},
    {NULL},
    {NULL},
    {NULL},
    {NULL},
    {NULL}
};

int handle_event(game_t *game)
{
    sfEvent event;
    unsigned int count = 0;

    while (sfRenderWindow_pollEvent(game->window, &event)) {
        while (event_functions[event.type][count]) {
            if (!event_functions[event.type][count](game, event))
                return (0);
            count++;
        }
        count = 0;
    }
    return (1);
}
