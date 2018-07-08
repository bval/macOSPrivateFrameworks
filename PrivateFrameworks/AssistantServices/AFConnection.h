//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFAccessibilityListening.h"
#import "AFAudioPowerUpdaterDelegate.h"
#import "AFDeviceRingerSwitchListening.h"
#import "NSXPCListenerDelegate.h"

@class AFAudioPowerUpdater, AFClientConfiguration, AFClockAlarmSnapshot, AFClockTimerSnapshot, AFConnectionLocationManager, AFOneArgumentSafetyBlock, NSArray, NSError, NSMutableDictionary, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSUUID, NSXPCConnection;

@interface AFConnection : NSObject <NSXPCListenerDelegate, AFAudioPowerUpdaterDelegate, AFAccessibilityListening, AFDeviceRingerSwitchListening>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSString *_outstandingRequestClass;
    NSArray *_cachedBulletins;
    AFClockAlarmSnapshot *_cachedClockAlarmSnapshot;
    AFClockTimerSnapshot *_cachedClockTimerSnapshot;
    NSUUID *_activeRequestUUID;
    long long _activeRequestType;
    long long _activeRequestUsefulUserResultType;
    NSObject<OS_dispatch_source> *_requestTimeoutTimer;
    AFOneArgumentSafetyBlock *_requestCompletion;
    NSMutableDictionary *_replyHandlerForAceId;
    unsigned int _stateInSync:1;
    unsigned int _shouldSpeak:1;
    unsigned int _isCapturingSpeech:1;
    unsigned int _hasOutstandingRequest:1;
    AFAudioPowerUpdater *_inputAudioPowerUpdater;
    AFClientConfiguration *_clientConfiguration;
    unsigned int _clientConfigurationIsInSync:1;
    unsigned int _voiceOverIsActive:1;
    NSError *_lastRetryError;
    unsigned long long _pendingSpeechRequestCounter;
    NSObject<OS_dispatch_group> *_speechCallbackGroup;
    AFConnectionLocationManager *_locationManager;
    id <AFAssistantUIService> _delegate;
    id <AFSpeechDelegate> _speechDelegate;
}

