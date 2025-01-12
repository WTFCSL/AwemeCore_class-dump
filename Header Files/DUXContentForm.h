//
//     Generated by private class-dump
//

@class NSString, UIImageView, DUXDivider, UILabel, UIView, UIImage;
@protocol DUXContentFormContent;

@interface DUXContentForm : UIView {
    BOOL _showDivider;
    NSString *_title;
    UIImage *_image;
    id<DUXContentFormContent> _content;
    UILabel *_titleLabel;
    UIImageView *_iconView;
    UIView *_contentContainerView;
    DUXDivider *_divider;
    UIView *_contentView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) DUXDivider *divider;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL showDivider;
@property (retain, nonatomic) id<DUXContentFormContent> content;

- (void)setContentConstraints;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (void)setContentContainerView:(id)arg0;
- (id)iconView;
- (id)image;
- (void)setShowDivider:(BOOL)arg0;
- (BOOL)endEditing:(BOOL)arg0;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (id)content;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (id)title;
- (void)setImage:(id)arg0;
- (void)setContent:(id)arg0;
- (id)contentContainerView;
- (void)setTitleLabel:(id)arg0;
- (BOOL)showDivider;
- (void)setTitle:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)initWithTitle:(id)arg0 content:(id)arg1;
- (id)divider;
- (void)setDivider:(id)arg0;

@end
