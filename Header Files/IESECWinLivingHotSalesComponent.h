//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface IESECWinLivingHotSalesComponent : UIView <IESECLLComponent> {
    UIImageView *_fireIconView;
    UILabel *_hotSalesLabel;
}

@property (retain, nonatomic) UIImageView *fireIconView;
@property (retain, nonatomic) UILabel *hotSalesLabel;

+ (id /* block */)hotSalesWithHotSalesWidth:(double)arg0;
+ (id /* block */)hotSales;
+ (double)hotSalesWidthWithModel:(id)arg0;

- (void)p_setupUI;
- (void)updateUIWithModel:(id)arg0;
- (id)fireIconView;
- (id)hotSalesLabel;
- (void)setFireIconView:(id)arg0;
- (void)setHotSalesLabel:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
