//
//     Generated by private class-dump
//

@class IESECGoodsActivityNoticeView;

@interface IESECGoodsDetailPreActivityComponentView : IESECGoodsDetailBaseComponentView {
    IESECGoodsActivityNoticeView *_preActivityNoticeView;
}

@property (retain, nonatomic) IESECGoodsActivityNoticeView *preActivityNoticeView;

+ (BOOL)componentViewShouldShow:(id)arg0 style:(long long)arg1;
+ (double)componentViewHeight:(id)arg0 style:(long long)arg1;

- (void)updateWithParameters:(id)arg0;
- (id)initWithParameters:(id)arg0 style:(long long)arg1 tracker:(id)arg2;
- (id)preActivityNoticeView;
- (void)setPreActivityNoticeView:(id)arg0;
- (void).cxx_destruct;

@end
