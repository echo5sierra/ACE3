/*
 * Author: Glowbal
 * Check if caller can access targets medical equipment, based upon accessLevel.
 *
 * Arguments:
 * 0: The caller <OBJECT>
 * 1: The target <OBJECT>
 *
 * Return Value:
 * Can Treat <BOOL>
 *
 * Example:
 * [bob, target] call ACE_medical_treatment_fnc_canAccessMedicalEquipment
 *
 * Public: Yes
 */

#include "script_component.hpp"

params ["_caller", "_target"];

private _accessLevel = _target getVariable [QGVAR(allowSharedEquipmentAccess), -1];

private _return = false;

if (_accessLevel >= 0) then {
    if (_accessLevel == 0) exitWith { _return = true; };
    if (_accessLevel == 1) exitWith { _return = (side _target == side _caller); };
    if (_accessLevel == 2) exitWith { _return = (group _target == group _caller); };
};

_return;
