//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface CJPayBubbleInfoView : UIView {
    UILabel *_voucherInfo;
    UIView *_bgView;
}

@property (retain, nonatomic) UILabel *voucherInfo;
@property (retain, nonatomic) UIView *bgView;

- (id)voucherInfo;
- (void)setVoucherInfo:(id)arg0;
- (void)p_refreshUI;
- (void)switchPayMethodVoucherInfo:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)setupUI;

@end
