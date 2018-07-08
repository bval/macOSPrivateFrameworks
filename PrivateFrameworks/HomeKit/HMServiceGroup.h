//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMFLogging.h"
#import "HMFMessageReceiver.h"
#import "HMMutableApplicationData.h"
#import "HMObjectMerge.h"
#import "NSSecureCoding.h"

@class HMApplicationData, HMFUnfairLock, HMHome, HMMutableArray, NSArray, NSObject<OS_dispatch_queue>, NSString, NSUUID, _HMContext;

@interface HMServiceGroup : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge, HMMutableApplicationData>
{
    HMFUnfairLock *_lock;
    NSUUID *_uniqueIdentifier;
    NSUUID *_uuid;
    NSString *_name;
    HMHome *_home;
    HMApplicationData *_applicationData;
    _HMContext *_context;
    HMMutableArray *_currentServices;
}

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) HMMutableArray *currentServices; // @synthesize currentServices=_currentServices;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)_findService:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleServiceGroupRenamedNotification:(id)arg1;
- (void)_handleServiceRemovedNotification:(id)arg1;
- (void)_handleServiceAddedNotification:(id)arg1;
- (void)_removeService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeServices:(id)arg1;
- (void)setApplicationData:(id)arg1;
@property(readonly, nonatomic) HMApplicationData *applicationData;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) NSArray *services;
- (void)setName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_invalidate;
- (void)_unconfigure;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

