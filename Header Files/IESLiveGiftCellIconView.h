//
//     Generated by private class-dump
//

@class UIImageView, HTSLiveGiftItem;

@interface IESLiveGiftCellIconView : UIView {
    UIImageView *_imageView;
    HTSLiveGiftItem *_giftItem;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) HTSLiveGiftItem *giftItem;

- (void)updateGiftItem:(id)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)setupUI;
- (id)giftItem;
- (void)setGiftItem:(id)arg0;

@end
