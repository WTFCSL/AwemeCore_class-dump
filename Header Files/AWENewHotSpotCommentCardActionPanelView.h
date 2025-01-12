//
//     Generated by private class-dump
//

@class LOTAnimationView, AWENewHotSpotCommentActionPanelFrame, AWENewHotSpotFeedCardModel, AWENewHotSpotCommentCardActionButton;

@interface AWENewHotSpotCommentCardActionPanelView : UIView {
    id /* block */ _likeBtnClickedBlock;
    id /* block */ _commentBtnClickedBlock;
    id /* block */ _shareBtnClickedBlock;
    LOTAnimationView *_likeAnimationView;
    AWENewHotSpotCommentActionPanelFrame *_panelFrame;
    AWENewHotSpotFeedCardModel *_cardModel;
    AWENewHotSpotCommentCardActionButton *_likeButton;
    AWENewHotSpotCommentCardActionButton *_commentButton;
    AWENewHotSpotCommentCardActionButton *_shareButton;
    long long _interactiveStyle;
}

@property (retain, nonatomic) LOTAnimationView *likeAnimationView;
@property (weak, nonatomic) AWENewHotSpotCommentActionPanelFrame *panelFrame;
@property (weak, nonatomic) AWENewHotSpotFeedCardModel *cardModel;
@property (retain, nonatomic) AWENewHotSpotCommentCardActionButton *likeButton;
@property (retain, nonatomic) AWENewHotSpotCommentCardActionButton *commentButton;
@property (retain, nonatomic) AWENewHotSpotCommentCardActionButton *shareButton;
@property (nonatomic) long long interactiveStyle;
@property (copy, nonatomic) id /* block */ likeBtnClickedBlock;
@property (copy, nonatomic) id /* block */ commentBtnClickedBlock;
@property (copy, nonatomic) id /* block */ shareBtnClickedBlock;

- (void)updateCommentCount;
- (id)cardModel;
- (void)setCardModel:(id)arg0;
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
- (void)_setupShareButtonDefaultImage;
- (id /* block */)shareBtnClickedBlock;
- (void)_stopLikeAnimation;
- (void)_playLikeAnimation;
- (void)announceAccessibility:(id)arg0;
- (void)_playDislikeAnimation;
- (id)panelFrame;
- (void)setLikeAnimationView:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })likeAnimationFrame;
- (id)likeAnimationView;
- (void)configWithFrame:(id)arg0;
- (void)updateLayoutWithFrame:(id)arg0;
- (void)playLikeAnimation;
- (void)playDislikeAnimation;
- (void)setShareBtnClickedBlock:(id /* block */)arg0;
- (void)updateShareCount;
- (long long)interactiveStyle;
- (void)setInteractiveStyle:(long long)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)likeButton;
- (void)setLikeButton:(id)arg0;
- (id)shareButton;
- (void)setShareButton:(id)arg0;

@end
