//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@interface CEMCredentialCertificateIdentityDeclaration_Status : CEMPayloadBase
{
}

+ (id)buildRequiredOnly;
+ (id)build;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

