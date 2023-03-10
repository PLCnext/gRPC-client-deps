# Phoenix Image Builds

Contains dependencies required for phoenix_bridge and its dockerization.

## Description

### `plcnext_deps`

Contains the dependencies required per PLC type. These are typically generated by installing the SDK on a PC and then copied over into the docker image. Instead, the deps are first copied into this git repo, and pulled into whichever image needs to be built via automation scripts like Dockerfile, CI etc..

Since the deps are built for each new version of the SDK and per Ubuntu distro, this repo must also contain branches for each such version.
The latest is to be stored in main.

#### Per PLC folders

Each PLC's deps must be stoed in a separate folder. Ex: AXCF3xxx deps are stored in the folder `axcf3_deps`    
These deps are version controlled based on SDK versions. i.e. For each new SDK release, these deps must be built and uploaded into this repo.

Current latest version for AXCF3xxx: `2022.00`

#### Installer script

`dep_copy.sh` copies the deps from this directory to where they need to go. Must be executed from the `plcnext_deps` folder with an argument naming the ROS distro.

Ex: `../image_builder/plcnext_deps$ ./dep_copy.sh noetic`


### `test_code`

This contains some basic test code just to compile and check if deps are correctly copied over. Should not be required anymore once the workflow is perfected.
