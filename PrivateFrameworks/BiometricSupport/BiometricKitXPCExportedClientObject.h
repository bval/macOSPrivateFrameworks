//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BiometricKitXPCExportedObject, NSDictionary;

@interface BiometricKitXPCExportedClientObject : NSObject
{
    unsigned long long _clientID;
    NSDictionary *_clientInfo;
    BiometricKitXPCExportedObject *_exportedObject;
    BOOL _delegateRegistered;
    BOOL _clientAppIsBackground;
    BOOL _clientAppIsInactive;
}

@property(readonly, nonatomic) BOOL clientAppIsInactive; // @synthesize clientAppIsInactive=_clientAppIsInactive;
@property(readonly, nonatomic) BOOL clientAppIsBackground; // @synthesize clientAppIsBackground=_clientAppIsBackground;
@property(readonly, nonatomic) BOOL delegateRegistered; // @synthesize delegateRegistered=_delegateRegistered;
@property(readonly, copy, nonatomic) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, nonatomic) unsigned long long clientID; // @synthesize clientID=_clientID;
- (void).cxx_destruct;
- (void)taskResumeStatus:(int)arg1;
- (void)templateUpdate:(id)arg1 details:(id)arg2;
- (void)touchIDButtonPressed:(BOOL)arg1;
- (void)homeButtonPressed;
- (void)statusMessage:(unsigned int)arg1 details:(id)arg2;
- (void)statusMessage:(unsigned int)arg1;
- (void)matchResult:(id)arg1 details:(id)arg2;
- (void)enrollFeedback:(id)arg1;
- (void)enrollUpdate:(id)arg1;
- (void)enrollResult:(id)arg1;
@property(readonly, nonatomic) __weak BiometricKitXPCExportedObject *exportedObject;
- (void)setClientAppIsInactive:(BOOL)arg1;
- (void)setClientAppIsBackground:(BOOL)arg1;
- (void)setDelegateRegistered:(BOOL)arg1;
- (id)description;
- (id)initWithClientID:(unsigned long long)arg1 clientInfo:(id)arg2 exportedObject:(id)arg3;

@end

