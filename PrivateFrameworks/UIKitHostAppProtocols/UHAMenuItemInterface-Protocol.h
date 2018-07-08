//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ROCKForwardingInterposableWithRunLoop.h"
#import "ROCKImpersonateable.h"

@class NSString;

@protocol UHAMenuItemInterface <ROCKImpersonateable, ROCKForwardingInterposableWithRunLoop>
@property(copy, nonatomic) NSString *hostActionName;
@property(copy, nonatomic) NSString *actionName;
@property(nonatomic) unsigned long long targetSearchScopeMask;
@property(retain, nonatomic) id <UHAMenuInterface> submenu;
@property(nonatomic) long long state;
@property(nonatomic, getter=isReplacedBySubmenuItems) BOOL replacedBySubmenuItems;
@property(nonatomic, getter=isSeparatorItem) BOOL separatorItem;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(nonatomic, getter=isAlternate) BOOL alternate;
@property(nonatomic) unsigned long long keyEquivalentModifiers;
@property(copy, nonatomic) NSString *keyEquivalent;
@property(copy, nonatomic) NSString *title;
@end

