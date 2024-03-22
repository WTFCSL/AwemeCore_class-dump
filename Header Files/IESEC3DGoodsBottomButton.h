//
//     Generated by private class-dump
//

@class UILabel, IESEC3DGoodsBottomButtonModel, NSObject;
@protocol OS_dispatch_source;

@interface IESEC3DGoodsBottomButton : IESECGoodsDetailBottomButton {
    UILabel *_contentLabel;
    IESEC3DGoodsBottomButtonModel *_buttonModel;
    long long _goodsInfoActivityType;
    NSObject<OS_dispatch_source> *_timer;
    double _initTimeinterval;
}

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) IESEC3DGoodsBottomButtonModel *buttonModel;
@property (nonatomic) long long goodsInfoActivityType;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) double initTimeinterval;

- (id)buttonModel;
- (void)setButtonModel:(id)arg0;
- (double)initTimeinterval;
- (void)setInitTimeinterval:(double)arg0;
- (void)configWithButtonModel:(id)arg0;
- (long long)getBottomButtonTypeWithModel:(id)arg0;
- (void)updateTitle:(id)arg0 detailText:(id)arg1 type:(long long)arg2;
- (id)getContentStringWithTitle:(id)arg0 detailText:(id)arg1;
- (BOOL)isNeedCountdown;
- (long long)goodsInfoActivityType;
- (void)setGoodsInfoActivityType:(long long)arg0;
- (id)timer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTimer:(id)arg0;
- (void)dealloc;
- (void)setupTimer;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;

@end
