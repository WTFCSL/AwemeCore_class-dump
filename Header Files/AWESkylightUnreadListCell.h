//
//     Generated by private class-dump
//

@class NSArray, UIImageView, DUXButton, UIView, UIButton;
@protocol AWEFeedLiveMarkViewProtocol;

@interface AWESkylightUnreadListCell : AWEFollowListUserBaseCell {
    BOOL _showLive;
    BOOL _isTop;
    BOOL _isVSFirst;
    BOOL _watchVideoTextNew;
    BOOL _showMoreButton;
    BOOL _showArrowView;
    BOOL _isMine;
    BOOL _canShowSpecialAction;
    NSArray *_avatar168FromThumbnailURLs;
    id /* block */ _closeButtonTapAction;
    id /* block */ _alienationTapAction;
    UIView<AWEFeedLiveMarkViewProtocol> *_liveMarkView;
    DUXButton *_alienationButton;
    UIButton *_moreButton;
    UIButton *_closeButton;
    UIImageView *_liveMarkViewTag;
}

@property (retain, nonatomic) DUXButton *alienationButton;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *liveMarkViewTag;
@property (retain, nonatomic) NSArray *avatar168FromThumbnailURLs;
@property (nonatomic) BOOL showLive;
@property (nonatomic) BOOL isTop;
@property (nonatomic) BOOL isVSFirst;
@property (copy, nonatomic) id /* block */ closeButtonTapAction;
@property (copy, nonatomic) id /* block */ alienationTapAction;
@property (nonatomic) BOOL watchVideoTextNew;
@property (nonatomic) BOOL showMoreButton;
@property (nonatomic) BOOL showArrowView;
@property (nonatomic) BOOL isMine;
@property (nonatomic) BOOL canShowSpecialAction;
@property (readonly, nonatomic) UIView *moreButtonView;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;

+ (id)defaultImage;

- (void)avatarClicked;
- (void)closeButtonClicked;
- (void)setFansTagArray:(id)arg0;
- (void)setIsTop:(BOOL)arg0;
- (id)liveMarkView;
- (id)liveMarkViewTag;
- (void)setLiveMarkViewTag:(id)arg0;
- (void)setShowLive:(BOOL)arg0;
- (BOOL)showLive;
- (void)setLiveMarkView:(id)arg0;
- (id)moreButtonView;
- (void)__moreButtonClicked;
- (void)setAvatar168FromThumbnailURLs:(id)arg0;
- (id)avatar168FromThumbnailURLs;
- (double)iconImageviewWidth;
- (void)__enterLiveRoom;
- (BOOL)isVSFirst;
- (void)liveMaskViewShowIfNeeded:(BOOL)arg0 onView:(id)arg1;
- (void)setShowArrowView:(BOOL)arg0;
- (void)setIsVSFirst:(BOOL)arg0;
- (BOOL)showArrowView;
- (id)alienationButton;
- (void)__alienationButtonClicked;
- (id /* block */)alienationTapAction;
- (void)showGuidePopover;
- (void)setAlienationTapAction:(id /* block */)arg0;
- (BOOL)watchVideoTextNew;
- (void)setWatchVideoTextNew:(BOOL)arg0;
- (void)setAlienationButton:(id)arg0;
- (BOOL)canShowSpecialAction;
- (void)setCanShowSpecialAction:(BOOL)arg0;
- (void)setCloseButtonTapAction:(id /* block */)arg0;
- (id /* block */)closeButtonTapAction;
- (void).cxx_destruct;
- (id)moreButton;
- (BOOL)showMoreButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setMoreButton:(id)arg0;
- (void)setShowMoreButton:(BOOL)arg0;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (BOOL)isMine;
- (void)setIsMine:(BOOL)arg0;
- (BOOL)isTop;

@end