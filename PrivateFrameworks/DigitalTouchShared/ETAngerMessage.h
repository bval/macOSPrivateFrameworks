//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DigitalTouchShared/ETMessage.h>

@class NSMutableArray, SKSpriteNode;

@interface ETAngerMessage : ETMessage
{
    SKSpriteNode *_anger;
    NSMutableArray *_points;
    NSMutableArray *_delays;
    double _duration;
    struct CGPoint _normalizedCenter;
}

+ (unsigned short)messageType;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) struct CGPoint normalizedCenter; // @synthesize normalizedCenter=_normalizedCenter;
- (void).cxx_destruct;
- (double)messageDuration;
- (id)messageTypeAsString;
- (void)setNormalizedPoint:(struct CGPoint)arg1 atRelativeTime:(double)arg2 inScene:(id)arg3;
- (void)stopPlaying;
- (void)_updateCenterFromNormalizedPoint:(struct CGPoint)arg1 inScene:(id)arg2;
- (void)displayInScene:(id)arg1;
- (id)archiveData;
- (id)initWithArchiveData:(id)arg1;
- (id)init;

@end

