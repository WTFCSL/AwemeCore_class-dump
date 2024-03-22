//
//     Generated by private class-dump
//

@class NSString, UIImageView, CJPaySubPayTypeIconTipModel, UILabel;

@interface CJPayBytePayMethodSecondaryCell : CJPayMethodSecondaryCellView <CJPayBaseLoadingProtocol> {
    UILabel *_rightMsgLabel;
    UIImageView *_iconImgView;
    CJPaySubPayTypeIconTipModel *_iconTip;
}

@property (retain, nonatomic) UIImageView *iconImgView;
@property (retain, nonatomic) CJPaySubPayTypeIconTipModel *iconTip;
@property (retain, nonatomic) UILabel *rightMsgLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calHeight:(id)arg0;
+ (BOOL)p_isDiscountLineBreakWithBizModel:(id)arg0;
+ (BOOL)p_isDisplayDiscountLabel:(id)arg0;

- (id)iconImgView;
- (void)setIconImgView:(id)arg0;
- (id)rightMsgLabel;
- (void)setIconTip:(id)arg0;
- (void)p_tapIncomePayAboutImageView;
- (id)iconTip;
- (void)setRightMsgLabel:(id)arg0;
- (void)p_refreshVoucherLabel:(id)arg0;
- (void)p_refreshDiscountView:(id)arg0;
- (void)stopLoading;
- (void).cxx_destruct;
- (void)startLoading;
- (void)setupUI;
- (void)updateContent:(id)arg0;

@end
