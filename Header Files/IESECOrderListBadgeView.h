//
//     Generated by private class-dump
//

@class UILabel, NSString, IESECOrderListTabItemUIConfigModel;

@interface IESECOrderListBadgeView : UIView {
    IESECOrderListTabItemUIConfigModel *_uiConfig;
    double _fontScale;
    UILabel *_badgeLabel;
    NSString *_badgeText;
}

@property (retain, nonatomic) IESECOrderListTabItemUIConfigModel *uiConfig;
@property (nonatomic) double fontScale;
@property (readonly, nonatomic) UILabel *badgeLabel;
@property (copy, nonatomic) NSString *badgeText;

- (id)uiConfig;
- (void)setUiConfig:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)reloadData;
- (double)fontScale;
- (void)setFontScale:(double)arg0;
- (id)badgeText;
- (void)setBadgeText:(id)arg0;
- (id)badgeLabel;
- (id)initWithCenter:(struct CGPoint { double x0; double x1; })arg0;

@end
