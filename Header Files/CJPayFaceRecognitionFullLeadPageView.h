//
//     Generated by private class-dump
//

@class CJPayLoadingButton, UIImageView, CJPayFaceRecognitionFullLeadPageModel, UILabel, CJPayCommonProtocolView, BDImageView;

@interface CJPayFaceRecognitionFullLeadPageView : UIView {
    id /* block */ _protocolClickBlock;
    id /* block */ _checkProtocolBlock;
    id /* block */ _clickConfirmBtn;
    CJPayFaceRecognitionFullLeadPageModel *_model;
    UIImageView *_backgroundImageView;
    UILabel *_titleLabel;
    UIImageView *_safeShieldImageView;
    UILabel *_subTitleLabel;
    BDImageView *_centerImageView;
    UILabel *_countDownTipLabel;
    CJPayCommonProtocolView *_protocolView;
    CJPayLoadingButton *_confirmBtn;
}

@property (retain, nonatomic) CJPayFaceRecognitionFullLeadPageModel *model;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *safeShieldImageView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) BDImageView *centerImageView;
@property (retain, nonatomic) UILabel *countDownTipLabel;
@property (retain, nonatomic) CJPayCommonProtocolView *protocolView;
@property (retain, nonatomic) CJPayLoadingButton *confirmBtn;
@property (copy, nonatomic) id /* block */ protocolClickBlock;
@property (copy, nonatomic) id /* block */ checkProtocolBlock;
@property (copy, nonatomic) id /* block */ clickConfirmBtn;

- (id)confirmBtn;
- (id /* block */)clickConfirmBtn;
- (void)setConfirmBtn:(id)arg0;
- (id)protocolView;
- (void)setProtocolView:(id)arg0;
- (void)p_setupUI;
- (void)p_setupConstraints;
- (void)setProtocolClickBlock:(id /* block */)arg0;
- (id /* block */)protocolClickBlock;
- (void)setClickConfirmBtn:(id /* block */)arg0;
- (void)p_onConfirmAction;
- (void)confirmBtnLoading:(BOOL)arg0;
- (id)countDownTipLabel;
- (id)safeShieldImageView;
- (double)p_centerImageViewWidth;
- (id)p_getGuideDesc;
- (id)p_createProtocolModel;
- (id /* block */)checkProtocolBlock;
- (void)showCountDownNumber:(long long)arg0;
- (void)changeProtocolCheckBoxStatus:(BOOL)arg0;
- (void)setCheckProtocolBlock:(id /* block */)arg0;
- (void)setSafeShieldImageView:(id)arg0;
- (void)setCountDownTipLabel:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)backgroundImageView;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (void)setBackgroundImageView:(id)arg0;
- (id)centerImageView;
- (void)setCenterImageView:(id)arg0;

@end
