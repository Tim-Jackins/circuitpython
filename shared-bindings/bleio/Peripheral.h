/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Artur Pacholec
 * Copyright (c) 2018 Dan Halbert for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef MICROPY_INCLUDED_SHARED_BINDINGS_BLEIO_PERIPHERAL_H
#define MICROPY_INCLUDED_SHARED_BINDINGS_BLEIO_PERIPHERAL_H

#include "common-hal/bleio/Peripheral.h"

extern const mp_obj_type_t bleio_peripheral_type;

extern void common_hal_bleio_peripheral_construct(bleio_peripheral_obj_t *self);
extern bool common_hal_bleio_peripheral_get_connected(bleio_peripheral_obj_t *self);
extern void common_hal_bleio_peripheral_start_advertising(bleio_peripheral_obj_t *device, bool connectable, mp_buffer_info_t *raw_data);
extern void common_hal_bleio_peripheral_stop_advertising(bleio_peripheral_obj_t *device);

#endif // MICROPY_INCLUDED_SHARED_BINDINGS_BLEIO_PERIPHERAL_H
