//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, NSUUID, RMAskForTimeRequest;

@protocol RMAskForTimeInterface <NSObject>
- (void)handleAnswer:(long long)arg1 requestIdentifier:(NSUUID *)arg2 timeApproved:(NSNumber *)arg3 completionHandler:(void (^)(void))arg4;
- (void)fetchLastResponseForRequestedResourceIdentifier:(NSString *)arg1 usageType:(long long)arg2 withCompletionHandler:(void (^)(long long, NSNumber *, NSError *))arg3;
- (void)approveExceptionForRequest:(RMAskForTimeRequest *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)sendAskForTimeRequest:(RMAskForTimeRequest *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

