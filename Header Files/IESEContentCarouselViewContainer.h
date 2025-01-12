//
//     Generated by private class-dump
//

@class NSString, UIImageView, IESECURLModel;

@interface IESEContentCarouselViewContainer : UICollectionViewCell {
    UIImageView *_imageView;
    NSString *_bizTag;
    NSString *_sceneTag;
    UIImageView *_promotionImageView;
    IESECURLModel *_promotionImageModel;
}

@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (retain, nonatomic) UIImageView *promotionImageView;
@property (retain, nonatomic) IESECURLModel *promotionImageModel;
@property (retain, nonatomic) UIImageView *imageView;

- (void)setBizTag:(id)arg0;
- (id)bizTag;
- (id)sceneTag;
- (void)setSceneTag:(id)arg0;
- (void)bindURLModel:(id)arg0;
- (id)promotionImageView;
- (id)promotionImageModel;
- (void)setPromotionImageModel:(id)arg0;
- (void)bindActivityURLModel:(id)arg0;
- (void)unbindActivityURLModel;
- (void)setPromotionImageView:(id)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;

@end
