//
//     Generated by private class-dump
//

@class UIImageView;

@interface AWEVideoClipAddButtonCollectionViewCell : UICollectionViewCell {
    id /* block */ _didTapBlock;
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) id /* block */ didTapBlock;

- (id /* block */)didTapBlock;
- (void)setDidTapBlock:(id /* block */)arg0;
- (void)p_tapAction;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;

@end
