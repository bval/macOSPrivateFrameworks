//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDBackingStoreModelBackedObjectProtocol.h"
#import "HMDBackingStoreObjectProtocol.h"
#import "HMFLogging.h"
#import "HMFMerging.h"
#import "HMFObject.h"
#import "NSSecureCoding.h"

@class HMDAccount, HMDDeviceCapabilities, HMDHomeKitVersion, HMFProductInfo, NSArray, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID;

@interface HMDDevice : HMFObject <HMFObject, HMFLogging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, HMFMerging, NSSecureCoding>
{
    NSSet *_handles;
    BOOL _dirty;
    BOOL _locallyTracked;
    BOOL _cloudTracked;
    NSString *_name;
    HMDAccount *_account;
    HMFProductInfo *_productInfo;
    HMDHomeKitVersion *_version;
    HMDDeviceCapabilities *_capabilities;
    NSUUID *_idsIdentifierHash;
    NSUUID *_modelIdentifier;
    NSUUID *_identifier;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (id)deviceWithHandle:(id)arg1;
+ (id)deviceWithDestination:(id)arg1;
+ (id)destinationForDevice:(id)arg1 service:(id)arg2;
@property(getter=isCloudTracked) BOOL cloudTracked; // @synthesize cloudTracked=_cloudTracked;
@property(getter=isLocallyTracked) BOOL locallyTracked; // @synthesize locallyTracked=_locallyTracked;
@property(readonly) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSUUID *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
- (void).cxx_destruct;
- (id)modelBackedObjects;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
@property(readonly, nonatomic) NSUUID *modelParentIdentifier;
- (void)__updateDeviceWithActions:(id)arg1;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)mergeObject:(id)arg1;
- (id)logIdentifier;
@property(copy, setter=setIDSIdentifierHash:) NSUUID *idsIdentifierHash; // @synthesize idsIdentifierHash=_idsIdentifierHash;
@property(getter=isDirty) BOOL dirty; // @synthesize dirty=_dirty;
- (void)setCapabilities:(id)arg1;
@property(readonly, copy) HMDDeviceCapabilities *capabilities; // @synthesize capabilities=_capabilities;
- (void)updateWithDevice:(id)arg1;
- (void)updateVersion:(id)arg1;
- (void)setVersion:(id)arg1;
@property(readonly, copy) HMDHomeKitVersion *version; // @synthesize version=_version;
@property(copy) HMFProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property __weak HMDAccount *account; // @synthesize account=_account;
- (void)setName:(id)arg1;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSUUID *idsIdentifier;
- (id)destination;
- (void)setHandles:(id)arg1;
- (id)globalHandles;
- (id)localHandles;
- (id)handles;
- (BOOL)isBackingStorageEqual:(id)arg1;
- (BOOL)isRelatedToDevice:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithObjectModel:(id)arg1;
- (id)initWithIdentifier:(id)arg1 handles:(id)arg2 name:(id)arg3 productInfo:(id)arg4 version:(id)arg5 capabilities:(id)arg6;
- (id)init;
- (id)deviceForIDSService:(id)arg1;
- (id)initWithService:(id)arg1 device:(id)arg2;
@property(readonly, copy) NSArray *identities;
@property(readonly, getter=isCurrentDevice) BOOL currentDevice;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

