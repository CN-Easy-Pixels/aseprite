/* Aseprite
 * Copyright (C) 2001-2013  David Capello
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef APP_MODULES_PALETTES_H_INCLUDED
#define APP_MODULES_PALETTES_H_INCLUDED
#pragma once

namespace raster {
  class Palette;
}

namespace app {
  using namespace raster;

  int init_module_palette();
  void exit_module_palette();

  Palette* get_default_palette();
  Palette* get_current_palette();

  void set_default_palette(Palette* palette);
  bool set_current_palette(const Palette* palette, bool forced);
  void set_black_palette();

} // namespace app

#endif
