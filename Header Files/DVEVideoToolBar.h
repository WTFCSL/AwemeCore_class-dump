//
//     Generated by private class-dump
//

@class DVEVCContext, NSString, UILabel, UIView, UIButton;
@protocol DVEFullScreenProtocol, DVETrackEventProtocol, DVEAlertViewProtocol, DVEComponentViewManagerProtocol, DVELoadingViewProtocol, DVECoreActionServiceProtocol, DVEEditConfigProtocol;

@interface DVEVideoToolBar : UIView <DVECoreActionDelegate> {
    BOOL _alreadyLongTime;
    DVEVCContext *_vcContext;
    UIButton *_fullScreenButton;
    UIButton *_undoButton;
    UIButton *_redoButton;
    UIButton *_playButton;
    id<DVEFullScreenProtocol> _delegate;
    UIView *_durationLable;
    UILabel *_currentTimeLable;
    UILabel *_maxTimeLable;
    UILabel *_timeSplitLable;
    UIView *_longTimeTip;
    UILabel *_longTimeLabel;
    id<DVELoadingViewProtocol> _loadingView;
    id<DVEAlertViewProtocol> _alertView;
    id<DVEEditConfigProtocol> _editConfig;
    id<DVEComponentViewManagerProtocol> _bottomComponentManager;
    id<DVETrackEventProtocol> _trackEventer;
    id<DVECoreActionServiceProtocol> _actionService;
    double _maxVideoExportSeconds;
}

@property (retain, nonatomic) UIView *durationLable;
@property (retain, nonatomic) UILabel *currentTimeLable;
@property (retain, nonatomic) UILabel *maxTimeLable;
@property (retain, nonatomic) UILabel *timeSplitLable;
@property (retain, nonatomic) UIView *longTimeTip;
@property (retain, nonatomic) UILabel *longTimeLabel;
@property (nonatomic) BOOL alreadyLongTime;
@property (weak, nonatomic) id<DVELoadingViewProtocol> loadingView;
@property (weak, nonatomic) id<DVEAlertViewProtocol> alertView;
@property (weak, nonatomic) id<DVEEditConfigProtocol> editConfig;
@property (weak, nonatomic) id<DVEComponentViewManagerProtocol> bottomComponentManager;
@property (weak, nonatomic) id<DVETrackEventProtocol> trackEventer;
@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (nonatomic) double maxVideoExportSeconds;
@property (retain, nonatomic) UIButton *fullScreenButton;
@property (retain, nonatomic) UIButton *undoButton;
@property (retain, nonatomic) UIButton *redoButton;
@property (retain, nonatomic) UIButton *playButton;
@property (weak, nonatomic) id<DVEFullScreenProtocol> delegate;
@property (weak, nonatomic) DVEVCContext *vcContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)actionService;
- (void)nleEditorDidChange;
- (id)trackEventer;
- (void)setTrackEventer:(id)arg0;
- (id)editConfig;
- (void)setEditConfig:(id)arg0;
- (BOOL)alreadyLongTime;
- (void)setAlreadyLongTime:(BOOL)arg0;
- (void)setActionService:(id)arg0;
- (void)buildLayout;
- (void)actionMethod:(id)arg0;
- (void)trackEventClickPlayButton;
- (id)vcContext;
- (void)setVcContext:(id)arg0;
- (id)bottomComponentManager;
- (void)setBottomComponentManager:(id)arg0;
- (void)hiddenButton:(BOOL)arg0;
- (id)durationLable;
- (id)longTimeTip;
- (id)currentTimeLable;
- (id)timeSplitLable;
- (id)maxTimeLable;
- (void)setMaxVideoExportSeconds:(double)arg0;
- (void)turnFullScreen;
- (double)maxVideoExportSeconds;
- (id)longTimeLabel;
- (void)trackEventOverlongVideo;
- (void)setLongTimeLabel:(id)arg0;
- (void)handleLongtimeTipTap;
- (long long)p_maxVideoExportMinutes;
- (void)playFromSlotStart;
- (void)setFullScreenButton:(id)arg0;
- (void)setDurationLable:(id)arg0;
- (void)setCurrentTimeLable:(id)arg0;
- (void)setMaxTimeLable:(id)arg0;
- (void)setTimeSplitLable:(id)arg0;
- (void)setLongTimeTip:(id)arg0;
- (void).cxx_destruct;
- (void)setAlertView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)play;
- (void)pause;
- (void)addObserver;
- (id)alertView;
- (void)updateVideoInfo;
- (id)playButton;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)undoButton;
- (void)setUndoButton:(id)arg0;
- (void)setPlayButton:(id)arg0;
- (id)fullScreenButton;
- (id)redoButton;
- (void)setRedoButton:(id)arg0;

@end