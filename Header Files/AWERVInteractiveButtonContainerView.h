//
//     Generated by private class-dump
//

@class UIStackView, NSString, AWEAwemeModel, AWERVDetailPageContext, AWERVDetailVideoActionButton;

@interface AWERVInteractiveButtonContainerView : UIView <AWEWatchVideoLaterMessage> {
    AWERVDetailVideoActionButton *_shareButton;
    AWERVDetailVideoActionButton *_commentBtn;
    AWERVDetailVideoActionButton *_rewardButton;
    id /* block */ _shareActionBlock;
    id /* block */ _commentActionBlock;
    id /* block */ _collectionActionBlock;
    id /* block */ _digActionBlock;
    id /* block */ _rewardActionBlock;
    id /* block */ _watchLaterBlock;
    UIStackView *_stackView;
    AWERVDetailVideoActionButton *_likeButton;
    AWERVDetailVideoActionButton *_collectBtn;
    AWERVDetailVideoActionButton *_watchLaterButton;
    AWERVDetailPageContext *_pageContext;
    AWEAwemeModel *_awemeModel;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) AWERVDetailVideoActionButton *likeButton;
@property (retain, nonatomic) AWERVDetailVideoActionButton *shareButton;
@property (retain, nonatomic) AWERVDetailVideoActionButton *commentBtn;
@property (retain, nonatomic) AWERVDetailVideoActionButton *collectBtn;
@property (retain, nonatomic) AWERVDetailVideoActionButton *rewardButton;
@property (retain, nonatomic) AWERVDetailVideoActionButton *watchLaterButton;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) id /* block */ shareActionBlock;
@property (copy, nonatomic) id /* block */ commentActionBlock;
@property (copy, nonatomic) id /* block */ collectionActionBlock;
@property (copy, nonatomic) id /* block */ digActionBlock;
@property (copy, nonatomic) id /* block */ rewardActionBlock;
@property (copy, nonatomic) id /* block */ watchLaterBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)updateCommentCount;
- (void)setAwemeModel:(id)arg0;
- (void)updateDiggCount;
- (void)bindObserver;
- (id)collectBtn;
- (void)setCollectBtn:(id)arg0;
- (void)updateShareCount;
- (void)didAddToWatchLater:(id)arg0;
- (void)updateCollectionCount;
- (void)handleWatchLaterInfoChangeNotification:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 pageContext:(id)arg1;
- (id)commentBtn;
- (void)onLikeButtonClicked;
- (void)playLottieAnimationView:(unsigned long long)arg0;
- (id /* block */)shareActionBlock;
- (id /* block */)commentActionBlock;
- (id /* block */)collectionActionBlock;
- (id /* block */)digActionBlock;
- (void)onCommentButtonClicked;
- (void)onCollectionButtonClicked;
- (void)onShareButtonClicked;
- (void)playCollectAnimation;
- (void)playUnCollectAnimation;
- (void)playDigAnimation;
- (void)playUnDigAnimation;
- (void)setShareActionBlock:(id /* block */)arg0;
- (void)setCommentActionBlock:(id /* block */)arg0;
- (void)setCollectionActionBlock:(id /* block */)arg0;
- (void)setDigActionBlock:(id /* block */)arg0;
- (id /* block */)rewardActionBlock;
- (void)setRewardActionBlock:(id /* block */)arg0;
- (void)setCommentBtn:(id)arg0;
- (void)updateRewardCount:(long long)arg0;
- (id)rewardButton;
- (id /* block */)watchLaterBlock;
- (id)watchLaterButton;
- (BOOL)shouldShowWatchLaterButton;
- (id)watchLaterButtonTitle;
- (id)createActionButtonWithImageName:(id)arg0 needHighlighted:(BOOL)arg1 tapBlock:(id /* block */)arg2;
- (void)rewardButtonClicked;
- (void)watchLaterButtonClicked;
- (void)trackWatchLaterShowIfNeeded;
- (void)updateInteractiveViewWithModel:(id)arg0;
- (double)interactiveButtonContainerViewHeight;
- (void)setRewardButton:(id)arg0;
- (void)setWatchLaterBlock:(id /* block */)arg0;
- (void)setWatchLaterButton:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)stackView;
- (void)setStackView:(id)arg0;
- (void)dealloc;
- (void)setupUI;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (id)likeButton;
- (void)setLikeButton:(id)arg0;
- (id)shareButton;
- (void)setShareButton:(id)arg0;

@end
