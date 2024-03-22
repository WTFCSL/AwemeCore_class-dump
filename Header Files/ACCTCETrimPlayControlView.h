//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView, UIButton;
@protocol ACCAdvanceEditMainTrackActionServiceProtocol, ACCTrimCropSequencePieceServiceProtocol, IESServiceProvider, ACCTCETrimAdjustEditServiceProtocol, ACCTrimCropPieceProtocol, ACCTrimCropEditorFlagProtocol, ACCTCETrackEventServiceProtocol;

@interface ACCTCETrimPlayControlView : UIView <ACCEditPreviewMessageProtocol, ACCAdvanceEditMainTrackActionDelegate, ACCTCETrimAdjustEditActionDelegate, ACCTrimCropSequencePieceServiceListener, ACCTrimPlayControlService> {
    BOOL _isForVideoClipRangePanel;
    id<IESServiceProvider> _serviceProvider;
    id<ACCTrimCropSequencePieceServiceProtocol> _sequencePieceService;
    id<ACCTrimCropPieceProtocol> _piece;
    id<ACCAdvanceEditMainTrackActionServiceProtocol> _mainTrackActionService;
    id<ACCTCETrimAdjustEditServiceProtocol> _adjustEditService;
    id<ACCTCETrackEventServiceProtocol> _trackEventService;
    id<ACCTrimCropEditorFlagProtocol> _editorFlagService;
    UIButton *_playButton;
    UILabel *_currentTimeLabel;
    UILabel *_timeSplitLabel;
    UILabel *_totalDuration;
    UIView *_timeLabel;
    UIView *_backToAllMaterialView;
    UIImageView *_backToAllIcon;
    UILabel *_backToAllLabel;
}

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (weak, nonatomic) id<ACCTrimCropPieceProtocol> piece;
@property (weak, nonatomic) id<ACCAdvanceEditMainTrackActionServiceProtocol> mainTrackActionService;
@property (weak, nonatomic) id<ACCTCETrimAdjustEditServiceProtocol> adjustEditService;
@property (weak, nonatomic) id<ACCTCETrackEventServiceProtocol> trackEventService;
@property (weak, nonatomic) id<ACCTrimCropEditorFlagProtocol> editorFlagService;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UILabel *currentTimeLabel;
@property (retain, nonatomic) UILabel *timeSplitLabel;
@property (retain, nonatomic) UILabel *totalDuration;
@property (retain, nonatomic) UIView *timeLabel;
@property (retain, nonatomic) UIView *backToAllMaterialView;
@property (retain, nonatomic) UIImageView *backToAllIcon;
@property (retain, nonatomic) UILabel *backToAllLabel;
@property (nonatomic) BOOL isForVideoClipRangePanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (void)playerCurrentPlayTimeChanged:(double)arg0;
- (id)sequencePieceService;
- (void)mainTrackDidExtendByUser;
- (void)mainTrackDidStoreByUser;
- (void)mainTrackLongPressGestureBegin;
- (void)mainTrackLongPressGestureEnd;
- (void)trimClipTimeRangeByUser;
- (void)setSequencePieceService:(id)arg0;
- (id)piece;
- (void)setPiece:(id)arg0;
- (id)mainTrackActionService;
- (id)trackEventService;
- (void)setMainTrackActionService:(id)arg0;
- (void)setTrackEventService:(id)arg0;
- (id)adjustEditService;
- (void)sequencePieceService:(id)arg0 didTransferToIndex:(long long)arg1 isAutoTransfer:(BOOL)arg2;
- (id)editorFlagService;
- (void)removeObserverForTrim;
- (void)setupObserverForTrim;
- (void)adjustClipRangePanelShow;
- (void)adjustClipRangePanelDismiss;
- (void)setAdjustEditService:(id)arg0;
- (void)setEditorFlagService:(id)arg0;
- (id)backToAllMaterialView;
- (id)timeSplitLabel;
- (id)backToAllLabel;
- (id)backToAllIcon;
- (void)updateTimeLabelInfo;
- (void)playButtonClickAction:(id)arg0;
- (void)backToAllClick:(id)arg0;
- (void)changePlayButtonSelectedStatus:(id)arg0;
- (void)trackEventPlayWith:(BOOL)arg0;
- (void)trackEventBackToAll;
- (BOOL)isForVideoClipRangePanel;
- (void)updateTimeLabelInfoForTrimSlotIndex:(long long)arg0 showSourceDuration:(BOOL)arg1;
- (void)setIsForVideoClipRangePanel:(BOOL)arg0;
- (void)switchTrimPlayerStatus;
- (void)setTimeSplitLabel:(id)arg0;
- (void)setBackToAllMaterialView:(id)arg0;
- (void)setBackToAllIcon:(id)arg0;
- (void)setBackToAllLabel:(id)arg0;
- (id)totalDuration;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (id)currentTimeLabel;
- (void)setTimeLabel:(id)arg0;
- (id)initWithServiceProvider:(id)arg0;
- (id)serviceProvider;
- (void)setCurrentTimeLabel:(id)arg0;
- (id)timeLabel;
- (void)setupUI;
- (id)playButton;
- (void)setTotalDuration:(id)arg0;
- (void)setPlayButton:(id)arg0;

@end