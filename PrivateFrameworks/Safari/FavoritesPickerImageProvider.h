//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSSiteMetadataImageCacheDelegate.h"
#import "WBSSiteMetadataProvider.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, WBSSiteMetadataImageCache;

__attribute__((visibility("hidden")))
@interface FavoritesPickerImageProvider : NSObject <WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider>
{
    NSMutableDictionary *_imageCacheKeysToRequests;
    NSMutableDictionary *_requestsToResponseStates;
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSSiteMetadataImageCache *_imageCache;
    BOOL _terminating;
    id <WBSSiteMetadataProviderDelegate> _providerDelegate;
}

+ (id)_sanitizeThemeColor:(id)arg1;
+ (id)sharedProvider;
@property(nonatomic) __weak id <WBSSiteMetadataProviderDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
- (void).cxx_destruct;
- (void)siteMetadataImageCache:(id)arg1 didRemoveImageFromCacheForKeyString:(id)arg2;
- (void)siteMetadataImageCache:(id)arg1 didFinishLoadingImage:(id)arg2 forKeyString:(id)arg3;
- (void)_setCachedImageThemeColor:(id)arg1 forRequestURL:(id)arg2;
- (id)_cachedImageThemeColorForRequestURL:(id)arg1;
- (void)_setCachedImageSource:(long long)arg1 forRequestURL:(id)arg2;
- (long long)_cachedImageSourceForRequestURL:(id)arg1;
- (void)_setCachedImage:(id)arg1 forURL:(id)arg2;
- (id)_cachedImageForRequest:(id)arg1;
- (id)_responseForResponseState:(id)arg1;
- (void)_handleSubResponse:(id)arg1 forRequest:(id)arg2;
- (void)_prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;
- (id)_responseStateForRequest:(id)arg1;
- (void)savePendingChangesBeforeTermination;
- (void)purgeUnneededCacheEntries;
- (void)emptyCaches;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(char *)arg2;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;
- (BOOL)canHandleRequest:(id)arg1;
- (void)releaseCachedImageForURLString:(id)arg1;
- (void)retainCachedImageForURLString:(id)arg1;
- (id)initWithCacheDirectoryURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL providesFavicons;
@property(readonly) Class superclass;

@end

