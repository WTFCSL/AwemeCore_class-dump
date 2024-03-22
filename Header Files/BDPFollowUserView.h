//
//     Generated by private class-dump
//

@class UIButton, UIImageView, UILabel;
@protocol BDPFollowUserViewDelegate;

@interface BDPFollowUserView : UIView {
    id<BDPFollowUserViewDelegate> _delegate;
    UIButton *_closeBtn;
    UIImageView *_headerImgView;
    UILabel *_nameLabel;
    UILabel *_descriptionLabel;
    UIButton *_followBtn;
    double _maxLabelWidth;
}

@property (weak, nonatomic) id<BDPFollowUserViewDelegate> delegate;

- (void)closeBtnClicked:(id)arg0;
- (void)followBtnClicked:(id)arg0;
- (void)refreshUIWithUserInfo:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setupUI;

@end