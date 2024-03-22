//
//     Generated by private class-dump
//

@class UILabel, UIButton;
@protocol AWEDouPlusRechargeEmptyViewDelegate;

@interface AWEDouPlusRechargeEmptyView : UIView {
    id<AWEDouPlusRechargeEmptyViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIButton *_retryBtn;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIButton *retryBtn;
@property (weak, nonatomic) id<AWEDouPlusRechargeEmptyViewDelegate> delegate;

- (id)retryBtn;
- (void)retryBtnClicked;
- (void)setRetryBtn:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg0;

@end