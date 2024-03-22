//
//     Generated by private class-dump
//

@class UIButton, UILabel;
@protocol AWEFollowListRecommendCardHeaderDelegate;

@interface AWEFollowListRecommendCardHeader : UICollectionReusableView {
    id<AWEFollowListRecommendCardHeaderDelegate> _delegate;
    UIButton *_closeButton;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) id<AWEFollowListRecommendCardHeaderDelegate> delegate;

- (void)closeButtonClicked:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;

@end
