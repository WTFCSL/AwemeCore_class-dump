//
//     Generated by private class-dump
//

@class UIStackView, NSString, IESECLLDCLynxManager, NSDictionary, IESECLongContentLabelElement, UIView, IESECGoodsDetailServiceTagsContainerStackView;

@interface IESECGoodsDetailLongTitleTagInfoView : UIView <IESECGoodsDetailViewUpdateMessage> {
    BOOL _tailButtonAlignToRight;
    BOOL _shouldHideOutBoundsView;
    NSDictionary *_clickActionMeta;
    IESECLongContentLabelElement *_contentLabelElement;
    IESECGoodsDetailServiceTagsContainerStackView *_headButtonsStackView;
    UIStackView *_headLabelsStackView;
    IESECGoodsDetailServiceTagsContainerStackView *_headCouponsStackView;
    UIStackView *_tailIconLabelsStackView;
    NSString *_pageIdentifier;
    IESECLLDCLynxManager *_lynxManager;
    UIView *_lynxView;
}

@property (retain, nonatomic) IESECLongContentLabelElement *contentLabelElement;
@property (retain, nonatomic) IESECGoodsDetailServiceTagsContainerStackView *headButtonsStackView;
@property (retain, nonatomic) UIStackView *headLabelsStackView;
@property (retain, nonatomic) IESECGoodsDetailServiceTagsContainerStackView *headCouponsStackView;
@property (retain, nonatomic) UIStackView *tailIconLabelsStackView;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) IESECLLDCLynxManager *lynxManager;
@property (retain, nonatomic) UIView *lynxView;
@property (copy, nonatomic) NSDictionary *clickActionMeta;
@property (nonatomic) BOOL tailButtonAlignToRight;
@property (nonatomic) BOOL shouldHideOutBoundsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForContentLabelElem:(id)arg0 Width:(double)arg1;
+ (double)heightForContentLabelElem:(id)arg0;
+ (double)calculateTitleHeight:(id)arg0 titleWidth:(double)arg1 font:(id)arg2 tagIconURLModelArray:(id)arg3;
+ (double)widthForIconTagArray:(id)arg0;

- (id)lynxView;
- (void)setLynxView:(id)arg0;
- (BOOL)shouldHideOutBoundsView;
- (void)setShouldHideOutBoundsView:(BOOL)arg0;
- (id)lynxManager;
- (void)setLynxManager:(id)arg0;
- (void)goodsDetailActivityDidUpdateCountdown:(id)arg0 goodsDetailUID:(id)arg1;
- (void)configureTagInfoWithContent:(id)arg0;
- (void)setTailButtonAlignToRight:(BOOL)arg0;
- (void)clearConfigureDataModel;
- (id)createHeadButtonWithElement:(id)arg0;
- (id)contentLabelElement;
- (id)headButtonsStackView;
- (id)headLabelsStackView;
- (id)headCouponsStackView;
- (id)tailIconLabelsStackView;
- (void)configureTagInfoWithContent:(id)arg0 lynxManger:(id)arg1 width:(double)arg2;
- (void)setClickActionMeta:(id)arg0;
- (void)setContentLabelElement:(id)arg0;
- (id)createGradientHeadLongTitleWithElement:(id)arg0 Width:(double)arg1;
- (id)createCouponButtonWithElement:(id)arg0;
- (BOOL)tailButtonAlignToRight;
- (void)configureTagInfoWithContent:(id)arg0 pageIdentifier:(id)arg1 lynxManger:(id)arg2 width:(double)arg3;
- (id)clickActionMeta;
- (void)setHeadButtonsStackView:(id)arg0;
- (void)setHeadLabelsStackView:(id)arg0;
- (void)setHeadCouponsStackView:(id)arg0;
- (void)setTailIconLabelsStackView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (void)setupUI;
- (id)pageIdentifier;
- (void)setPageIdentifier:(id)arg0;

@end
