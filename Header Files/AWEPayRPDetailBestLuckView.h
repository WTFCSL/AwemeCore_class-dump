//
//     Generated by private class-dump
//

@class UIImageView, UILabel, DUXButton;

@interface AWEPayRPDetailBestLuckView : UIView {
    id /* block */ _sendClickBlock;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    DUXButton *_sendButton;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) DUXButton *sendButton;
@property (copy, nonatomic) id /* block */ sendClickBlock;

- (void)p_setupUI;
- (id /* block */)sendClickBlock;
- (void)p_sendClicked;
- (void)setSendClickBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)sendButton;
- (void)setSendButton:(id)arg0;

@end
