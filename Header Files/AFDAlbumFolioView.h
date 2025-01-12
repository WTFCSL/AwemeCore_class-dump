//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface AFDAlbumFolioView : UIView {
    long long _style;
    UIView *_containerView;
    UILabel *_folioLabel;
}

@property (nonatomic) long long style;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *folioLabel;

- (void)hideWithDelay:(double)arg0 animate:(BOOL)arg1;
- (void)updateWithCurrentIndex:(long long)arg0 totalCount:(long long)arg1;
- (void)showWithAnimate:(BOOL)arg0;
- (id)folioLabel;
- (void)cancelHidePerformRequests;
- (void)animatedShow;
- (void)animatedHide;
- (void)setFolioLabel:(id)arg0;
- (long long)style;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg0;
- (void)show;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)hide;
- (void)setStyle:(long long)arg0;
- (void)setupUI;

@end
