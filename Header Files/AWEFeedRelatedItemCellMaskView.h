//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface AWEFeedRelatedItemCellMaskView : UIView {
    UIView *_containerView;
    UIImageView *_justWatchedImageView;
    UILabel *_justWatchedLabel;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *justWatchedImageView;
@property (retain, nonatomic) UILabel *justWatchedLabel;

- (id)justWatchedLabel;
- (id)justWatchedImageView;
- (void)setJustWatchedImageView:(id)arg0;
- (void)setJustWatchedLabel:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)setupUI;

@end
