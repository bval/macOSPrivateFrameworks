//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VCTransportStream : NSObject
{
    unsigned int _transportSessionID;
    int _vtpReceiveSocket;
    int _vtpCancelSocket;
    struct tagVCMediaQueue *_mediaQueue;
}

@property(nonatomic) struct tagVCMediaQueue *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
- (void)VCTransportStreamUnblock;
- (int)receivePacket:(CDStruct_88f6cd69 *)arg1;
- (int)VCTransportStreamSendPacket:(CDStruct_88f6cd69 *)arg1;
- (void)dealloc;
- (id)initWithTransportSessionID:(unsigned int)arg1 options:(id)arg2;

@end

