//
//     Generated by private class-dump
//

@class CJPayStyleButton, CJPayCommonProtocolView, CJPayCommonProtocolModel, UIView;

@interface CJPayGuideWithConfirmView : UIView {
    BOOL _isShowButton;
    CJPayCommonProtocolView *_protocolView;
    CJPayStyleButton *_confirmButton;
    UIView *_clickView;
    CJPayCommonProtocolModel *_protocolModel;
}

@property (nonatomic) BOOL isShowButton;
@property (retain, nonatomic) CJPayCommonProtocolModel *protocolModel;
@property (retain, nonatomic) UIView *clickView;
@property (retain, nonatomic) CJPayCommonProtocolView *protocolView;
@property (retain, nonatomic) CJPayStyleButton *confirmButton;

- (void)setClickView:(id)arg0;
- (id)clickView;
- (id)protocolView;
- (void)setProtocolView:(id)arg0;
- (void)p_setupUI;
- (void)p_updateViewsConstraint;
- (id)protocolModel;
- (BOOL)isShowButton;
- (void)setIsShowButton:(BOOL)arg0;
- (void)setProtocolModel:(id)arg0;
- (void)p_switch;
- (id)initWithCommonProtocolModel:(id)arg0 isShowButton:(BOOL)arg1;
- (void)updateProtocolModel:(id)arg0 isShowButton:(BOOL)arg1;
- (void).cxx_destruct;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;

@end
