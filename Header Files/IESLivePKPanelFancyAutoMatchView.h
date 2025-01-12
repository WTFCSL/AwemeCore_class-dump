//
//     Generated by private class-dump
//

@class NSString, UIImageView, NSDictionary, UILabel, UIView, IESLiveAnimatedImageView;
@protocol IESLiveWebPPlayer;

@interface IESLivePKPanelFancyAutoMatchView : UIView {
    BOOL _isStickyForNoFollower;
    BOOL _needShowMultiMatchView;
    BOOL _didEmojiAnimPlayed;
    BOOL _isBtnTitleAnimating;
    NSString *_autoMatchInfo;
    NSDictionary *_panelTrackParams;
    UIView *_noFollowerContainerView;
    UIImageView<IESLiveWebPPlayer> *_emojiAnimView;
    UIView *_buttonContainerView;
    UIView *_speedUpAutoMatchContainerView;
    UIView *_hasFollowerContainerView;
    UILabel *_autoMatchBtnLabel;
    IESLiveAnimatedImageView *_rivalAnimationView;
    IESLiveAnimatedImageView *_btnAnimationView;
}

@property (retain, nonatomic) UIView *noFollowerContainerView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *emojiAnimView;
@property (nonatomic) BOOL didEmojiAnimPlayed;
@property (retain, nonatomic) UIView *buttonContainerView;
@property (retain, nonatomic) UIView *speedUpAutoMatchContainerView;
@property (retain, nonatomic) UIView *hasFollowerContainerView;
@property (nonatomic) BOOL isBtnTitleAnimating;
@property (retain, nonatomic) UILabel *autoMatchBtnLabel;
@property (retain, nonatomic) IESLiveAnimatedImageView *rivalAnimationView;
@property (retain, nonatomic) IESLiveAnimatedImageView *btnAnimationView;
@property (nonatomic) BOOL isStickyForNoFollower;
@property (nonatomic) BOOL needShowMultiMatchView;
@property (copy, nonatomic) NSString *autoMatchInfo;
@property (copy, nonatomic) NSDictionary *panelTrackParams;

- (double)fitLength:(double)arg0;
- (id)autoMatchInfo;
- (void)setAutoMatchInfo:(id)arg0;
- (id)predictWaitStrWithSec:(long long)arg0;
- (id)panelTrackParams;
- (void)setPanelTrackParams:(id)arg0;
- (void)showEmojiAnimationIfNeeded;
- (void)setNeedShowMultiMatchView:(BOOL)arg0;
- (void)showAdvancedSpeedAutoMatchWithAutoMatchInfo:(id)arg0 isNewAnchor:(BOOL)arg1;
- (void)showSpeedAutoMatchWithAutoMatchInfo:(id)arg0;
- (void)showAutoMatchContent:(BOOL)arg0;
- (void)setIsStickyForNoFollower:(BOOL)arg0;
- (void)removeNoFollowerView;
- (void)removeSpeedUpAutoMatchContainerView;
- (void)showHasFollowerView;
- (void)removeHasFollowerView;
- (void)showNoFollowerView;
- (void)updateViewsForSticky;
- (id)speedUpAutoMatchContainerView;
- (void)setSpeedUpAutoMatchContainerView:(id)arg0;
- (void)didTapAutoMatchArea;
- (id)noFollowerContainerView;
- (id)rivalAnimationView;
- (void)didTapMultiPKMatchButton;
- (void)setAutoMatchBtnLabel:(id)arg0;
- (void)setBtnAnimationView:(id)arg0;
- (id)btnAnimationView;
- (void)doBtnTitleAnimation;
- (BOOL)needShowMultiMatchView;
- (id)autoMatchBtnLabel;
- (BOOL)didEmojiAnimPlayed;
- (id)emojiAnimView;
- (void)setDidEmojiAnimPlayed:(BOOL)arg0;
- (void)setNoFollowerContainerView:(id)arg0;
- (void)setEmojiAnimView:(id)arg0;
- (id)hasFollowerContainerView;
- (void)setHasFollowerContainerView:(id)arg0;
- (BOOL)isStickyForNoFollower;
- (BOOL)isBtnTitleAnimating;
- (void)setIsBtnTitleAnimating:(BOOL)arg0;
- (void)setRivalAnimationView:(id)arg0;
- (void).cxx_destruct;
- (id)buttonContainerView;
- (void)setButtonContainerView:(id)arg0;

@end
