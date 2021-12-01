# Test Plans

| **Test ID** | **Description** | **Input** | **Output** | **Status** |
| --- | --- | --- | --- | --- |
| TID\_01 | room temperature detected | push button=1 | push button=1 | PASS ||
| TID\_02 | compared by the controller | push button=0 | push button=0 | PASS |
| TID\_03 | Temperature is abnormal | Temp=0 | temp< 36.1 degree generation | PASS |
| TID\_04 | Temperature is abnormal | Temp=0 | temp>38 degree generation | PASS |
| TID\_05 | Temperature normal | Temp=0 | heater=36.1 to 38 degree generation | PASS |
| TID\_06 | Display | Temperature :) 37 deg Cel | Temperature :)38 deg Cel | PASS |


