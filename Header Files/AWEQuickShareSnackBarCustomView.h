//
//     Generated by private class-dump
//

@class AWEQuickShareSnackBarCustomViewContext, UIImageView, UILabel, ACCAnimatedButton;
@protocol AWEQuickShareSnackBarCustomViewDelegate;

@interface AWEQuickShareSnackBarCustomView : UIView {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    ACCAnimatedButton *_editButton;
    AWEQuickShareSnackBarCustomViewContext *_context;
    id<AWEQuickShareSnackBarCustomViewDelegate> _delegate;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) ACCAnimatedButton *editButton;
@property (retain, nonatomic) AWEQuickShareSnackBarCustomViewContext *context;
@property (weak, nonatomic) id<AWEQuickShareSnackBarCustomViewDelegate> delegate;

- (void)initSubviews;
- (void)editButtonDidClick;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 delegate:(id)arg1 context:(id /* block */)arg2;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)titleLabel;
- (id)delegate;
- (id)context;
- (void)setEditButton:(id)arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (id)editButton;
- (void)setIconImageView:(id)arg0;

@end