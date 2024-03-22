//
//     Generated by private class-dump
//

@class UILongPressGestureRecognizer, IESECMallLiveCardView, NSString, UIView, IESECMallFeedbackMaskView;

@interface IESECMallLiveCardCell : IESECMallNativeCardCell <IESECMallCollectionCellPlayerContainer, IESECMallLiveCardViewDelegate, IESECMallNativeCardCellWithProduct> {
    IESECMallFeedbackMaskView *_feedbackCoverView;
    IESECMallLiveCardView *_liveCardView;
    UILongPressGestureRecognizer *_longPressGesture;
}

@property (retain, nonatomic) IESECMallFeedbackMaskView *feedbackCoverView;
@property (retain, nonatomic) IESECMallLiveCardView *liveCardView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *productView;

- (void)cellDidEndDisplay;
- (id)awemeId;
- (BOOL)isValidVideo;
- (void)didDisAppear;
- (id)liveModel;
- (id)containerForAwemePlay;
- (id)currentBridgeCallHanderForCards;
- (void)cellWillDisplay:(BOOL)arg0;
- (void)updateVoiceMute:(BOOL)arg0;
- (id)defaultXBridges;
- (id)productView;
- (void)addLongPressGesture:(id)arg0;
- (id)liveCardView;
- (void)setLiveCardView:(id)arg0;
- (void)updateUIWithItemStyle:(id)arg0;
- (void)updateWithWindVaneData:(id)arg0;
- (id)feedbackCoverView;
- (void)sendClickNoti:(id)arg0;
- (id)mainVideoURL;
- (id)mainStreamData;
- (id)mainVideoDuration;
- (id)playerInnerListEnvID;
- (BOOL)isCellMute;
- (BOOL)shouldRepeatForVideo;
- (BOOL)canSetMute;
- (void)refreshTagIcon;
- (void)setupFeedbackView;
- (id)liveCoverImageUrl;
- (void)setFeedbackCoverView:(id)arg0;
- (id)longPressGesture;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)didAppear;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (unsigned long long)cellType;
- (void)setLongPressGesture:(id)arg0;
- (void)setupView;
- (void)updateWithModel:(id)arg0;
- (void)setPlayerHidden:(BOOL)arg0;

@end
