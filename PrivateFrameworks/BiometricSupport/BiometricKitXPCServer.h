//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface BiometricKitXPCServer : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_cmdDispatchQueue;
}

+ (BOOL)isPreferenceKeySet:(id)arg1;
+ (void)setPreferenceValue:(id)arg1 forKey:(id)arg2;
+ (id)getPreferenceValueOfClass:(Class)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *cmdDispatchQueue; // @synthesize cmdDispatchQueue=_cmdDispatchQueue;
- (void)serviceStatus:(unsigned int)arg1 withData:(id)arg2 referenceTimestamp:(unsigned long long)arg3 continuousTimeDelta:(long long)arg4;
- (BOOL)isDisplayOn;
- (BOOL)isClassCFileAccessible;
- (id)identitiesOfUser:(unsigned int)arg1;
- (BOOL)isWakingUpFromS5;
- (id)remoteOSVersion;
- (id)remoteTimeMatchingInfo;
- (BOOL)bridgeServiceCheck;
- (void)statusMessage:(unsigned int)arg1 withData:(id)arg2 timestamp:(unsigned long long)arg3;
- (void)matchResult:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)enrollFeedback:(id)arg1 withTimestamp:(unsigned long long)arg2;
- (void)enrollUpdate:(id)arg1 withTimestamp:(unsigned long long)arg2;
- (void)enrollResult:(id)arg1 withTimestamp:(unsigned long long)arg2;
- (int)setIORegistryProperty:(id)arg1 toValue:(id)arg2 onService:(id)arg3;
- (BOOL)fileRadarWithLogs:(id)arg1 withDescription:(id)arg2;
- (id)getLogs:(BOOL)arg1 withDetails:(id *)arg2;
- (id)getSensorInfoWithClient:(id)arg1;
- (float)getModulationRatio;
- (long long)getCalibrationDataState;
- (long long)getCalBlobVersion;
- (id)getCalibrationDataInfoWithClient:(id)arg1;
- (long long)getSensorCalibrationStatusWithClient:(id)arg1;
- (unsigned int)getTemplateListCRCForUser:(unsigned int)arg1;
- (id)getSerialisedTemplatesForUser:(unsigned int)arg1;
- (id)pullDebugImageData:(BOOL)arg1 rotated:(BOOL)arg2 hasWidth:(unsigned int *)arg3 hasHeight:(unsigned int *)arg4 withClient:(id)arg5;
- (int)setDebugImages:(BOOL)arg1 withClient:(id)arg2;
- (id)pullCaptureBufferWithClient:(id)arg1;
- (id)pullCalibrationDataWithClient:(id)arg1;
- (BOOL)isInternalBuild;
- (BOOL)isAriadneSignpostsEnabled;
- (void)registerDelegate:(BOOL)arg1 withClient:(id)arg2;
- (int)getTimestampCollection:(CDStruct_3376de8b *)arg1;
- (long long)getEnrollmentCount;
- (int)getBiometrickitdInfo:(CDStruct_238d90ce *)arg1;
- (unsigned long long)getLoggingType;
- (unsigned long long)getSKSLockStateForUser:(unsigned int)arg1;
- (int)pauseFaceDetectTimer:(BOOL)arg1 withClient:(id)arg2;
- (int)enableMatchAutoRetry:(BOOL)arg1 withClient:(id)arg2;
- (int)queryIdentityMigrationFailureForUser:(unsigned int)arg1 failed:(char *)arg2 clear:(BOOL)arg3 withClient:(id)arg4;
- (int)fieldDiagnosticsControl:(unsigned int)arg1 inData:(id)arg2 outData:(id *)arg3 withClient:(id)arg4;
- (int)getAugmentationEligibility:(char *)arg1 forIdentity:(id)arg2 withClient:(id)arg3;
- (int)setTemplate:(id)arg1 forIdentity:(id)arg2 withClient:(id)arg3;
- (int)suspendEnrollment:(BOOL)arg1 withClient:(id)arg2;
- (int)completeEnrollmentWithClient:(id)arg1;
- (int)getBiometryAvailability:(long long *)arg1 forUser:(unsigned int)arg2 withClient:(id)arg3;
- (int)startNewMatchAttemptWithClient:(id)arg1;
- (long long)getDeviceStateWithClient:(id)arg1;
- (BOOL)isXARTAvailableWithClient:(id)arg1;
- (int)enableBackgroundFdet:(BOOL)arg1 withClient:(id)arg2;
- (BOOL)isFingerOnWithClient:(id)arg1;
- (int)getBioLockoutState:(long long *)arg1 forUser:(unsigned int)arg2 withClient:(id)arg3;
- (long long)getProvisioningStateWithClient:(id)arg1;
- (int)setAppleMesaSEPLoggingLevel;
- (BOOL)getEnabledForUnlock;
- (int)setSystemProtectedConfiguration:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (int)setProtectedConfiguration:(id)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3 withClient:(id)arg4;
- (id)getSystemProtectedConfigurationWithClient:(id)arg1;
- (id)getProtectedConfigurationForUser:(unsigned int)arg1 withClient:(id)arg2;
- (id)getNodeTopologyForIdentity:(id)arg1 withClient:(id)arg2;
- (id)pullMatchPolicyInfoData;
- (id)pullAlignmentData;
- (int)enrollContinue;
- (int)forceBioLockoutForUser:(unsigned int)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (int)dropUnlockTokenWithClient:(id)arg1;
- (id)getIdentitiesDatabaseHashForUser:(unsigned int)arg1 withClient:(id)arg2;
- (id)getIdentitiesDatabaseUUIDForUser:(unsigned int)arg1 withClient:(id)arg2;
- (int)resetAppleConnectCounterWithClient:(id)arg1;
- (int)setUserDSID:(unsigned long long)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (void)timestampEvent:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2;
- (int)diagnostics:(int)arg1 withOptions:(id)arg2 passed:(char *)arg3 withDetails:(id *)arg4 withClient:(id)arg5;
- (int)getCountersignedStoreToken:(id *)arg1 withClient:(id)arg2;
- (int)registerStoreToken:(id)arg1 withClient:(id)arg2;
- (int)registerDSID:(unsigned long long)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (long long)getFreeIdentityCount:(int)arg1 forUser:(unsigned int)arg2 withClient:(id)arg3;
- (long long)getMaxIdentityCount:(int)arg1 withClient:(id)arg2;
- (id)identities:(id)arg1 withClient:(id)arg2;
- (id)getIdentityFromUUID:(id)arg1 withClient:(id)arg2;
- (int)removeAllIdentitiesForUser:(unsigned int)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (int)removeIdentity:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (int)updateIdentity:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (int)cancelWithClient:(id)arg1;
- (int)detectPresenceWithOptions:(id)arg1 withClient:(id)arg2;
- (int)match:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (int)enroll:(int)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3 withClient:(id)arg4;
- (void)notifyAppIsInactive:(BOOL)arg1 withClient:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;
- (BOOL)isEphemeralMultiUser;
- (void)sbStatus;
- (id)getBioLog;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

