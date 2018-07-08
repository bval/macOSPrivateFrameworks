//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSString;

@protocol AKAnisetteServiceProtocol
- (void)legacyAnisetteDataForDSID:(NSString *)arg1 withCompletion:(void (^)(AKAnisetteData *, NSError *))arg2;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 withCompletion:(void (^)(AKAnisetteData *, NSError *))arg2;
- (void)eraseAnisetteWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)syncAnisetteWithSIMData:(NSData *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)provisionAnisetteWithCompletion:(void (^)(BOOL, NSError *))arg1;
@end

