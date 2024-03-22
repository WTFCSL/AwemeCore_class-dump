//
//     Generated by private class-dump
//

@class DUXBasicButton, NSString, UILabel, UIView;

@interface AWEPLVAppointmentHeaderView : UICollectionReusableView <AWEPadCollectionReusableViewLayoutProtocol> {
    id /* block */ _onBookCallback;
    UIView *_containerView;
    UILabel *_titleLabel;
    DUXBasicButton *_refreshButton;
    UILabel *_refreshLabel;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXBasicButton *refreshButton;
@property (retain, nonatomic) UILabel *refreshLabel;
@property (copy, nonatomic) id /* block */ onBookCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithModel:(id)arg0 collectionViewSize:(struct CGSize { double x0; double x1; })arg1 contentSize:(struct CGSize { double x0; double x1; })arg2;
+ (double)heightWithBreakPoint:(struct { long long x0; long long x1; })arg0;

- (void)setRefreshLabel:(id)arg0;
- (id)refreshLabel;
- (void)configHeaderViewInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)showLoadingAnimation:(BOOL)arg0;
- (void)updateViewForBreakPoint;
- (void)setOnBookCallback:(id /* block */)arg0;
- (void)onBookBtnClicked:(id)arg0;
- (id /* block */)onBookCallback;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)setTitleLabel:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setupView;
- (id)refreshButton;
- (void)setRefreshButton:(id)arg0;

@end