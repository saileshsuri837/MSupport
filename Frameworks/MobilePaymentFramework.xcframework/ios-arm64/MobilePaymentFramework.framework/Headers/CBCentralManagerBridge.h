//
//  CBCentralManagerBridge.h
//  MobilePaymentFramework
//
//  Created by Thilak on 4/6/20.
//  Copyright © 2020 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

NS_ASSUME_NONNULL_BEGIN

@interface CBCentralManagerBridge : NSObject

/// Set up the central manager delegate
- (void)setUpCentralManager;

/// Retreive the paired devices
- (NSArray <CBPeripheral *> *)retrievePairedPeers;

/// Forget the bluetooth device and unpair it
/// @param peripheral The bluetooth device
- (void)unpairPeer:(CBPeripheral *)peripheral;
@end

NS_ASSUME_NONNULL_END
