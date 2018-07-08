//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOLogMessage, GEOLogMsgState, NSDictionary, NSObject<OS_dispatch_queue>;

@protocol GEOLogAdaptor <NSObject>
- (NSObject<OS_dispatch_queue> *)adaptorQueue;
- (BOOL)isLogFrameworkAdaptor;
- (void)flushLogs;
- (void)queueLogMessage:(GEOLogMessage *)arg1;
- (BOOL)acceptsLogMessageOfType:(int)arg1;

@optional
- (void)forceFlushLogs;
- (void)updateAdaptorPolicyConfiguration:(NSDictionary *)arg1;
- (void)unregisterLogMsgStateOfType:(int)arg1;
- (void)registerLogMsgState:(GEOLogMsgState *)arg1;
- (void)adaptorDidGetRemoved:(id <GEOLogAdaptor>)arg1;
- (void)adaptorWillGetRemoved:(id <GEOLogAdaptor>)arg1;
- (void)adaptorDidGetAdded:(id <GEOLogAdaptor>)arg1;
- (void)adaptorWillGetAdded:(id <GEOLogAdaptor>)arg1;
@end

