//
//     Generated by private class-dump
//

@class CJPayMethodCellTagView, CJPayDefaultChannelShowConfig, UIImageView, NSString, UILabel, UIView, MASConstraint;

@interface CJPayChooseMethodView : UIView <CJPayBaseLoadingProtocol> {
    id /* block */ _clickBlock;
    CJPayDefaultChannelShowConfig *_selectConfig;
    unsigned long long _comeFromSceneType;
    long long _cardNum;
    unsigned long long _sceneType;
    UILabel *_leftTitleLabel;
    UIImageView *_rightArrow;
    UIImageView *_cardIconView;
    UILabel *_cardLabel;
    UILabel *_cardDescLabel;
    UIView *_clickView;
    CJPayMethodCellTagView *_discountView;
    MASConstraint *_bottomBaseCardLabelConstraint;
    MASConstraint *_bottomBaseCardDescConstraint;
    MASConstraint *_bottomBaseDisountViewConstraint;
}

@property (retain, nonatomic) UILabel *leftTitleLabel;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) UIImageView *cardIconView;
@property (retain, nonatomic) UILabel *cardLabel;
@property (retain, nonatomic) UILabel *cardDescLabel;
@property (retain, nonatomic) UIView *clickView;
@property (retain, nonatomic) CJPayMethodCellTagView *discountView;
@property (retain, nonatomic) MASConstraint *bottomBaseCardLabelConstraint;
@property (retain, nonatomic) MASConstraint *bottomBaseCardDescConstraint;
@property (retain, nonatomic) MASConstraint *bottomBaseDisountViewConstraint;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *selectConfig;
@property (nonatomic) unsigned long long comeFromSceneType;
@property (nonatomic) long long cardNum;
@property (nonatomic) unsigned long long sceneType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setClickBlock:(id /* block */)arg0;
- (id /* block */)clickBlock;
- (void)setClickView:(id)arg0;
- (id)clickView;
- (id)discountView;
- (void)setDiscountView:(id)arg0;
- (void)setRightArrow:(id)arg0;
- (id)leftTitleLabel;
- (void)setLeftTitleLabel:(id)arg0;
- (id)cardLabel;
- (id)cardDescLabel;
- (id)cardIconView;
- (void)setCardIconView:(id)arg0;
- (void)setCardLabel:(id)arg0;
- (void)setCardDescLabel:(id)arg0;
- (void)p_adapterTheme;
- (unsigned long long)comeFromSceneType;
- (void)setComeFromSceneType:(unsigned long long)arg0;
- (void)setBottomBaseCardLabelConstraint:(id)arg0;
- (void)setBottomBaseCardDescConstraint:(id)arg0;
- (void)setBottomBaseDisountViewConstraint:(id)arg0;
- (BOOL)p_isSelectConfigValid;
- (id)bottomBaseDisountViewConstraint;
- (id)bottomBaseCardLabelConstraint;
- (id)bottomBaseCardDescConstraint;
- (id)selectConfig;
- (id)p_addBankDesc;
- (long long)cardNum;
- (void)updateWithDefaultDiscount:(id)arg0;
- (void)setSelectConfig:(id)arg0;
- (void)setCardNum:(long long)arg0;
- (void)stopLoading;
- (void)updateContent;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)didMoveToWindow;
- (void)setupView;
- (unsigned long long)sceneType;
- (void)setSceneType:(unsigned long long)arg0;
- (void)click;
- (id)rightArrow;

@end