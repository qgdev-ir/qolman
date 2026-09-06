# Log Level
A log level is a measure to categorize logs based on their importance

## Properties
| name       | description                |         examples         | required |
|------------|----------------------------|:------------------------:|:--------:|
| importance | how important the level is |      `-1`, `0`, `1`      |   yes    |
| label      | label of the level         | `debug`, `info`, `error` |   yes    |
- importance: How important is the level (signed integer)
- label: Label of the level

## Implementation
- Package [level](../../qolman/level): fully implemented

[back](index.md)
