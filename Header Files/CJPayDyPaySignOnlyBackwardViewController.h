//
//     Generated by private class-dump
//

@class UIView, NSString, UIImageView, CJPayDyPaySignOnlyBackwardVoucherView, CJPayCommonProtocolView, CJPayDyPaySignOnlyBackwardModel, CJPayButton, CJPayMsTimer, UIScrollView;

@interface CJPayDyPaySignOnlyBackwardViewController : CJPayHalfPageBaseViewController <CJPayTimerProtocol> {
    BOOL _isClickConfirm;
    BOOL _isAllVoucherTimeHidden;
    id /* block */ _trackerBlock;
    UIImageView *_titleImageView;
    UIScrollView *_scrollView;
    CJPayDyPaySignOnlyBackwardVoucherView *_voucherContentView;
    CJPayMsTimer *_msTimer;
    UIView *_buttonView;
    CJPayButton *_backBtn;
    CJPayButton *_confirmBtn;
    CJPayCommonProtocolView *_protocolView;
    CJPayDyPaySignOnlyBackwardModel *_model;
}

@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) CJPayDyPaySignOnlyBackwardVoucherView *voucherContentView;
@property (retain, nonatomic) CJPayMsTimer *msTimer;
@property (nonatomic) BOOL isClickConfirm;
@property (nonatomic) BOOL isAllVoucherTimeHidden;
@property (retain, nonatomic) UIView *buttonView;
@property (retain, nonatomic) CJPayButton *backBtn;
@property (retain, nonatomic) CJPayButton *confirmBtn;
@property (retain, nonatomic) CJPayCommonProtocolView *protocolView;
@property (retain, nonatomic) CJPayDyPaySignOnlyBackwardModel *model;
@property (copy, nonatomic) id /* block */ trackerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)backBtn;
- (void)setBackBtn:(id)arg0;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg0;
- (id)protocolView;
- (void)setProtocolView:(id)arg0;
- (void)p_setupUI;
- (void)p_setupConstraints;
- (id /* block */)trackerBlock;
- (void)setTrackerBlock:(id /* block */)arg0;
- (void)currentCountChangeTo:(int)arg0;
- (void)trackerWithName:(id)arg0 params:(id)arg1;
- (id)msTimer;
- (void)p_setupVoucherContentView;
- (id)voucherContentView;
- (void)setIsClickConfirm:(BOOL)arg0;
- (BOOL)isClickConfirm;
- (BOOL)isAllVoucherTimeHidden;
- (void)setIsAllVoucherTimeHidden:(BOOL)arg0;
- (void)p_updateWithCurrentCount:(long long)arg0;
- (void)p_clickBackAction;
- (void)p_clickConfirmAction;
- (void)setVoucherContentView:(id)arg0;
- (void)setMsTimer:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (id)buttonView;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)titleImageView;
- (void)viewDidLoad;
- (id)scrollView;
- (void)setButtonView:(id)arg0;
- (void)setTitleImageView:(id)arg0;
- (double)containerHeight;

@end
