//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView;

@interface HGPhoneNumberPermissionContentView : UIView {
    NSString *_phoneNumber;
    UILabel *_titleLabel;
    UIImageView *_phoneIconView;
    UIView *_containerView;
    UILabel *_phoneNumberLabel;
    UIView *_topBorder;
    UIView *_bottomBorder;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *phoneIconView;
@property (copy, nonatomic) NSString *phoneNumber;

- (void)setupContainer;
- (void)setupBorders;
- (void)setPhoneIconView:(id)arg0;
- (id)phoneIconView;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg0;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (void)setupTitleLabel;

@end
