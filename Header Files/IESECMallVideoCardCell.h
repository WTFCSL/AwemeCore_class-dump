//
//     Generated by private class-dump
//

@class UILongPressGestureRecognizer, NSString, UIView, IESECMallVideoCardView, IESECMallFeedbackMaskView;

@interface IESECMallVideoCardCell : IESECMallNativeCardCell <IESECMallCollectionCellPlayerContainer, IESECMallVideoCardViewDelegate, IESECMallNativeCardCellWithProduct> {
    IESECMallFeedbackMaskView *_feedbackCoverView;
    IESECMallVideoCardView *_videoCardView;
    UILongPressGestureRecognizer *_longPressGesture;
}

@property (retain, nonatomic) IESECMallFeedbackMaskView *feedbackCoverView;
@property (retain, nonatomic) IESECMallVideoCardView *videoCardView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *productView;

- (double)currentPlayTime;
- (id)videoData;
- (id)awemeId;
- (BOOL)isValidVideo;
- (id)playTimeLabel;
- (id)containerForAwemePlay;
- (id)currentBridgeCallHanderForCards;
- (id)videoCardView;
- (void)setVideoCardView:(id)arg0;
- (void)updateVoiceMute:(BOOL)arg0;
- (id)defaultXBridges;
- (id)productView;
- (void)addLongPressGesture:(id)arg0;
- (void)updateUIWithItemStyle:(id)arg0;
- (void)updateWithWindVaneData:(id)arg0;
- (id)feedbackCoverView;
- (void)sendClickNoti:(id)arg0;
- (id)mainVideoURL;
- (id)mainVideoDuration;
- (id)coverImageViewForAwemePlay;
- (id)playerInnerListEnvID;
- (BOOL)isCellMute;
- (BOOL)shouldRepeatForVideo;
- (BOOL)canSetMute;
- (void)setupFeedbackView;
- (void)setFeedbackCoverView:(id)arg0;
- (id)longPressGesture;
- (id)nickname;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (unsigned long long)cellType;
- (void)setLongPressGesture:(id)arg0;
- (void)setupView;
- (void)updateWithModel:(id)arg0;
- (void)setPlayerHidden:(BOOL)arg0;

@end
