//
//     Generated by private class-dump
//

@class UIView, IESECLiveContext, NSString, UIImageView, UIButton, MASConstraint, IESECLiveGoodsTitleLabel, IESECLivePriceLabel, UILabel, IESECLiveGoodsModel;
@protocol IESECLiveFlashSalePopupViewDelegate;

@interface IESECLiveFlashSalePopupView : UIView <IESECLiveGoodsJumpHandlerDelegate> {
    IESECLiveGoodsModel *_goodsModel;
    id /* block */ _closeBlock;
    IESECLiveContext *_liveContext;
    id<IESECLiveFlashSalePopupViewDelegate> _delegate;
    UIView *_bkg;
    UIView *_content;
    UIImageView *_thumbnail;
    UIImageView *_icon;
    UIImageView *_aboveTitleTagImageView;
    UIView *_aboveTitleTagImageViewWrapper;
    IESECLiveGoodsTitleLabel *_title;
    IESECLivePriceLabel *_price;
    UILabel *_count;
    UIButton *_done;
    UIButton *_close;
    MASConstraint *_titleTopHasAboveTagConstraint;
    MASConstraint *_titleTopHasNotAboveTagConstraint;
}

@property (retain, nonatomic) UIView *bkg;
@property (retain, nonatomic) UIView *content;
@property (retain, nonatomic) UIImageView *thumbnail;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UIImageView *aboveTitleTagImageView;
@property (retain, nonatomic) UIView *aboveTitleTagImageViewWrapper;
@property (retain, nonatomic) IESECLiveGoodsTitleLabel *title;
@property (retain, nonatomic) IESECLivePriceLabel *price;
@property (retain, nonatomic) UILabel *count;
@property (retain, nonatomic) UIButton *done;
@property (retain, nonatomic) UIButton *close;
@property (retain, nonatomic) MASConstraint *titleTopHasAboveTagConstraint;
@property (retain, nonatomic) MASConstraint *titleTopHasNotAboveTagConstraint;
@property (retain, nonatomic) IESECLiveGoodsModel *goodsModel;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (weak, nonatomic) id<IESECLiveFlashSalePopupViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg0;
- (void)closeView;
- (void)setClose:(id)arg0;
- (id)goodsModel;
- (void)setGoodsModel:(id)arg0;
- (id)ecomEntranceForm;
- (void)setLiveContext:(id)arg0;
- (id)liveContext;
- (void)closeClick;
- (id)p_basicTrackParams;
- (id)adTrackParamsWithClickStyle:(long long)arg0;
- (id)curBtmModel;
- (void)showWithView:(id)arg0;
- (void)checkThenBuy;
- (id)aboveTitleTagImageView;
- (void)setTitleTopHasAboveTagConstraint:(id)arg0;
- (void)setTitleTopHasNotAboveTagConstraint:(id)arg0;
- (void)setHasTitleAboveTag:(BOOL)arg0;
- (id)titleTopHasAboveTagConstraint;
- (id)titleTopHasNotAboveTagConstraint;
- (void)doneClick;
- (void)setTitlAboveTag:(id)arg0;
- (void)trackBSTEvent;
- (id)bkg;
- (void)setBkg:(id)arg0;
- (void)setAboveTitleTagImageView:(id)arg0;
- (id)aboveTitleTagImageViewWrapper;
- (void)setAboveTitleTagImageViewWrapper:(id)arg0;
- (id)price;
- (void)setThumbnail:(id)arg0;
- (void)setCount:(id)arg0;
- (void)setDone:(id)arg0;
- (id)done;
- (id)icon;
- (void).cxx_destruct;
- (id)thumbnail;
- (id)close;
- (id)content;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (id)delegate;
- (id)count;
- (void)setContent:(id)arg0;
- (void)setIcon:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setPrice:(id)arg0;
- (void)setupUI;

@end