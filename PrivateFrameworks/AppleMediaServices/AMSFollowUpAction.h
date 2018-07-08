//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, NSURLRequest;

@interface AMSFollowUpAction : NSObject
{
    NSMutableDictionary *_userInfo;
    NSString *_identifier;
    NSString *_label;
    NSURL *_url;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_actionQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *actionQueue; // @synthesize actionQueue=_actionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) NSString *label; // @synthesize label=_label;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)_setUserInfoProperty:(id)arg1 forKey:(id)arg2;
- (id)postMetricsWithBagContract:(id)arg1;
- (id)performActionsWithContract:(id)arg1 account:(id)arg2;
- (id)generateAction;
@property(retain) NSMutableDictionary *userInfo;
@property BOOL requiresFollowUpUI;
@property(retain) NSURLRequest *request;
@property(retain) NSDictionary *metrics;
@property(retain) NSString *logKey;
- (id)initWithAction:(id)arg1;
- (id)initWithLabel:(id)arg1;

@end

