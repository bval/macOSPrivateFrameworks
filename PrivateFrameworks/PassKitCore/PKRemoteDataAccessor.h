//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKDataAccessor.h>

@class NSString, PKPassLibrary;

@interface PKRemoteDataAccessor : PKDataAccessor
{
    PKPassLibrary *_library;
    NSString *_objectUniqueID;
}

@property(readonly, nonatomic) NSString *objectUniqueID; // @synthesize objectUniqueID=_objectUniqueID;
@property(readonly, nonatomic) PKPassLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (id)displayProfileOfType:(long long)arg1;
- (id)archiveData;
- (id)dataForBundleResources:(id)arg1;
- (id)dataForBundleResource:(id)arg1;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;
- (void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5;
- (void)contentWithCompletion:(CDUnknownBlockType)arg1;
- (id)content;
- (void)requestUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSettings:(unsigned long long)arg1;
- (void)noteShared;
- (void)revocationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithLibrary:(id)arg1 objectUniqueID:(id)arg2;

@end

