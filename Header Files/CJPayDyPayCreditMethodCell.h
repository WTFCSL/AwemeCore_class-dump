//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, UIImageView, CJPayStyleCheckMark, CJPayBytePayMethodCreditPayCollectionView, MASConstraint, CJPayMethodCellTagView, UILabel;
@protocol CJPayBytePayCreditPayMethodModel;

@interface CJPayDyPayCreditMethodCell : CJPayStyleBaseListCellView <CJPayBaseLoadingProtocol> {
    UIImageView *_creditIconView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_descTitleLabel;
    UIView *_bubbleBGView;
    UILabel *_bubbleLabel;
    UIView *_disableView;
    CJPayStyleCheckMark *_confirmImageView;
    UIImageView *_rightArrowImage;
    CJPayMethodCellTagView *_discountView1;
    CJPayMethodCellTagView *_discountView2;
    CJPayBytePayMethodCreditPayCollectionView *_collectionView;
    NSArray<CJPayBytePayCreditPayMethodModel> *_creditPayMethods;
    MASConstraint *_titleLabelTopBaseContainerViewConstraint;
    MASConstraint *_titleLabelCenterYBaseContainerViewConstraint;
    MASConstraint *_discountTagTopBaseTitleBottomConstraint;
    MASConstraint *_discountTagTopBaseDescBottomConstraint;
    MASConstraint *_descBottomBaseSuperViewBottomConstraint;
    MASConstraint *_descTopBaseTitleBottomConstraint;
}

@property (retain, nonatomic) UIImageView *creditIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *descTitleLabel;
@property (retain, nonatomic) UIView *bubbleBGView;
@property (retain, nonatomic) UILabel *bubbleLabel;
@property (retain, nonatomic) UIView *disableView;
@property (retain, nonatomic) CJPayStyleCheckMark *confirmImageView;
@property (retain, nonatomic) UIImageView *rightArrowImage;
@property (retain, nonatomic) CJPayMethodCellTagView *discountView1;
@property (retain, nonatomic) CJPayMethodCellTagView *discountView2;
@property (retain, nonatomic) CJPayBytePayMethodCreditPayCollectionView *collectionView;
@property (copy, nonatomic) NSArray<CJPayBytePayCreditPayMethodModel> *creditPayMethods;
@property (retain, nonatomic) MASConstraint *titleLabelTopBaseContainerViewConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelCenterYBaseContainerViewConstraint;
@property (retain, nonatomic) MASConstraint *discountTagTopBaseTitleBottomConstraint;
@property (retain, nonatomic) MASConstraint *discountTagTopBaseDescBottomConstraint;
@property (retain, nonatomic) MASConstraint *descBottomBaseSuperViewBottomConstraint;
@property (retain, nonatomic) MASConstraint *descTopBaseTitleBottomConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setConfirmImageView:(id)arg0;
- (id)confirmImageView;
- (void)bindViewModel:(id)arg0;
- (void)setBubbleLabel:(id)arg0;
- (id)bubbleLabel;
- (id)descTitleLabel;
- (void)setDescTitleLabel:(id)arg0;
- (id)disableView;
- (void)setDisableView:(id)arg0;
- (id)creditPayMethods;
- (id)rightArrowImage;
- (void)setRightArrowImage:(id)arg0;
- (void)setCreditPayMethods:(id)arg0;
- (id)creditIconView;
- (id)discountView1;
- (id)discountView2;
- (void)setTitleLabelCenterYBaseContainerViewConstraint:(id)arg0;
- (void)setTitleLabelTopBaseContainerViewConstraint:(id)arg0;
- (void)setDiscountTagTopBaseTitleBottomConstraint:(id)arg0;
- (void)setDiscountTagTopBaseDescBottomConstraint:(id)arg0;
- (void)setDescBottomBaseSuperViewBottomConstraint:(id)arg0;
- (void)setDescTopBaseTitleBottomConstraint:(id)arg0;
- (id)discountTagTopBaseDescBottomConstraint;
- (id)descTopBaseTitleBottomConstraint;
- (void)p_reloadContentWithViewModel:(id)arg0;
- (void)p_updateLayoutWithViewModel:(id)arg0;
- (id)discountTagTopBaseTitleBottomConstraint;
- (id)descBottomBaseSuperViewBottomConstraint;
- (id)titleLabelTopBaseContainerViewConstraint;
- (id)titleLabelCenterYBaseContainerViewConstraint;
- (id)bubbleBGView;
- (void)p_decideBubbleViewShow;
- (void)setCreditIconView:(id)arg0;
- (void)setBubbleBGView:(id)arg0;
- (void)setDiscountView1:(id)arg0;
- (void)setDiscountView2:(id)arg0;
- (void)stopLoading;
- (void).cxx_destruct;
- (id)collectionView;
- (void)startLoading;
- (id)titleLabel;
- (void)setCollectionView:(id)arg0;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (void)didSelect;

@end