//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitHostAppServices/UHASRemoteObject.h>

#import "UHAMenuInterface.h"

@class NSArray, NSString;

@interface UHASMenu : UHASRemoteObject <UHAMenuInterface>
{
    NSString *title;
    NSArray *items;
}

@property(copy, nonatomic) NSArray *items; // @synthesize items;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) const struct __CFString *forwardingInterposableRunLoopMode;
@property(readonly, nonatomic) double forwardingInterposableRunLoopTimeOut;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

