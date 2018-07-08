//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSSet, NSString;

@interface PLClientLogger : NSObject
{
    BOOL _clientDebug;
    BOOL _talkToPowerlogHelper;
    BOOL _batchedTimerInFlight;
    BOOL _forceBatching;
    BOOL _batchDropMessages;
    int _batchedDropMessageCount;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_batchFlushQueue;
    NSString *_processName;
    NSMutableDictionary *_permissionCache;
    NSMutableDictionary *_pendingTaskCache;
    NSMutableArray *_batchedTaskCache;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
    NSObject<OS_dispatch_queue> *_xpcConnectionHelperQueue;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_xpc_object> *_xpcConnectionHelper;
    NSSet *_batchingClientWhitelist;
    NSObject<OS_dispatch_queue> *_adaptivePermissionWorkQueue;
}

+ (id)sharedInstance;
+ (BOOL)allowMessageOnDevice;
@property(retain) NSObject<OS_dispatch_queue> *adaptivePermissionWorkQueue; // @synthesize adaptivePermissionWorkQueue=_adaptivePermissionWorkQueue;
@property int batchedDropMessageCount; // @synthesize batchedDropMessageCount=_batchedDropMessageCount;
@property(readonly) NSSet *batchingClientWhitelist; // @synthesize batchingClientWhitelist=_batchingClientWhitelist;
@property BOOL batchDropMessages; // @synthesize batchDropMessages=_batchDropMessages;
@property BOOL forceBatching; // @synthesize forceBatching=_forceBatching;
@property BOOL batchedTimerInFlight; // @synthesize batchedTimerInFlight=_batchedTimerInFlight;
@property BOOL talkToPowerlogHelper; // @synthesize talkToPowerlogHelper=_talkToPowerlogHelper;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnectionHelper; // @synthesize xpcConnectionHelper=_xpcConnectionHelper;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain) NSObject<OS_dispatch_queue> *xpcConnectionHelperQueue; // @synthesize xpcConnectionHelperQueue=_xpcConnectionHelperQueue;
@property(retain) NSObject<OS_dispatch_queue> *xpcConnectionQueue; // @synthesize xpcConnectionQueue=_xpcConnectionQueue;
@property(retain) NSMutableArray *batchedTaskCache; // @synthesize batchedTaskCache=_batchedTaskCache;
@property(retain) NSMutableDictionary *pendingTaskCache; // @synthesize pendingTaskCache=_pendingTaskCache;
@property(retain) NSMutableDictionary *permissionCache; // @synthesize permissionCache=_permissionCache;
@property(retain) NSString *processName; // @synthesize processName=_processName;
@property(retain) NSObject<OS_dispatch_queue> *batchFlushQueue; // @synthesize batchFlushQueue=_batchFlushQueue;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property BOOL clientDebug; // @synthesize clientDebug=_clientDebug;
- (void).cxx_destruct;
- (id)queryForClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (void)batchTasksCacheFlush;
- (id)getWorkQueueForClientID:(short)arg1;
- (void)xpcSendMessageWithRateLimitingforClient:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (void)logForClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (short)blockedPermissionForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3 withTimeout:(unsigned long long)arg4;
- (void)permissionForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)xpcSendMessageWithReply:(id)arg1 withClientID:(short)arg2 withKey:(id)arg3 withPayload:(id)arg4;
- (void)xpcSendMessage:(id)arg1 withClientID:(short)arg2 withKey:(id)arg3 withPayload:(id)arg4;
- (id)xpcConnectionWithClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (id)pendingTasksForType:(id)arg1 forClientID:(short)arg2 forKey:(id)arg3;
- (void)addToBatchedTaskCacheForType:(id)arg1 forClientID:(short)arg2 forKey:(id)arg3 withPayload:(id)arg4;
- (int)batchSizeForClientID:(short)arg1;
- (void)addToPendingTaskCacheForType:(id)arg1 forClientID:(short)arg2 forKey:(id)arg3 withPayload:(id)arg4;
- (short)cachedPermissionForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3;
- (void)setCachePermission:(short)arg1 ForClientID:(short)arg2 withKey:(id)arg3 withType:(id)arg4;
- (id)buildMessageForClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (void)powerlogStateChanged;
- (void)logStateCaches;
- (id)init;

@end

