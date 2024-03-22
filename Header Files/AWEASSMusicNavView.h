//
//     Generated by private class-dump
//

@class UIButton, UILabel, UIView;

@interface AWEASSMusicNavView : UIView {
    BOOL _leftButtonIsBack;
    BOOL _shouldShowBarView;
    BOOL _shouldShowContentView;
    UIButton *_leftCancelButton;
    UILabel *_titleLabel;
    UIView *_headerView;
    UIView *_contentView;
    UIView *_barView;
}

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL shouldShowContentView;
@property (retain, nonatomic) UIView *barView;
@property (nonatomic) BOOL leftButtonIsBack;
@property (retain, nonatomic) UIButton *leftCancelButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL shouldShowBarView;

- (id)leftCancelButton;
- (void)setLeftCancelButton:(id)arg0;
- (double)recommendHeight;
- (void)setLeftButtonIsBack:(BOOL)arg0;
- (void)setShouldShowBarView:(BOOL)arg0;
- (void)showContentView:(BOOL)arg0;
- (BOOL)leftButtonIsBack;
- (BOOL)shouldShowBarView;
- (BOOL)shouldShowContentView;
- (void)setShouldShowContentView:(BOOL)arg0;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setHeaderView:(id)arg0;
- (id)contentView;
- (id)headerView;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)barView;
- (void)setBarView:(id)arg0;

@end