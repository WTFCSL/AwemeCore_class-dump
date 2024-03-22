//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIView;
@protocol AWEChallengeVideoHeadViewDelegate;

@interface AWEChallengeVideoHeadView : UIView {
    id<AWEChallengeVideoHeadViewDelegate> _delegate;
    UILabel *_titleLabel;
    UIView *_sortView;
    UILabel *_sortLabel;
    UIImageView *_sortIcon;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *sortView;
@property (retain, nonatomic) UILabel *sortLabel;
@property (retain, nonatomic) UIImageView *sortIcon;
@property (weak, nonatomic) id<AWEChallengeVideoHeadViewDelegate> delegate;

- (void)p_setupUI;
- (id)sortLabel;
- (void)setSortLabel:(id)arg0;
- (void)updateSortType:(unsigned long long)arg0;
- (id)sortIcon;
- (void)onClickSortView;
- (void)setSortIcon:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setSortView:(id)arg0;
- (id)sortView;

@end