#pragma once

#include <lcom/lcf.h>

#include "events/events.h"

/**
 * @brief Starts the menu
 * 
 */
void (menu_start)();

/**
 * @brief Ends the menu
 * 
 */
void (menu_end)();

/**
 * @brief Populates menu
 * 
 */
void (menu_populate)();

/**
 * @brief Handles mouse click on menu
 * 
 * @param ev Event generated by mouse click
 */
void (menu_handle_mouse_click)(struct event *ev);

/**
 * @brief Handles key press on menu
 * 
 * @param ev Event generated by key press
 */
void (menu_handle_key_press)(struct event *ev);

/**
 * @brief Starts game
 * 
 */
void (menu_do_start_game)();

/**
 * @brief Exits game
 * 
 */
void (menu_do_exit_game)();

/**
 * @brief Goes to scoreboard page
 * 
 */
void (menu_do_scoreboard)();

/**
 * @brief Goes to multiplayer mode
 * 
 */
void (menu_do_multiplayer)();