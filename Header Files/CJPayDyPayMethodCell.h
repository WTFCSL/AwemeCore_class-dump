//
//     Generated by private class-dump
//

@class CJPayMethodCellTagView, CJPayStyleCheckMark, UIImageView, NSString, UILabel, UIView, MASConstraint;

@interface CJPayDyPayMethodCell : CJPayStyleBaseListCellView <CJPayBaseLoadingProtocol> {
    UIImageView *_bankIconView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIView *_bubbleBGView;
    UILabel *_bubbleLabel;
    UIView *_disableView;
    CJPayMethodCellTagView *_discountView;
    CJPayMethodCellTagView *_cardbinVoucherView;
    UIView *_rightDomainView;
    CJPayStyleCheckMark *_confirmImageView;
    UIImageView *_rightArrowImage;
    UILabel *_rightTipsMsgLabel;
    UILabel *_descTitleLabel;
    MASConstraint *_titleLabelTopBaseContainerViewConstraint;
    MASConstraint *_titleLabelCenterYBaseContainerViewConstraint;
}

@property (retain, nonatomic) UIImageView *bankIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *bubbleBGView;
@property (retain, nonatomic) UILabel *bubbleLabel;
@property (retain, nonatomic) UIView *disableView;
@property (retain, nonatomic) CJPayMethodCellTagView *discountView;
@property (retain, nonatomic) CJPayMethodCellTagView *cardbinVoucherView;
@property (retain, nonatomic) UIView *rightDomainView;
@property (retain, nonatomic) CJPayStyleCheckMark *confirmImageView;
@property (retain, nonatomic) UIImageView *rightArrowImage;
@property (retain, nonatomic) UILabel *rightTipsMsgLabel;
@property (retain, nonatomic) UILabel *descTitleLabel;
@property (retain, nonatomic) MASConstraint *titleLabelTopBaseContainerViewConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelCenterYBaseContainerViewConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setConfirmImageView:(id)arg0;
- (id)confirmImageView;
- (id)discountView;
- (void)setDiscountView:(id)arg0;
- (void)bindViewModel:(id)arg0;
- (void)setBubbleLabel:(id)arg0;
- (id)bubbleLabel;
- (id)descTitleLabel;
- (void)setDescTitleLabel:(id)arg0;
- (id)disableView;
- (void)setDisableView:(id)arg0;
- (id)rightArrowImage;
- (void)setRightArrowImage:(id)arg0;
- (id)bankIconView;
- (void)setTitleLabelCenterYBaseContainerViewConstraint:(id)arg0;
- (void)setTitleLabelTopBaseContainerViewConstraint:(id)arg0;
- (void)p_reloadContentWithViewModel:(id)arg0;
- (void)p_updateLayoutWithViewModel:(id)arg0;
- (id)titleLabelTopBaseContainerViewConstraint;
- (id)titleLabelCenterYBaseContainerViewConstraint;
- (id)bubbleBGView;
- (void)p_decideBubbleViewShow;
- (void)setBubbleBGView:(id)arg0;
- (id)cardbinVoucherView;
- (id)rightDomainView;
- (id)rightTipsMsgLabel;
- (BOOL)p_needShowCombineDetailAmount:(id)arg0;
- (id)p_combineDetailAmountstr:(id)arg0;
- (BOOL)p_isAssetInCombineStatus:(id)arg0;
- (id)p_discountStrWithViewModel:(id)arg0;
- (BOOL)p_needShowRightArrowForModel:(id)arg0;
- (BOOL)p_titleLabelWillTruncated;
- (void)setBankIconView:(id)arg0;
- (void)setCardbinVoucherView:(id)arg0;
- (void)setRightDomainView:(id)arg0;
- (void)setRightTipsMsgLabel:(id)arg0;
- (void)stopLoading;
- (void).cxx_destruct;
- (void)startLoading;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (void)didSelect;

@end