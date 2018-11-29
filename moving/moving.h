//
// Created by sinigr on 20.11.2018.
//

#ifndef VANDERVURDTEMPLATES_MOVING_H
#define VANDERVURDTEMPLATES_MOVING_H

/* Полезно подойти к s t d : : move и std : : forward с точки зрения того, чего они не делают.
 * s t d : : move ничего не перемещает. std : : forwa rd ничего не передает. Во время выполнения
 *       они не делают вообще ничего. Они не генерируют выполнимый код - ни одного
 * байта.
 * std : : move и std : : forward являются всего лишь функциями (на самом деле - шаблонами
 *       функций), которые выполняют приведения. s td : : move выполняет безусловное
 *       приведение своего аргумента к rvalue, в то время как std : : forward выполняет приведение
 *       только при соблюдении определенных условий. Это все. Пояснения приводят к новому
 * множеству вопросов, но, по сути, история на этом завершена.
 */


#endif //VANDERVURDTEMPLATES_MOVING_H