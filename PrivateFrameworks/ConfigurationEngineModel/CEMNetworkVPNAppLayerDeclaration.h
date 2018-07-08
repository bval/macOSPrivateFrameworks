//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSArray, NSNumber, NSString;

@interface CEMNetworkVPNAppLayerDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadVPNUUID;
    NSArray *_payloadSafariDomains;
    NSNumber *_payloadOnDemandMatchAppEnabled;
    NSArray *_payloadSMBDomains;
    NSString *_payloadProviderType;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withVPNUUID:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withVPNUUID:(id)arg2 withSafariDomains:(id)arg3 withOnDemandMatchAppEnabled:(id)arg4 withSMBDomains:(id)arg5 withProviderType:(id)arg6;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadProviderType; // @synthesize payloadProviderType=_payloadProviderType;
@property(copy, nonatomic) NSArray *payloadSMBDomains; // @synthesize payloadSMBDomains=_payloadSMBDomains;
@property(copy, nonatomic) NSNumber *payloadOnDemandMatchAppEnabled; // @synthesize payloadOnDemandMatchAppEnabled=_payloadOnDemandMatchAppEnabled;
@property(copy, nonatomic) NSArray *payloadSafariDomains; // @synthesize payloadSafariDomains=_payloadSafariDomains;
@property(copy, nonatomic) NSString *payloadVPNUUID; // @synthesize payloadVPNUUID=_payloadVPNUUID;
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

