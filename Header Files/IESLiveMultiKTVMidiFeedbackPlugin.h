//
//     Generated by private class-dump
//

@class NSString, NSTimer, IESLiveMultiKTVApi, NSNumber, UIView;
@protocol IESLiveMultiKTVStageProvider;

@interface IESLiveMultiKTVMidiFeedbackPlugin : NSObject <IESLiveSEIListener, IESLiveMultiKTVStageActions, IESLiveMultiKTVStagePluginProtocol> {
    BOOL _isActive;
    BOOL _readyToUploadAlog;
    BOOL _isRoomAnchor;
    IESLiveMultiKTVApi *_api;
    NSTimer *_hideTimer;
    NSNumber *_remotePlayingMusicID;
    NSNumber *_reportMusicID;
    UIView *_feedbackView;
    id /* block */ _hideAction;
    long long _isCPUOptimize;
    id<IESLiveMultiKTVStageProvider> _multiKTVStageProvider;
    double _duration;
}

@property (retain, nonatomic) IESLiveMultiKTVApi *api;
@property (retain, nonatomic) NSTimer *hideTimer;
@property (retain, nonatomic) NSNumber *remotePlayingMusicID;
@property (retain, nonatomic) NSNumber *reportMusicID;
@property (retain, nonatomic) UIView *feedbackView;
@property (copy, nonatomic) id /* block */ hideAction;
@property (nonatomic) BOOL readyToUploadAlog;
@property (nonatomic) long long isCPUOptimize;
@property (nonatomic) BOOL isRoomAnchor;
@property (weak, nonatomic) id<IESLiveMultiKTVStageProvider> multiKTVStageProvider;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isActive;

- (void)didSetAttachingDIContext;
- (void)setHideTimer:(id)arg0;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)arg0;
- (void)setIsCPUOptimize:(long long)arg0;
- (long long)isCPUOptimize;
- (void)updateListenerPlayingTime:(double)arg0;
- (BOOL)isMidiFeedBackShowing;
- (BOOL)enableUGCMV;
- (id)remotePlayingMusicID;
- (void)setRemotePlayingMusicID:(id)arg0;
- (void)reportMidiScoreIfNeeded;
- (void)didDeactivated;
- (void)updateSingerPlayingTime:(double)arg0;
- (void)updateKTVStageState:(unsigned long long)arg0;
- (void)updateRemotePlayingMusicID:(id)arg0;
- (void)updatePlayingUser:(id)arg0;
- (id)multiKTVStageProvider;
- (void)setMultiKTVStageProvider:(id)arg0;
- (id)currentPlayMusic;
- (id)currentMusicID;
- (void)p_hideHotAndRankView;
- (void)setIsRoomAnchor:(BOOL)arg0;
- (void)setReadyToUploadAlog:(BOOL)arg0;
- (BOOL)isRoomAnchor;
- (BOOL)readyToUploadAlog;
- (void)setReportMusicID:(id)arg0;
- (void)showMidiFeedbackViewWithData:(id)arg0 orderInfo:(id)arg1 score:(double)arg2;
- (void)p_showFeedbackViewWithResult:(id)arg0;
- (void)p_showFeedbackRecordViewWithResult:(id)arg0;
- (void)p_closeHideTimer;
- (void)showMidiFeedbackViewWithSEI:(id)arg0;
- (id)reportMusicID;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (double)duration;
- (BOOL)isActive;
- (void)setDuration:(double)arg0;
- (id)hideTimer;
- (id)feedbackView;
- (void)setFeedbackView:(id)arg0;
- (id /* block */)hideAction;
- (void)setHideAction:(id /* block */)arg0;
- (id)api;
- (void)setApi:(id)arg0;

@end
