# vita3g-disable

This is a plugin that spoofs HasWWAN (**vshSysconHasWWAN**) to always return 0.

This has the effect of essentially tricking the system into thinking this is a regular WiFi only Vita.

This means, Mobile Network is gone from the Quick Menu, apps such as PSVident report the system as a WiFi vita, Mobile Network Operator won't work anymore (it will hang), Mobile Network Settings will be gone from the settings app, SIM errors and "No SIM" will be gone forever, you can now remove and reinsert the SIM card without the Vita forcing you to reboot, IMEI, Phone Number and ICCID will not show up in System Information anymore, the Usage option under System will no longer show up, etc.

**PS:** Mobile Network Operator will still be cluttering your livearea up, if you want to get rid of the bubble, use [this](https://anthe.studio/bubblestudio/).

*This* is the proper way of disabling 3g.

I'm surprised no one did something similar in the past.
## Install steps
1. Download the plugin from the releases tab.
2. Add the following to your config.txt
```
*ALL
ur0:tai/vita3g-disable.suprx
```
3. Profit