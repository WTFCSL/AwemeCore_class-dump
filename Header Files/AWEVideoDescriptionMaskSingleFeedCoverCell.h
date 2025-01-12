//
//     Generated by private class-dump
//

@class UIView, UIImageView, AWEFeedCollectionContainerContext;

@interface AWEVideoDescriptionMaskSingleFeedCoverCell : UICollectionViewCell {
    AWEFeedCollectionContainerContext *_containerContext;
    UIView *_containerView;
    UIImageView *_firstMaskCoverImageView;
}

@property (retain, nonatomic) AWEFeedCollectionContainerContext *containerContext;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *firstMaskCoverImageView;

- (double)bottomFrame;
- (void)updateCoverImageView:(id)arg0;
- (id)firstMaskCoverImageView;
- (void)configCellWithContext:(id)arg0;
- (void)setFirstMaskCoverImageView:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)setupUI;
- (id)containerContext;
- (void)setContainerContext:(id)arg0;

@end