+ (void)defrost;
+ (id)outputVoice;
+ (id)currentLanguageCode;
+ (void)stopMonitoringAvailability;
+ (BOOL)isAvailable;
+ (void)beginMonitoringAvailability;
+ (BOOL)assistantIsSupported;
+ (BOOL)siriIsSupportedForLanguageCode:(id)arg1 productName:(id)arg2 productVersion:(id)arg3 error:(id *)arg4;
+ (BOOL)siriIsSupportedForLanguageCode:(id)arg1 deviceProductVersion:(id)arg2 error:(id *)arg3;
+ (BOOL)assistantIsSupportedForLanguageCode:(id)arg1 error:(id *)arg2;
+ (void)initialize;
+ (BOOL)userDataSyncNeeded;
@property(nonatomic) __weak id <AFSpeechDelegate> speechDelegate; // @synthesize speechDelegate=_speechDelegate;
@property(nonatomic) __weak id <AFAssistantUIService> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)acquireUserInteractionAssertion;
- (void)_speechRecordingDidFailWithError:(id)arg1;
- (void)adviseSessionArbiterToContinueWithPreviousWinner:(BOOL)arg1;
- (void)updateSpeechSynthesisRecord:(id)arg1;
- (void)endUpdateOutputAudioPower;
- (void)beginUpdateOutputAudioPowerWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopAllAudioPlaybackRequests:(BOOL)arg1;
- (void)stopAudioPlaybackRequest:(id)arg1 immediately:(BOOL)arg2;
- (void)startAudioPlaybackRequest:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkLanguageReady:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)willPresentUsefulUserResultWithType:(long long)arg1 forCommand:(id)arg2;
- (void)willPresentUsefulUserResultWithType:(long long)arg1;
- (void)usefulUserResultWillPresent;
- (void)telephonyRequestCompleted;
- (void)prepareForPhoneCall;
- (void)setAlertContextWithClockTimerSnapshot:(id)arg1;
- (void)setAlertContextWithClockAlarmSnapshot:(id)arg1;
- (void)setAlertContextWithBulletins:(id)arg1;
- (void)setOverriddenApplicationContext:(id)arg1 withContext:(id)arg2;
- (void)setApplicationContextForApplicationInfos:(id)arg1;
- (void)setApplicationContextForApplicationInfos:(id)arg1 withRefId:(id)arg2;
- (void)setApplicationContext:(id)arg1;
- (void)willSetApplicationContextWithRefId:(id)arg1;
- (void)clearContext;
- (void)getRemoteClockTimerSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)getCachedObjectsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getDeferredObjectsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendReplyCommand:(id)arg1;
- (void)sendGenericAceCommand:(id)arg1 conflictHandler:(CDUnknownBlockType)arg2;
- (void)sendGenericAceCommand:(id)arg1;
- (float)peakPower;
- (float)averagePower;
- (BOOL)shouldSpeak;
@property(readonly, nonatomic) BOOL hasActiveRequest;
@property(readonly, nonatomic) BOOL isRecording;
- (void)rollbackRequest;
- (void)rollbackClearContext;
- (void)recordRequestMetric:(id)arg1 withTimestamp:(double)arg2;
- (void)recordUIMetrics:(id)arg1;
- (void)updateSpeechOptions:(id)arg1;
- (void)stopSpeechWithOptions:(id)arg1;
- (void)stopSpeech;
- (void)reportIssueForError:(id)arg1 type:(long long)arg2 context:(id)arg3;
- (void)failRequestWithError:(id)arg1;
- (void)cancelRequest;
- (void)cancelSpeech;
- (void)startAcousticIDRequestWithOptions:(id)arg1;
- (void)startSpeechPronunciationRequestWithOptions:(id)arg1 pronunciationContext:(id)arg2;
- (CDUnknownBlockType)startRecordingAndGetContinueBlockForPendingSpeechRequestWithOptions:(id)arg1;
- (void)startRecordingForPendingSpeechRequestWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startSpeechRequestWithOptions:(id)arg1;
- (void)_startRequestWithAceCommand:(id)arg1 suppressAlert:(BOOL)arg2;
- (void)_startRequestWithInfo:(id)arg1;
- (void)startRequestWithInfo:(id)arg1 activationEvent:(long long)arg2;
- (void)startRequestWithInfo:(id)arg1;
- (void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2 userSelectionResults:(id)arg3;
- (void)startRequestWithAceCommand:(id)arg1;
- (void)startContinuationRequestWithUserInfo:(id)arg1;
- (void)startDirectActionRequestWithString:(id)arg1;
- (void)startRequestWithText:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setVoiceOverIsActive:(BOOL)arg1;
- (void)setMyriadDecisionResult:(BOOL)arg1;
- (void)setShouldWaitForMyriad:(BOOL)arg1;
- (void)setDeviceRingerSwitchState:(long long)arg1;
- (void)setIsAccessibilityVibrationDisabled:(BOOL)arg1;
- (void)setIsAccessibilityVoiceOverTouchEnabled:(BOOL)arg1;
- (void)setCarDNDActive:(BOOL)arg1;
- (void)setIsDeviceInStarkMode:(BOOL)arg1;
- (void)setIsStark:(BOOL)arg1;
- (void)setLockState:(BOOL)arg1 screenLocked:(BOOL)arg2;
- (void)didDismissUI;
- (void)willPresentUI;
- (void)resumeInterruptedAudioPlaybackIfNeeded;
- (void)forceAudioSessionInactiveWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceAudioSessionInactive;
- (void)forceAudioSessionActiveWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceAudioSessionActive;
- (void)boostedPreheatWithStyle:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)preheatWithStyle:(long long)arg1 forOptions:(id)arg2;
- (void)preheatWithStyle:(long long)arg1;
- (void)invalidate;
- (void)endSession;
- (void)_willPresentUsefulUserResultWithType:(long long)arg1;
- (void)_willCompleteRequest;
- (void)_willFailRequestWithError:(id)arg1;
- (void)_willCancelRequest;
- (void)_willEndSession;
- (void)_willStartRequestWithSpeech:(BOOL)arg1 analyticsEventProvider:(CDUnknownBlockType)arg2;
- (void)_updateClientConfiguration;
- (void)_updateState;
- (void)_updateStateIfNotInSync;
- (void)_extendExistingRequestTimeout;
- (void)_extendRequestTimeout;
- (void)_cancelRequestTimeout;
- (void)_invokeRequestTimeout;
- (void)_scheduleRequestTimeout;
- (id)_connection;
- (void)_clearConnection;
- (void)_connectionFailedWithError:(id)arg1;
- (void)deviceRingerObserver:(id)arg1 didChangeState:(long long)arg2;
- (void)accessibilityObserver:(id)arg1 didChangeVibrationDisabledPreference:(BOOL)arg2;
- (void)accessibilityObserver:(id)arg1 didChangeVoiceOverTouchEnabledPreference:(BOOL)arg2;
- (void)audioPowerUpdaterDidUpdate:(id)arg1 averagePower:(float)arg2 peakPower:(float)arg3;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;
- (void)_tellSpeechDelegateSpeechRecognizedPartialResult:(id)arg1;
- (void)_tellSpeechDelegateDidRecognizePhrases:(id)arg1 utterances:(id)arg2;
- (void)_tellSpeechDelegateRecognitionUpdateWillBeginForTask:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidFinishRecognitionUpdateWithError:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidUpdateRecognitionPhrases:(id)arg1 utterances:(id)arg2 refId:(id)arg3;
- (void)_tellSpeechDelegateRecognizedAdditionalSpeechInterpretation:(id)arg1 refId:(id)arg2;
- (void)_tellSpeechDelegateSpeechRecognized:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateToPerformTwoShotPromptWithType:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_tellSpeechDelegateRecordingDidDetectStartpoint;
- (void)_tellSpeechDelegateRecordingDidChangeAVRecordRoute:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidBeginOnAVRecordRoute:(id)arg1;
- (void)_tellSpeechDelegateRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1;
- (void)_dispatchCallbackGroupBlock:(CDUnknownBlockType)arg1;
- (void)_tellDelegateAudioSessionDidBecomeActive:(BOOL)arg1;
- (void)_tellDelegateAudioSessionWillBecomeActive:(BOOL)arg1;
- (void)_tellDelegateStartPlaybackDidFail:(long long)arg1;
- (void)_tellDelegateWillProcessStartPlayback:(long long)arg1;
- (void)_tellDelegateAudioPlaybackRequestDidStop:(id)arg1 error:(id)arg2;
- (void)_tellDelegateAudioPlaybackRequestDidNotStart:(id)arg1 error:(id)arg2;
- (void)_tellDelegateAudioPlaybackRequestDidStart:(id)arg1;
- (void)_tellDelegateAudioPlaybackRequestWillStart:(id)arg1;
- (void)_tellDelegateAudioSessionDidEndInterruption:(BOOL)arg1;
- (void)_tellDelegateAudioSessionDidBeginInterruption;
- (void)_tellDelegateExtensionRequestFinishedForApplication:(id)arg1 error:(id)arg2;
- (void)_tellDelegateExtensionRequestWillStartForApplication:(id)arg1;
- (void)_tellDelegateCacheImage:(id)arg1;
- (void)_tellDelegateInvalidateCurrentUserActivity;
- (void)_tellDelegateSetUserActivityInfo:(id)arg1 webpageURL:(id)arg2;
- (void)_tellDelegateDidFinishAcousticIDRequestWithSuccess:(BOOL)arg1;
- (void)_tellDelegateDidDetectMusic;
- (void)_tellDelegateWillStartAcousticIDRequest;
- (void)_tellDelegateShouldSpeakChanged:(BOOL)arg1;
- (void)_completeRequestWithUUID:(id)arg1 error:(id)arg2;
- (void)_tellDelegateRequestWillStart;
- (void)_stopInputAudioPowerUpdates;
- (BOOL)_startInputAudioPowerUpdatesWithXPCWrapper:(id)arg1;
- (void)_aceConnectionWillRetryOnError:(id)arg1;
- (void)_setShouldSpeak:(BOOL)arg1;
- (void)_doCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_startUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_requestDidEnd;
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2 isBackgroundRequest:(BOOL)arg3 analyticsEventProvider:(CDUnknownBlockType)arg4;
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2 analyticsEventProvider:(CDUnknownBlockType)arg3;
- (void)_checkAndSetIsCapturingSpeech:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithTargetQueue:(id)arg1;
- (void)sendFeedbackToAppPreferencesPredictorForMetricsContext:(id)arg1 selectedBundleId:(id)arg2;
- (void)requestBarrier:(CDUnknownBlockType)arg1;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 isNarrowBand:(BOOL)arg2;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1;
- (void)startUIRequest;
- (id)_clientConfiguration;
- (id)_cachedClockTimerSnapshot;
- (id)_cachedClockAlarmSnapshot;
- (id)_cachedBulletins;
- (id)_clientServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_clientService;
- (void)_clearAssistantInfoForAccountWithIdentifier:(id)arg1;
- (void)_barrier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

