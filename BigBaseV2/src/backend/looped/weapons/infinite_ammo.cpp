#include "backend/looped/looped.hpp"
#include "core/enums.hpp"
#include "util/entity.hpp"
#include "util/math.hpp"
#include "util/notify.hpp"

namespace big
{
	void looped::weapons_infinite_ammo()
	{
		if (g.weapons.infinite_ammo) {
			Hash weaponHash;
			auto const ped = PLAYER::PLAYER_PED_ID();

			WEAPON::GET_CURRENT_PED_WEAPON(ped, &weaponHash, 1);
			if (weaponHash != RAGE_JOAAT("WEAPON_UNARMED")) {
				WEAPON::GIVE_WEAPON_TO_PED(ped, weaponHash, 9999, false, false);
			}
		}
	}
}