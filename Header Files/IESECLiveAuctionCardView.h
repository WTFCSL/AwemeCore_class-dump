//
//     Generated by private class-dump
//

@class _IESECLiveAuctionAnimationView, NSString, IESECLiveCardDataModel, IESECLiveImageLabel, IESECLiveHotSaleView, UIImageView, _IESECLiveAuctionUserInfoView, UIButton, IESECLiveTracker, IESECGCDTimer, IESECLiveGoodsJumpHandler;

@interface IESECLiveAuctionCardView : IESECLiveBaseCardView <IESECLiveGoodsJumpHandlerDelegate> {
    UIButton *_closeButton;
    IESECLiveImageLabel *_statusImageView;
    UIImageView *_gradientView;
    UIImageView *_goodsImageView;
    IESECLiveHotSaleView *_hotsaleView;
    _IESECLiveAuctionAnimationView *_priceAnimationView;
    _IESECLiveAuctionAnimationView *_messageAnimationView;
    UIButton *_actionButton;
    _IESECLiveAuctionUserInfoView *_actionUserInfoView;
    IESECLiveCardDataModel *_cardViewModel;
    IESECLiveGoodsJumpHandler *_jumpHandler;
    IESECLiveTracker *_tracker;
    IESECGCDTimer *_hotsaleTimer;
    IESECGCDTimer *_countdownTimer;
}

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) IESECLiveImageLabel *statusImageView;
@property (retain, nonatomic) UIImageView *gradientView;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) IESECLiveHotSaleView *hotsaleView;
@property (retain, nonatomic) _IESECLiveAuctionAnimationView *priceAnimationView;
@property (retain, nonatomic) _IESECLiveAuctionAnimationView *messageAnimationView;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) _IESECLiveAuctionUserInfoView *actionUserInfoView;
@property (retain, nonatomic) IESECLiveCardDataModel *cardViewModel;
@property (retain, nonatomic) IESECLiveGoodsJumpHandler *jumpHandler;
@property (retain, nonatomic) IESECLiveTracker *tracker;
@property (retain, nonatomic) IESECGCDTimer *hotsaleTimer;
@property (retain, nonatomic) IESECGCDTimer *countdownTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardViewWithModel:(id)arg0;

- (id)cardModel;
- (id)goodsImageView;
- (void)setGoodsImageView:(id)arg0;
- (id)goodsModel;
- (id)countdownTimer;
- (void)setCountdownTimer:(id)arg0;
- (void)invalidateCountdownTimer;
- (void)updateWithCardModel:(id)arg0;
- (void)handleClose:(id)arg0;
- (id)ecomEntranceForm;
- (id)cardViewModel;
- (void)setCardViewModel:(id)arg0;
- (void)handleTapButton:(id)arg0;
- (id)coreParams;
- (id)jumpHandler;
- (id)adTrackParamsWithClickStyle:(long long)arg0;
- (void)setJumpHandler:(id)arg0;
- (void)updateUIWithGoodsModel:(id)arg0;
- (void)showOnEnter:(BOOL)arg0 followUp:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)curBtmModel;
- (id)priceAnimationView;
- (id)messageAnimationView;
- (void)updateGoodsWithoutState:(id)arg0;
- (void)showHotsaleIfNeeded:(id)arg0;
- (void)showCountdownIfNeeded:(id)arg0;
- (void)updateActionButton:(id)arg0;
- (id)actionUserInfoView;
- (void)p_showCountdown:(id)arg0;
- (void)p_updateHotsaleInfo:(id)arg0;
- (id)hotsaleTimer;
- (void)hideHotsaleView;
- (void)setHotsaleTimer:(id)arg0;
- (id)hotsaleView;
- (BOOL)shouldShowHotsaleWithSaleNum:(id)arg0;
- (void)setPriceAnimationView:(id)arg0;
- (void)setMessageAnimationView:(id)arg0;
- (BOOL)p_isCurrentClearState;
- (void)handleTapWithClickStyle:(long long)arg0;
- (void)trackClickWithArea:(id)arg0;
- (BOOL)enableUpdate;
- (void)setHotsaleView:(id)arg0;
- (void)setActionUserInfoView:(id)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void).cxx_destruct;
- (void)setGradientView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)gradientView;
- (void)setupUI;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (void)handleTap:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (struct CGSize { double x0; double x1; })cardSize;
- (id)statusImageView;
- (void)setStatusImageView:(id)arg0;
- (id)cardID;

@end
