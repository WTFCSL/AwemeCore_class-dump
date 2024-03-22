//
//     Generated by private class-dump
//

@class IESLiveGiftCellCustomizedIconScrollView, IESLiveRichTextLabel, UILabel, IESLiveGiftCellIconScrollView, RACDisposable, UIView, IESLiveAnimatedImageView, IESLiveGiftPriceLabelScrollView, IESLiveGiftPanelDataSharing, IESLiveGradientView, UIControl, HTSLiveGiftItem, UIImageView;
@protocol IESLiveCustomConfigAdapter;

@interface IESLiveRoomGiftItemCellSelectedView : UIView {
    id /* block */ _onSend;
    HTSLiveGiftItem *_giftItem;
    IESLiveGiftPanelDataSharing *_giftPanelDataSharing;
    UIView *_selectedContentView;
    UIView *_iconBackGroundView;
    UIImageView *_iconView;
    UILabel *_priceLabel;
    IESLiveAnimatedImageView *_selectedEffectView;
    IESLiveGiftCellCustomizedIconScrollView *_giftAssemblyCustomizedCardScrollView;
    IESLiveGiftCellIconScrollView *_buffIconScrollView;
    IESLiveGiftPriceLabelScrollView *_giftPriceScrollView;
    UIView *_priceBackgroundView;
    IESLiveGradientView *_sendContentView;
    IESLiveRichTextLabel *_sendLabel;
    UIControl *_sendControl;
    RACDisposable *_disposable;
    RACDisposable *_cellImageDisposable;
    id<IESLiveCustomConfigAdapter> _customConfig;
}

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (retain, nonatomic) UIView *selectedContentView;
@property (retain, nonatomic) UIView *iconBackGroundView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) IESLiveAnimatedImageView *selectedEffectView;
@property (retain, nonatomic) IESLiveGiftCellCustomizedIconScrollView *giftAssemblyCustomizedCardScrollView;
@property (retain, nonatomic) IESLiveGiftCellIconScrollView *buffIconScrollView;
@property (retain, nonatomic) IESLiveGiftPriceLabelScrollView *giftPriceScrollView;
@property (retain, nonatomic) UIView *priceBackgroundView;
@property (retain, nonatomic) IESLiveGradientView *sendContentView;
@property (retain, nonatomic) IESLiveRichTextLabel *sendLabel;
@property (retain, nonatomic) UIControl *sendControl;
@property (retain, nonatomic) RACDisposable *disposable;
@property (retain, nonatomic) RACDisposable *cellImageDisposable;
@property (retain, nonatomic) id<IESLiveCustomConfigAdapter> customConfig;
@property (copy, nonatomic) id /* block */ onSend;
@property (retain, nonatomic) HTSLiveGiftItem *giftItem;

- (id)customConfig;
- (void)setCustomConfig:(id)arg0;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)p_setupViews;
- (void)sendGift;
- (id)sendLabel;
- (void)setSendLabel:(id)arg0;
- (id)iconBackGroundView;
- (void)setIconBackGroundView:(id)arg0;
- (id)giftPanelDataSharing;
- (void)setGiftPanelDataSharing:(id)arg0;
- (void)setOnSend:(id /* block */)arg0;
- (void)_sendGift;
- (void)setBuffCardToIndex:(long long)arg0 withAnimated:(BOOL)arg1;
- (void)setAssemblyGiftCustomizedCardToIndex:(long long)arg0 withAnimation:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 giftPanelDataSharing:(id)arg1;
- (void)showPreselectAnimation;
- (id)cellImageDisposable;
- (void)setCellImageDisposable:(id)arg0;
- (void)inactivateWithSendLabel:(id)arg0;
- (void)configSendGiftButtonGreyModeWithBuffGiftItem:(id)arg0 cardIndex:(long long)arg1;
- (void)configSendGiftButtonGreyModeWithAssemblyGiftItem:(id)arg0 cardIndex:(long long)arg1;
- (void)setupGiftAssemblyCustomizedCardScrollViewIfNeeded;
- (id)priceBackgroundView;
- (id)sendContentView;
- (id)selectedEffectView;
- (id)sendControl;
- (BOOL)_parseSendLabelTextOnActivation;
- (void)p_updateStaticGiftIcon;
- (void)addSubViewsConstraints;
- (void)showGiftAssemblyCustomizedCardScrollView:(BOOL)arg0;
- (void)setupGiftPriceScrollViewIfNeeded;
- (id)giftAssemblyCustomizedCardScrollView;
- (id)buildGiftPriceString:(id)arg0;
- (id)giftPriceScrollView;
- (void)showBuffCardScrollView:(BOOL)arg0;
- (void)setupBuffIconScrollViewIfNeeded;
- (id)buffIconScrollView;
- (void)showGiftPriceScrollView:(BOOL)arg0;
- (void)setGiftAssemblyCustomizedCardScrollView:(id)arg0;
- (void)setBuffIconScrollView:(id)arg0;
- (void)setGiftPriceScrollView:(id)arg0;
- (void)setSelectedEffectView:(id)arg0;
- (void)setPriceBackgroundView:(id)arg0;
- (void)setSendContentView:(id)arg0;
- (void)setSendControl:(id)arg0;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (void)_updateContent;
- (void)activate;
- (void)dealloc;
- (void)setHidden:(BOOL)arg0;
- (double)imageWidth;
- (void)setSelectedContentView:(id)arg0;
- (id)selectedContentView;
- (double)imageHeight;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;
- (id)giftItem;
- (void)setGiftItem:(id)arg0;
- (id /* block */)onSend;

@end