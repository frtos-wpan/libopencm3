/* This provides unification of code over STM32F subfamilies */

/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2013 Piotr Esden-Tempski <piotr@esden.net>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#if defined(STM32F1)
#       include <libopencm3/stm32/f1/exti.h>
#elif defined(STM32F2)
#       include <libopencm3/stm32/f2/exti.h>
#elif defined(STM32F3)
#       include <libopencm3/stm32/f3/exti.h>
#elif defined(STM32F4)
#       include <libopencm3/stm32/f4/exti.h>
#elif defined(STM32L1)
#       include <libopencm3/stm32/l1/exti.h>
#else
#       error "stm32 family not defined."
#endif

