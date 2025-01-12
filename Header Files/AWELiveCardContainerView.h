//
//     Generated by private class-dump
//

@class AWELiveCardBottomInfoView, AWELiveCardTopInfoView, UIImageView, AWELiveVSCustomTitleLable, AWELiveVSBottomBarView, UIView;

@interface AWELiveCardContainerView : UIView {
    BOOL _isPortraitStream;
    BOOL _didPlaySuccess;
    AWELiveCardTopInfoView *_topView;
    AWELiveCardBottomInfoView *_bottomView;
    AWELiveVSCustomTitleLable *_topTitle;
    AWELiveVSCustomTitleLable *_bottomTitle;
    AWELiveVSBottomBarView *_bottomBar;
    UIImageView *_topImageView;
    UIImageView *_bottomImageView;
    UIImageView *_cover;
    id /* block */ _tapAction;
    UIView *_playerWrapperView;
    long long _type;
    id /* block */ _clickIconAreaAction;
    unsigned long long _style;
    struct CGSize { double width; double height; } _updatedSize;
}

@property (nonatomic) struct CGSize { double width; double height; } updatedSize;
@property (nonatomic) BOOL isPortraitStream;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL didPlaySuccess;
@property (retain, nonatomic) AWELiveCardTopInfoView *topView;
@property (retain, nonatomic) AWELiveCardBottomInfoView *bottomView;
@property (retain, nonatomic) AWELiveVSCustomTitleLable *topTitle;
@property (retain, nonatomic) AWELiveVSCustomTitleLable *bottomTitle;
@property (retain, nonatomic) AWELiveVSBottomBarView *bottomBar;
@property (retain, nonatomic) UIImageView *topImageView;
@property (retain, nonatomic) UIImageView *bottomImageView;
@property (retain, nonatomic) UIImageView *cover;
@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) UIView *playerWrapperView;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ clickIconAreaAction;

- (id)cover;
- (void)setCover:(id)arg0;
- (id)topImageView;
- (void)setTopImageView:(id)arg0;
- (void)setIsPortraitStream:(BOOL)arg0;
- (void)setDidPlaySuccess:(BOOL)arg0;
- (id)createPlayerWrapperView;
- (void)setPlayerWrapperView:(id)arg0;
- (id)playerWrapperView;
- (void)addActionControlWithBottomView:(id)arg0;
- (void)_registerFontIfNeed;
- (void)setUpdatedSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)didPlaySuccess;
- (void)updatePlayerWithPortrait:(BOOL)arg0;
- (void)updatePlayerSize:(struct CGSize { double x0; double x1; })arg0 isPortraitStream:(BOOL)arg1 didPlaySuccess:(BOOL)arg2;
- (struct CGSize { double x0; double x1; })updatedSize;
- (BOOL)isPortraitStream;
- (void)p_updatePortraitStreamWithPlayerSize:(struct CGSize { double x0; double x1; })arg0;
- (void)p_updateLandscapeStreamWithPlayerSize:(struct CGSize { double x0; double x1; })arg0;
- (void)updateTitleToPotrait;
- (double)p_topOffSet;
- (void)updateTitleToLandscape;
- (BOOL)_isFontRegisted;
- (id /* block */)clickIconAreaAction;
- (void)addBlurrViewOnCoverView:(id)arg0;
- (void)resetPlayerWithPortrait:(BOOL)arg0;
- (void)resetCard;
- (void)showBottomBar:(BOOL)arg0;
- (void)showPlayerOnly:(BOOL)arg0;
- (void)setClickIconAreaAction:(id /* block */)arg0;
- (unsigned long long)style;
- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)arg0;
- (void)setBottomBar:(id)arg0;
- (long long)type;
- (void)setType:(long long)arg0;
- (id)bottomBar;
- (void)setStyle:(unsigned long long)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)topView;
- (id)bottomView;
- (void)setTopView:(id)arg0;
- (void)setBottomView:(id)arg0;
- (void)tapped:(id)arg0;
- (id)topTitle;
- (void)setTopTitle:(id)arg0;
- (id)bottomTitle;
- (void)setBottomTitle:(id)arg0;
- (void)addPlayerView:(id)arg0;
- (id /* block */)tapAction;
- (id)bottomImageView;
- (void)setBottomImageView:(id)arg0;
- (void)setTapAction:(id /* block */)arg0;

@end
