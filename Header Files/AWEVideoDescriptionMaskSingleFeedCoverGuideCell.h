//
//     Generated by private class-dump
//

@class AWEFeedCollectionContainerContext, UIImageView, UILabel, UIButton;

@interface AWEVideoDescriptionMaskSingleFeedCoverGuideCell : UICollectionViewCell {
    AWEFeedCollectionContainerContext *_containerContext;
    UIButton *_closeButton;
    UILabel *_titleLabel;
    UIImageView *_upArrowImageView;
}

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *upArrowImageView;
@property (retain, nonatomic) AWEFeedCollectionContainerContext *containerContext;

- (double)bottomSafeAreaOffset;
- (void)recognizeTapGesture;
- (id)upArrowImageView;
- (void)showGuideLabel;
- (void)hideAllView;
- (void)setUpArrowImageView:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)containerContext;
- (void)setContainerContext:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)showCloseButton;

@end
