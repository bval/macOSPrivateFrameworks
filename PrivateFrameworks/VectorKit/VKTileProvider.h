//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VKLRUCacheDelegate.h"
#import "VKTileSourceClient.h"

@class GEOResourceManifestConfiguration, GEOTileKeyList, NSArray, NSLocale, NSMutableSet, NSSet, NSString, VKMapRasterizer, VKTileCache, VKTileKeyList, VKTileSource, VKTimer, _VKTileProviderTimerTarget;

__attribute__((visibility("hidden")))
@interface VKTileProvider : NSObject <VKLRUCacheDelegate, VKTileSourceClient>
{
    id <VKTileProviderClient> _client;
    int _mode;
    struct unique_ptr<md::TileSelector, std::__1::default_delete<md::TileSelector>> _tileSelector;
    VKTileKeyList *_keysInView;
    VKTileKeyList *_neighborKeys;
    VKTileKeyList *_prefetchKeys;
    VKTimer *_evaluationTimer;
    double _lastFetchTime;
    double _lastSelectTime;
    double _lastHoleLogTime;
    VKTimer *_prefetchTimer;
    NSMutableSet *_tilesToRender;
    NSArray *_holes;
    NSMutableSet *_lostTiles;
    NSMutableSet *_fallbackTiles;
    NSMutableSet *_neighborTiles;
    unsigned long long _neighborMode;
    unsigned char _fallbackFunction;
    BOOL _useStableFallback;
    VKTileKeyList *_previousTiles;
    BOOL _prefetchEnabled;
    VKTileCache *_tilePool;
    VKTileSource *_tilesSources[33];
    VKTileSource *_optionalTileSources[33];
    shared_ptr_a3c46825 _styleManager;
    float _loadingProgress;
    BOOL _hasFailedTile;
    BOOL _finishedLoading;
    BOOL _finishedLoadingOptionalLayers;
    struct VKCameraState _lastCameraState;
    struct CGSize _lastCanvasSize;
    BOOL _tilesChanged;
    BOOL _tileProviderHasBadTiles;
    VKMapRasterizer *_rasterizer;
    id <VKMapLayer> _debugLayer;
    GEOTileKeyList *_debugLayerKeys;
    unsigned long long _tileReserveLimit;
    unsigned int _prefetchNumberOfScreens;
    BOOL _useSmallTileCache;
    float _lastMidDisplayZoomLevel;
    CDStruct_34734122 _sortPoint;
    double _contentScale;
    vector_6d9977eb _exclusionAreas;
    BOOL _exclusionAreaVisible;
    _VKTileProviderTimerTarget *_evaluationTarget;
    _VKTileProviderTimerTarget *_prefetchTarget;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
    shared_ptr_e963992e _taskContext;
    BOOL _enableIntegrityCheck;
    double _minTimeInLoadingState;
    double _maxTimeInLoadingState;
    double _integrityInternval;
    double _lastIntegrityCheckLog;
}

