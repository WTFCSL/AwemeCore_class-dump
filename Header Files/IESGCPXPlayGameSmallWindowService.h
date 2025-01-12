//
//     Generated by private class-dump
//

@class NSString, UIViewController;

@interface IESGCPXPlayGameSmallWindowService : NSObject <IESGCPDIContextSubscriber, IESGCPXPlayGameSmallWindowService> {
    BOOL _isVoiceOn;
    BOOL _isVideoOn;
    BOOL _isModified;
    BOOL _setMuteByManual;
    id /* block */ _windowTapAction;
    id /* block */ _windowHideAction;
    id /* block */ _onMuteStateChangedBlock;
    id /* block */ _onStateChangedBlock;
    UIViewController *_container;
    NSString *_storeResolutionKey;
}

@property (weak, nonatomic) UIViewController *container;
@property (nonatomic) BOOL isVoiceOn;
@property (nonatomic) BOOL isVideoOn;
@property (nonatomic) BOOL isModified;
@property (nonatomic) BOOL setMuteByManual;
@property (copy, nonatomic) NSString *storeResolutionKey;
@property (copy, nonatomic) id /* block */ windowTapAction;
@property (copy, nonatomic) id /* block */ windowHideAction;
@property (copy, nonatomic) id /* block */ onMuteStateChangedBlock;
@property (copy, nonatomic) id /* block */ onStateChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInLiveRoom;

- (void)setVoiceOn:(BOOL)arg0;
- (void)didSetGameCPDIContext;
- (void)pullStreamDidUpdateResolutionType:(id)arg0;
- (void)_unregisterGlobalSmallWindowServiceAllowList;
- (void)_registerGlobalSmallWindowServiceAllowList;
- (id)initWithDIContext:(id)arg0 container:(id)arg1;
- (void)setVideoOn:(BOOL)arg0;
- (void)syncCurrentState;
- (void)storeLiveStreamConfig;
- (void)restoreLiveStreamConfig;
- (long long)smallWindowState;
- (BOOL)isVoiceOn;
- (void)_updateVideoOn:(BOOL)arg0 voiceOn:(BOOL)arg1;
- (void)setIsVoiceOn:(BOOL)arg0;
- (void)setIsVideoOn:(BOOL)arg0;
- (void)setSetMuteByManual:(BOOL)arg0;
- (void)_switchStateToVideoOnVoiceOn;
- (void)_switchStateToVideoOnVoiceOff;
- (void)_switchStateToVideoOffVoiceOn;
- (void)_switchStateToVideoOffVoiceOff;
- (void)_trackDurationWithVideoOn:(BOOL)arg0 isVoiceOn:(BOOL)arg1;
- (id /* block */)onStateChangedBlock;
- (void)setStoreResolutionKey:(id)arg0;
- (void)_restoreLiveStreamResolution:(long long)arg0;
- (void)_resumeLiveStream;
- (id)storeResolutionKey;
- (void)_handleRestoreResolitionResult:(BOOL)arg0 error:(id)arg1 userInfo:(id)arg2 retryCount:(long long)arg3;
- (void)_showGlobalSmallWindow;
- (id /* block */)windowTapAction;
- (BOOL)setMuteByManual;
- (id /* block */)onMuteStateChangedBlock;
- (id /* block */)windowHideAction;
- (void)_switchSmallWindoToLowestLevelResolutionIfNeeded;
- (void)setWindowTapAction:(id /* block */)arg0;
- (void)setWindowHideAction:(id /* block */)arg0;
- (void)setOnMuteStateChangedBlock:(id /* block */)arg0;
- (void)setOnStateChangedBlock:(id /* block */)arg0;
- (id)container;
- (BOOL)isModified;
- (void).cxx_destruct;
- (void)setIsModified:(BOOL)arg0;
- (void)setContainer:(id)arg0;
- (void)clear;
- (void)dealloc;
- (BOOL)isVideoOn;

@end
