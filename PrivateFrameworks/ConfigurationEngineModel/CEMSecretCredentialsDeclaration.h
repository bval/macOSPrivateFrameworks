//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSecretCredentialsDeclaration : CEMPayloadBase
{
    NSString *_payloadSecret;
}

+ (id)buildRequiredOnlyWithSecret:(id)arg1;
+ (id)buildWithSecret:(id)arg1;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadSecret; // @synthesize payloadSecret=_payloadSecret;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

