//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMCommandBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSString;

@interface CEMManagementRetryActivatedConfigurationCommand : CEMCommandBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadActivationIdentifier;
    NSString *_payloadConfigurationIdentifier;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withActivationIdentifier:(id)arg2 withConfigurationIdentifier:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withActivationIdentifier:(id)arg2 withConfigurationIdentifier:(id)arg3;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadConfigurationIdentifier; // @synthesize payloadConfigurationIdentifier=_payloadConfigurationIdentifier;
@property(copy, nonatomic) NSString *payloadActivationIdentifier; // @synthesize payloadActivationIdentifier=_payloadActivationIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (int)executionLevel;
- (BOOL)mustBeSupervised;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

