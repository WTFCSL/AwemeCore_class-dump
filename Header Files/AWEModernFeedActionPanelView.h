//
//     Generated by private class-dump
//

@class AWEModernFeedActionButton, NSString, LOTAnimationView, AWEModernFeedActionPanelFrame, AWEAwemeModel, UILabel;
@protocol AWEFeedVideoSingleCardLayoutAdjusterProtocol;

@interface AWEModernFeedActionPanelView : UIView {
    BOOL _favoriteAnimationInProgress;
    id /* block */ _likeBtnClickedBlock;
    id /* block */ _commentBtnClickedBlock;
    id /* block */ _favoriteBtnClickedBlock;
    id /* block */ _repostBtnClickedBlock;
    id /* block */ _shareBtnClickedBlock;
    id<AWEFeedVideoSingleCardLayoutAdjusterProtocol> _qualityLayoutAdjuster;
    LOTAnimationView *_likeAnimationView;
    LOTAnimationView *_favoriteAnimationView;
    AWEModernFeedActionPanelFrame *_panelFrame;
    AWEAwemeModel *_model;
    UILabel *_timeInfoLabel;
    AWEModernFeedActionButton *_likeButton;
    AWEModernFeedActionButton *_commentButton;
    AWEModernFeedActionButton *_favoriteButton;
    AWEModernFeedActionButton *_repostButton;
    AWEModernFeedActionButton *_shareButton;
    unsigned long long _layoutType;
    long long _interactiveStyle;
    NSString *_accessKey;
}

@property (retain, nonatomic) LOTAnimationView *likeAnimationView;
@property (retain, nonatomic) LOTAnimationView *favoriteAnimationView;
@property (nonatomic) BOOL favoriteAnimationInProgress;
@property (weak, nonatomic) AWEModernFeedActionPanelFrame *panelFrame;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UILabel *timeInfoLabel;
@property (retain, nonatomic) AWEModernFeedActionButton *likeButton;
@property (retain, nonatomic) AWEModernFeedActionButton *commentButton;
@property (retain, nonatomic) AWEModernFeedActionButton *favoriteButton;
@property (retain, nonatomic) AWEModernFeedActionButton *repostButton;
@property (retain, nonatomic) AWEModernFeedActionButton *shareButton;
@property (nonatomic) unsigned long long layoutType;
@property (nonatomic) long long interactiveStyle;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) id /* block */ likeBtnClickedBlock;
@property (copy, nonatomic) id /* block */ commentBtnClickedBlock;
@property (copy, nonatomic) id /* block */ favoriteBtnClickedBlock;
@property (copy, nonatomic) id /* block */ repostBtnClickedBlock;
@property (copy, nonatomic) id /* block */ shareBtnClickedBlock;
@property (retain, nonatomic) id<AWEFeedVideoSingleCardLayoutAdjusterProtocol> qualityLayoutAdjuster;

- (void)updateDiggCount;
- (id)commentButton;
- (id)showStringFromNumber:(id)arg0;
- (id /* block */)commentBtnClickedBlock;
- (id /* block */)likeBtnClickedBlock;
- (void)setLikeBtnClickedBlock:(id /* block */)arg0;
- (void)setCommentBtnClickedBlock:(id /* block */)arg0;
- (void)setCommentButton:(id)arg0;
- (void)setupSubviewContent;
- (void)setPanelFrame:(id)arg0;
- (void)updateFavoriteCount;
- (void)configDefaultStyleWithFrame:(id)arg0;
- (void)recoverButtonUIStyle:(id)arg0;
- (BOOL)shouldActionButtonShowZeroNumber;
- (void)_setupShareButtonDefaultImage;
- (id /* block */)favoriteBtnClickedBlock;
- (id /* block */)shareBtnClickedBlock;
- (void)_stopLikeAnimation;
- (void)_playLikeAnimation;
- (void)announceAccessibility:(id)arg0;
- (void)_playDislikeAnimation;
- (void)_stopFavoriteAnimation;
- (void)_playFavoriteAnimation;
- (void)_playUnFavoriteAnimation;
- (id)panelFrame;
- (BOOL)favoriteAnimationInProgress;
- (void)setLikeAnimationView:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })likeAnimationFrame;
- (id)likeAnimationView;
- (void)setFavoriteAnimationView:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })favoriteAnimationFrame;
- (id)favoriteAnimationView;
- (void)setFavoriteAnimationInProgress:(BOOL)arg0;
- (void)configWithFrame:(id)arg0;
- (void)adjustButtonUIStyle:(id)arg0;
- (void)updateLayoutWithFrame:(id)arg0;
- (void)playLikeAnimation;
- (void)playDislikeAnimation;
- (void)playFavoriteAnimation;
- (void)playUnFavoriteAnimation;
- (void)setFavoriteBtnClickedBlock:(id /* block */)arg0;
- (void)setShareBtnClickedBlock:(id /* block */)arg0;
- (id)timeInfoLabel;
- (void)setTimeInfoLabel:(id)arg0;
- (long long)interactiveStyle;
- (void)setInteractiveStyle:(long long)arg0;
- (id)qualityLayoutAdjuster;
- (void)setQualityLayoutAdjuster:(id)arg0;
- (void)updateAwemeModel:(id)arg0;
- (id)substituteForBriefModel:(id)arg0;
- (void)setRepostBtnClickedBlock:(id /* block */)arg0;
- (id)repostButton;
- (void)setNewStyleToActionButton:(id)arg0;
- (id /* block */)repostBtnClickedBlock;
- (void)setRepostButton:(id)arg0;
- (void)configFriendStyleWithFrame:(id)arg0;
- (void)setTimelabelTextWithLabel:(id)arg0 frame:(id)arg1;
- (id)lottieDatafromGecko:(id)arg0;
- (void)setModel:(id)arg0;
- (unsigned long long)layoutType;
- (void)setLayoutType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (id)favoriteButton;
- (void)setFavoriteButton:(id)arg0;
- (id)likeButton;
- (void)setLikeButton:(id)arg0;
- (id)shareButton;
- (void)setShareButton:(id)arg0;

@end