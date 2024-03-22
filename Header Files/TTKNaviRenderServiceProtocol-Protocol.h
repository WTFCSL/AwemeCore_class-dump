//
//     Generated by private class-dump
//

@class NSDictionary, NSArray, UIView;

@protocol TTKNaviRenderServiceProtocol <NSObject>

@property (readonly, weak, nonatomic) UIView *placeholderView;
@property (readonly, copy, nonatomic) NSDictionary *tracePerfDict;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } recordingSize;
@property (readonly, nonatomic) BOOL relyPackedMessage;
@property (readonly, nonatomic) UIView *renderView;
@property (copy, nonatomic) NSArray *initialFeatures;

- (void)cancelRecord;
- (void)setMusicWithURL:(id)arg0 completion:(id /* block */)arg1;
- (void)musicPlay;
- (void)musicPause;
- (void)musicStop;
- (void)setMusicNeedRepeat:(BOOL)arg0;
- (void)removePlayer;
- (unsigned long long)currentFPS;
- (id)initWithScale:(double)arg0 fps:(long long)arg1;
- (id)initWithFixSize:(struct CGSize { double x0; double x1; })arg0 fps:(long long)arg1;
- (void)startRendering;
- (void)sendPackedMessage;
- (void)setRelyPackedMessage:(BOOL)arg0;
- (void)onWaitingPackedMessagesReady:(id /* block */)arg0;
- (void)updatePreventPreviewGesture:(BOOL)arg0;
- (void)switchToPerspectiveWithClassTabIndex:(long long)arg0;
- (void)sendResetTypeMessage:(long long)arg0 target:(long long)arg1;
- (void)rebuidRecorderCompletion:(id /* block */)arg0;
- (BOOL)isRebuilded;
- (void)releaseRecorderCompletion:(id /* block */)arg0;
- (void)captureImage:(unsigned long long)arg0 params:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (void)captureAvatarWithCompletion:(id /* block */)arg0;
- (void)captureSharingWithCompletion:(id /* block */)arg0;
- (void)startRecordVideoWithCompletion:(id /* block */)arg0;
- (void)startRecordVideoWithBeginning:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)applyAvatarBusinessEffectWithContextModel:(id)arg0 scene:(unsigned long long)arg1;
- (void)applyPrefabMessage:(id)arg0;
- (void)applyGeneralMessageTuple:(id)arg0;
- (void)applySimpleMessageType:(id)arg0;
- (BOOL)isValidTimer;
- (void)coverCaptureBlink:(id)arg0 completion:(id /* block */)arg1;
- (id)recorderIdentity;
- (id)tracePerfDict;
- (struct CGSize { double x0; double x1; })recordingSize;
- (BOOL)relyPackedMessage;
- (id)initialFeatures;
- (void)setInitialFeatures:(id)arg0;
- (id)placeholderView;
- (void)addObserver:(id)arg0;
- (BOOL)pluginLoaded;
- (void)setPlaceholderView:(id)arg0;
- (void)resumeTimer;
- (void)removeObserver:(id)arg0;
- (void)updateBackgroundColor:(id)arg0;
- (id)renderView;
- (void)snapshotWithCompletion:(id /* block */)arg0;
- (void)pauseRendering;

@end