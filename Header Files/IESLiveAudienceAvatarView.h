//
//     Generated by private class-dump
//

@class HTSEventContext, UISwipeGestureRecognizer, NSString, HTSLiveAvatarImageView, HTSLivePaddingLabel, UIButton, UIPanGestureRecognizer, IESLiveAudienceModel;
@protocol IESLiveRankListModule, IESLiveGiftModuleGiftInterface;

@interface IESLiveAudienceAvatarView : UIView <UIGestureRecognizerDelegate, IESLiveRecycleView> {
    BOOL _optAudienceAvatarRefresh;
    NSString *recycleViewType;
    IESLiveAudienceModel *_audience;
    id /* block */ _actionBlock;
    id<IESLiveRankListModule> _rankListModule;
    id<IESLiveGiftModuleGiftInterface> _giftInterface;
    HTSLiveAvatarImageView *_avatarView;
    HTSLivePaddingLabel *_paddingLabel;
    HTSEventContext *_trackContext;
    UIButton *_actionButton;
    UIPanGestureRecognizer *_panGesture;
    UISwipeGestureRecognizer *_swipteGesture;
}

@property (nonatomic) BOOL optAudienceAvatarRefresh;
@property (retain, nonatomic) id<IESLiveRankListModule> rankListModule;
@property (retain, nonatomic) id<IESLiveGiftModuleGiftInterface> giftInterface;
@property (retain, nonatomic) HTSLiveAvatarImageView *avatarView;
@property (retain, nonatomic) HTSLivePaddingLabel *paddingLabel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UISwipeGestureRecognizer *swipteGesture;
@property (retain, nonatomic) IESLiveAudienceModel *audience;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *recycleViewType;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)setupSubViews;
- (id)giftInterface;
- (id)rankListModule;
- (void)setRankListModule:(id)arg0;
- (void)setOptAudienceAvatarRefresh:(BOOL)arg0;
- (id)labelForContribute;
- (void)setPaddingLabel:(id)arg0;
- (void)actionFire:(id)arg0;
- (id)paddingLabel;
- (BOOL)optAudienceAvatarRefresh;
- (id)pathWithUrlString:(id)arg0;
- (BOOL)matchOldUrlArray:(id)arg0 currentUrlArray:(id)arg1;
- (id)handleLabelStr:(id)arg0 audience:(id)arg1;
- (id)recycleViewType;
- (void)setRecycleViewType:(id)arg0;
- (void)setGiftInterface:(id)arg0;
- (id)swipteGesture;
- (void)setSwipteGesture:(id)arg0;
- (id)init;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id /* block */)actionBlock;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (void)setActionBlock:(id /* block */)arg0;
- (id)audience;
- (void)setAudience:(id)arg0;

@end
