//
//     Generated by private class-dump
//

@class UILabel, NSString, UIView;

@interface AWEEcomSearchTitleCachalotCardView : UIView <AWESearchCachalotCardViewProtocol> {
    UIView *_contentView;
    UILabel *_titleLabel;
    UIView *_dividerView;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *dividerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)arg0 width:(double)arg1;

- (void)componentClicked;
- (void)componentWillDisplay;
- (void)configUI;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)componentView;
- (void)updateWithViewModel:(id)arg0;
- (void)resetUI;
- (id)dividerView;
- (void)setDividerView:(id)arg0;

@end
