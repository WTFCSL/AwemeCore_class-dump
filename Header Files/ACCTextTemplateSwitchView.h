//
//     Generated by private class-dump
//

@class UIImageView, UILabel, NSString;

@interface ACCTextTemplateSwitchView : UIView {
    BOOL _selected;
    unsigned long long _toolbarType;
    UIImageView *_iconView;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL selected;
@property (nonatomic) unsigned long long toolbarType;

+ (id)switchTitleLabel;
+ (id)switchIconViewWithOption:(id)arg0;
+ (struct CGSize { double x0; double x1; })sizeWithTitle:(id)arg0;

- (void)setToolbarType:(unsigned long long)arg0;
- (unsigned long long)toolbarType;
- (BOOL)selected;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (void)setSelected:(BOOL)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)initWithOption:(id)arg0;

@end