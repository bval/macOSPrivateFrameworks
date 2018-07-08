//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraSnapshotIDSRelay.h>

#import "HMFLogging.h"
#import "IDSServiceDelegate.h"
#import "IDSSessionDelegate.h"

@class HMDCameraIDSSessionInviterDeviceVerifier, HMDSnapshotFile, IDSSession, NSMutableData, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface HMDCameraSnapshotIDSRelayReceiver : HMDCameraSnapshotIDSRelay <IDSServiceDelegate, IDSSessionDelegate, HMFLogging>
{
    HMDSnapshotFile *_snapshotFile;
    NSMutableData *_relayData;
    unsigned long long _bytesToReceive;
    unsigned long long _bytesSoFar;
    NSObject<OS_dispatch_source> *_socketSource;
    IDSSession *_idsSession;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <HMDCameraSnapshotIDSRelayReceiverDelegate> _delegate;
    HMDCameraIDSSessionInviterDeviceVerifier *_sessionInviterDeviceVerifier;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDCameraIDSSessionInviterDeviceVerifier *sessionInviterDeviceVerifier; // @synthesize sessionInviterDeviceVerifier=_sessionInviterDeviceVerifier;
@property(readonly, nonatomic) __weak id <HMDCameraSnapshotIDSRelayReceiverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) IDSSession *idsSession; // @synthesize idsSession=_idsSession;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *socketSource; // @synthesize socketSource=_socketSource;
@property(nonatomic) unsigned long long bytesSoFar; // @synthesize bytesSoFar=_bytesSoFar;
@property(nonatomic) unsigned long long bytesToReceive; // @synthesize bytesToReceive=_bytesToReceive;
@property(retain, nonatomic) NSMutableData *relayData; // @synthesize relayData=_relayData;
@property(readonly, nonatomic) HMDSnapshotFile *snapshotFile; // @synthesize snapshotFile=_snapshotFile;
- (void).cxx_destruct;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;
- (void)_callFileReceived:(id)arg1;
- (void)dealloc;
- (id)_postProcessFileData;
- (void)_handleDataFromSocket:(id)arg1;
- (void)_startFileReceive;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 sessionInviterDeviceVerifier:(id)arg3 snapshotFile:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

