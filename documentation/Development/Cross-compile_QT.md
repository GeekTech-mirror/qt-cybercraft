# Set the desired MACHINE in local.conf

# Build QT SDK in yocto
+ bitbake meta-toolchain-qt6

## REQUIRES A LOT OF RAM ##
+ format 64GB flash drive as swap
+ build used 41GB at it's peak (29GB RAM 12GB SWAP)

# Configure SDK in QT Creator

## Add qemuarm64 as a device

## Add qemuarm64 kit

## Generate SDK environmental variables

## Add variables to QT Creator