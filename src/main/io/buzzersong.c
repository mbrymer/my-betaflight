/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */


#include "beeper.h"

#include "fc/rc_modes.h"

/*
 * Buzzer song periodic function called by scheduler
*/
void processBuzzerSong(timeUs_t currentTimeUs)
{

    if(IS_RC_MODE_ACTIVE(BOXBUZZERSONG) && !isBeeperOn){
        beeper(BEEPER_BUZZER_SONG);
    }

}