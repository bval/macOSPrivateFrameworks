//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NearField/NFSession.h>

#import "NFReaderSessionCallbacks.h"

@class NFWeakReference, NSString;

@interface NFReaderSession : NFSession <NFReaderSessionCallbacks>
{
    NFWeakReference *_delegate;
}

- (id)felicaRequestService:(id)arg1 error:(id *)arg2;
- (unsigned int)runScript:(id)arg1 parameters:(id)arg2 results:(id *)arg3;
- (id)felicaStateForSystemCode:(id)arg1 withRequestService:(id)arg2 withBlockReadList:(id)arg3 performSearchServiceCode:(BOOL)arg4 error:(id *)arg5;
- (id)felicaStateForSystemCode:(id)arg1 withRequestService:(id)arg2 withBlockReadList:(id)arg3 performSearchServiceCode:(BOOL)arg4;
- (id)felicaStateWithError:(id *)arg1;
- (id)felicaState;
- (id)transceive:(id)arg1 error:(id *)arg2;
- (id)transceive:(id)arg1;
- (id)ndefReadWithError:(id *)arg1;
- (id)ndefRead;
- (BOOL)ndefWrite:(id)arg1 error:(id *)arg2;
- (BOOL)ndefWrite:(id)arg1;
- (BOOL)formatNdefWithKey:(id)arg1 error:(id *)arg2;
- (BOOL)formatNdefWithKey:(id)arg1;
- (BOOL)checkPresenceWithError:(id *)arg1;
- (BOOL)checkPresence;
- (BOOL)checkNdefSupportsRead:(char *)arg1 andWrite:(char *)arg2 error:(id *)arg3;
- (BOOL)checkNdefSupportsRead:(char *)arg1 andWrite:(char *)arg2;
- (BOOL)disconnectTagWithError:(id *)arg1;
- (BOOL)disconnectTag;
- (BOOL)connectTag:(id)arg1 error:(id *)arg2;
- (BOOL)connectTag:(id)arg1;
- (BOOL)stopPollingWithError:(id *)arg1;
- (BOOL)stopPolling;
- (BOOL)startPollingForTechnology:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)startPollingForTechnology:(unsigned int)arg1;
- (BOOL)startPollingWithError:(id *)arg1;
- (BOOL)startPolling;
- (void)didEndUnexpectedly;
- (void)didDetectExternalReaderWithNotification:(id)arg1;
- (void)didDetectTags:(id)arg1;
- (void)didTerminate:(id)arg1;
- (void)endSession;
@property id <NFReaderSessionDelegate> delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

