//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class CEMEventSubscriptionDeclaration_Schedule, NSArray, NSString;

@interface CEMEventSubscriptionDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadEvents;
    CEMEventSubscriptionDeclaration_Schedule *_payloadSchedule;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEvents:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withEvents:(id)arg2 withSchedule:(id)arg3;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) CEMEventSubscriptionDeclaration_Schedule *payloadSchedule; // @synthesize payloadSchedule=_payloadSchedule;
@property(copy, nonatomic) NSArray *payloadEvents; // @synthesize payloadEvents=_payloadEvents;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