@property(readonly, nonatomic) BOOL hasFailedTile; // @synthesize hasFailedTile=_hasFailedTile;
@property(readonly, nonatomic, getter=isFinishedLoadingOptionalLayers) BOOL finishedLoadingOptionalLayers; // @synthesize finishedLoadingOptionalLayers=_finishedLoadingOptionalLayers;
@property(readonly, nonatomic, getter=isFinishedLoading) BOOL finishedLoading; // @synthesize finishedLoading=_finishedLoading;
@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property(readonly, nonatomic) GEOTileKeyList *debugLayerKeys; // @synthesize debugLayerKeys=_debugLayerKeys;
@property(retain, nonatomic) id <VKMapLayer> debugLayer; // @synthesize debugLayer=_debugLayer;
@property(readonly, nonatomic) float loadingProgress; // @synthesize loadingProgress=_loadingProgress;
@property(nonatomic) shared_ptr_a3c46825 styleManager; // @synthesize styleManager=_styleManager;
@property(readonly, nonatomic) NSSet *neighborTiles; // @synthesize neighborTiles=_neighborTiles;
@property(readonly, nonatomic) NSSet *tilesToRender; // @synthesize tilesToRender=_tilesToRender;
@property(readonly, nonatomic) VKTileKeyList *neighborKeys; // @synthesize neighborKeys=_neighborKeys;
@property(readonly, nonatomic) VKTileKeyList *keysInView; // @synthesize keysInView=_keysInView;
@property(nonatomic, getter=isPrefetchEnabled) BOOL prefetchEnabled; // @synthesize prefetchEnabled=_prefetchEnabled;
@property(nonatomic) unsigned long long neighborMode; // @synthesize neighborMode=_neighborMode;
@property(nonatomic) BOOL useStableFallback; // @synthesize useStableFallback=_useStableFallback;
@property(nonatomic) unsigned char fallbackFunction; // @synthesize fallbackFunction=_fallbackFunction;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) id <VKTileProviderClient> client; // @synthesize client=_client;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (void)willStartLoadingTiles;
- (long long)tileSource:(id)arg1 overrideForMaximumZoomLevel:(long long)arg2;
- (BOOL)tileSource:(id)arg1 keyIsNeeded:(const struct VKTileKey *)arg2;
- (void)dirtyTilesFromTileSource:(id)arg1 withState:(unsigned long long)arg2;
- (void)dirtyTilesFromTileSource:(id)arg1;
- (void)tileSource:(id)arg1 dirtyTilesWithinRect:(const Box_3d7e3c2c *)arg2 level:(long long)arg3;
- (void)_dirtyTile:(id)arg1 source:(id)arg2 layer:(unsigned char)arg3;
- (void)dirtyTile:(const struct VKTileKey *)arg1 source:(id)arg2;
- (void)invalidateTilesFromTileSource:(id)arg1;
- (void)tileSource:(id)arg1 invalidateTilesWithStatePredicate:(CDUnknownBlockType)arg2;
- (void)tileSource:(id)arg1 invalidateKeys:(id)arg2;
- (void)tileSource:(id)arg1 didFailToLoadTileForKey:(const struct VKTileKey *)arg2 error:(id)arg3;
- (void)tileSource:(id)arg1 didFailToDecodeTileForKey:(const struct VKTileKey *)arg2;
- (void)tileSource:(id)arg1 didFetchTile:(id)arg2 forKey:(const struct VKTileKey *)arg3;
- (void)updateWithContext:(struct LayoutContext *)arg1 selectionScale:(float)arg2;
- (void)logPersistentHoles;
- (id)describeReasonForTileBeingHole:(id)arg1 atTime:(double)arg2;
- (double)timeTileLastUpdatedHoleStatus:(id)arg1;
- (_Bool)tile:(id)arg1 hasBecomeTerminalSince:(double)arg2;
- (void)_disableTimers;
- (void)_updateTimers:(int)arg1;
- (id)selectTiles:(int *)arg1 needRasterization:(char *)arg2;
- (void)_fillHoles:(id)arg1 context:(struct LayoutContext *)arg2;
- (void)bestAccuracyFallbackForHoles:(id)arg1 context:(struct LayoutContext *)arg2 previousTiles:(id)arg3;
- (void)rescindOverlappedTiles;
- (void)releaseBestAccuracyFallbackTilesForTile:(id)arg1 context:(struct LayoutContext *)arg2 previousTiles:(id)arg3;
- (void)timerFired:(id)arg1;
- (void)_prefetchTiles;
- (void)cancelLoadForMapTile:(id)arg1;
- (void)_fetchAvailableTiles:(BOOL)arg1;
- (void)configureTileSelection;
- (void)_resizeCache;
- (unsigned char)layerForSource:(id)arg1;
- (id)sourceForLayer:(unsigned char)arg1;
- (id)sourceForMapLayer:(id)arg1;
- (void)removeTileSourceForMapLayer:(unsigned char)arg1;
- (void)setTileSource:(id)arg1 forMapLayer:(unsigned char)arg2 optional:(BOOL)arg3;
- (void)invalidateRasterizedTiles;
- (void)tileSourcesDidChange;
- (BOOL)cache:(id)arg1 willEvictObject:(id)arg2 forKey:(const struct VKCacheKey *)arg3;
- (BOOL)evaluateSelectedTileForRendering:(id)arg1;
- (BOOL)evaluateNeighborTileForRendering:(id)arg1;
- (void)changeTileForKey:(const struct VKTileKey *)arg1 toState:(unsigned long long)arg2 withMetadata:(id)arg3 withTile:(id)arg4 forLayer:(unsigned char)arg5;
- (unsigned long long)_tileStateForKey:(const struct VKTileKey *)arg1 forLayer:(unsigned char)arg2;
- (BOOL)tileMatters:(id)arg1;
- (void)releaseFallbackTileForRendering:(id)arg1;
- (BOOL)canRenderTile:(id)arg1;
- (BOOL)hasAllTileData:(id)arg1;
- (BOOL)hasRequiredTileData:(id)arg1;
- (BOOL)inFailedState:(id)arg1;
- (void)rescindTileForRendering:(id)arg1;
- (void)releaseTileForRendering:(id)arg1;
- (void)releaseNeighborTileForRendering:(id)arg1;
- (void)prepareTileForRendering:(id)arg1;
- (void)retireNeighborTiles:(id)arg1;
- (void)retireRenderTiles:(id)arg1;
- (id)tileForKey:(const struct VKTileKey *)arg1;
- (void)foreachActiveLayer:(CDUnknownBlockType)arg1;
- (void)foreachOptionalLayer:(CDUnknownBlockType)arg1;
- (void)populateDebugNodeForKeys:(shared_ptr_eafb90f9)arg1 keys:(id)arg2;
- (void)populateDebugNodeForTiles:(shared_ptr_eafb90f9)arg1 tiles:(id)arg2;
- (void)populateDebugNode:(shared_ptr_eafb90f9)arg1;
- (id)detailedDescriptionDictionaryRepresentation;
- (id)detailedDescription;
- (void)logIntegrityCheck;
- (BOOL)checkMapTileIntegrity:(id)arg1 errors:(id)arg2;
- (void)describeTilesFromList:(id)arg1 outputtoDict:(id)arg2;
- (void)describeTilesFromList:(id)arg1 output:(id)arg2;
- (void)tileStatusFromList:(id)arg1 canRender:(out id *)arg2 canNotRender:(out id *)arg3;
- (void)cancelLoadingTiles;
- (void)flushCaches:(BOOL)arg1;
- (void)clearScene;
- (void)rasterizer:(id)arg1 didMakeRasterTile:(id)arg2 forKey:(const struct VKTileKey *)arg3;
- (void)requireRasterization:(id)arg1;
- (void)dealloc;
- (void)quiesce;
- (id)initWithClient:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 taskContext:(shared_ptr_e963992e)arg4 tileSelectionProfile:(unique_ptr_6bf34eb3 *)arg5;
@property(nonatomic) double lodBias;
- (BOOL)tileExclusionAreaVisible;
- (void)setTileExclusionAreas:(const vector_6d9977eb *)arg1;
@property(readonly, nonatomic) NSArray *visibleTileSets;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

