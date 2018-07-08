//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitHostAppServices/UHASToolbarItem.h>

#import "UHAShareToolbarItemInterface.h"

@class NSArray, NSString;

@interface UHASShareToolbarItem : UHASToolbarItem <UHAShareToolbarItemInterface>
{
    NSArray *_activityItems;
    BOOL _enabled;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(copy, nonatomic) NSArray *activityItems;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType changeHandler;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) const struct __CFString *forwardingInterposableRunLoopMode;
@property(readonly, nonatomic) double forwardingInterposableRunLoopTimeOut;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *label;
@property(readonly) Class superclass;

@end

