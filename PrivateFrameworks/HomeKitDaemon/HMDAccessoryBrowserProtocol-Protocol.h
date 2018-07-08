//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class HAPAccessoryServer, HAPAccessoryServerBrowserRelay, HMDMediaBrowser, HMDUnassociatedAccessory, HMDUnpairedHAPAccessory, HMFMessageTransport, HMSetupAccessoryDescription, NSArray, NSDictionary, NSError, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID;

@protocol HMDAccessoryBrowserProtocol
@property(readonly, nonatomic) HMDMediaBrowser *mediaBrowser;
@property(readonly, nonatomic) HAPAccessoryServerBrowserRelay *relayAccessoryServerBrowser;
@property(readonly, copy) NSArray *unassociatedAccessories;
- (void)removeUnassociatedAccessoryWithIdentifier:(NSString *)arg1;
- (void)removeUnassociatedAccessory:(HMDUnassociatedAccessory *)arg1;
- (void)addUnassociatedAccessory:(HMDUnassociatedAccessory *)arg1 forDeviceSetup:(BOOL)arg2;
- (id <HMDAccessoryBrowserHapProtocol>)acessoryBrowserHapProtocol;
- (void)handleStartDiscoveringAssociatedMediaAccessories:(BOOL)arg1 forTransport:(HMFMessageTransport *)arg2 completionHandler:(void (^)(NSError *, NSDictionary *))arg3;
- (void)handleNewlyPairedAccessory:(NSString *)arg1 linkType:(long long)arg2;
- (BOOL)isBrowsingAllowed;
- (void)discoverAccessoryServer:(NSString *)arg1 linkType:(long long)arg2 errorHandler:(void (^)(NSError *))arg3;
- (void)discoverAccessories:(HAPAccessoryServer *)arg1;
- (BOOL)hasClientRequestedMediaAccessoryControl:(HMFMessageTransport *)arg1;
- (NSString *)dumpBrowsingConnections;
- (NSString *)dumpRegisteredPairedAccessories;
- (NSDictionary *)dumpUnassociatedAccessories;
- (NSSet *)discoveredAccessoryServers;
- (void)reprovisionAccessoryWithIdentifier:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)probeReachabilityForBTLEAccessoryServersWithIdentifiers:(NSArray *)arg1 onQueue:(NSObject<OS_dispatch_queue> *)arg2 withCompletion:(void (^)(NSString *, BOOL))arg3;
- (void)addUnpairedAccessoryServer:(HAPAccessoryServer *)arg1 identifier:(NSString *)arg2;
- (void)resurrectAccessoryServer:(HAPAccessoryServer *)arg1;
- (void)tombstoneAccessoryServer:(HAPAccessoryServer *)arg1;
- (void)stopTrackingBTLEAccessoriesWithIdentifiers:(NSArray *)arg1;
- (void)btleAccessoryReachabilityProbeTimer:(BOOL)arg1;
- (void)deregisterPairedAccessory:(NSString *)arg1;
- (void)registerPairedAccessory:(NSString *)arg1 btleTransport:(BOOL)arg2 airPlay:(BOOL)arg3;
- (void)resetConfiguration;
- (void)cancelPairingWithAccessoryDescription:(HMSetupAccessoryDescription *)arg1 error:(NSError *)arg2;
- (void)cancelPairingWithAccessory:(HMDUnpairedHAPAccessory *)arg1 error:(NSError *)arg2;
- (void)handleSetupCodeAvailable:(HMDUnpairedHAPAccessory *)arg1;
- (void)didReceiveUserConsentResponseForSetupAccessoryDescription:(HMSetupAccessoryDescription *)arg1 consent:(BOOL)arg2;
- (void)pairAccessoryWithDescription:(HMSetupAccessoryDescription *)arg1 homeName:(NSString *)arg2 needsUserConfirmation:(BOOL)arg3 progressHandler:(void (^)(NSUUID *, NSString *, NSString *, HMAccessoryCategory *, long long, unsigned long long))arg4 completionHandler:(void (^)(HAPAccessoryServer *, NSUUID *, long long, unsigned long long, NSError *))arg5;
- (void)pairAccessory:(HMDUnpairedHAPAccessory *)arg1 homeName:(NSString *)arg2 setupCode:(NSString *)arg3 setupCodeProvider:(void (^)(HMDUnpairedHAPAccessory *, NSString *, void (^)(NSString *, NSError *)))arg4 completionHandler:(void (^)(HAPAccessoryServer *, NSUUID *, long long, unsigned long long, NSError *))arg5;
- (void)registerProgressHandler:(void (^)(NSUUID *, NSString *, NSString *, HMAccessoryCategory *, long long, unsigned long long))arg1 unpairedAccessoryUUID:(NSUUID *)arg2;
- (void)removeDelegate:(id <HMDAccessoryBrowserDelegate>)arg1;
- (void)addDelegate:(id <HMDAccessoryBrowserDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)startDiscoveringAccessoriesNeedingReprovisioning;
- (void)startDiscoveringPairedAccessories;
- (void)stopDiscoveringAccessories;
- (void)startDiscoveringAccessories;
- (HMDUnpairedHAPAccessory *)unpairedAccessoryWithUUID:(NSUUID *)arg1;
- (void)activate:(BOOL)arg1;
- (void)setQOS:(long long)arg1;
@end

