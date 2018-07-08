//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoginUIKit/LUI2ViewController.h>

@class NSDateFormatter, NSTextField, NSTimer;

@interface LUI2TimeViewController : LUI2ViewController
{
    id _target;
    SEL _action;
    NSTextField *_timeTextField;
    NSDateFormatter *_timeFormatter;
    NSTimer *_clockTimer;
    NSTimer *_dstTimer;
}

@property NSTimer *dstTimer; // @synthesize dstTimer=_dstTimer;
@property NSTimer *clockTimer; // @synthesize clockTimer=_clockTimer;
@property(retain) NSDateFormatter *timeFormatter; // @synthesize timeFormatter=_timeFormatter;
@property(retain) NSTextField *timeTextField; // @synthesize timeTextField=_timeTextField;
@property SEL action; // @synthesize action=_action;
@property id target; // @synthesize target=_target;
- (void)dealloc;
- (void)viewDidLoad;
- (void)resume;
- (void)pause;
- (void)mouseUp:(id)arg1;
- (id)_userTimeFormat;
- (void)_dstTick:(id)arg1;
- (void)_clockTick:(id)arg1;
- (id)_nextDSTFireDate;
- (id)_timeFont;

@end

