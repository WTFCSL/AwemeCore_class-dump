//
//     Generated by private class-dump
//

@class AWEURLModel;

@interface AWEPOICoverImageModel : AWEBaseApiModel {
    AWEURLModel *_imageLarge;
    AWEURLModel *_imageThumb;
    AWEURLModel *_imageSmall;
}

@property (retain, nonatomic) AWEURLModel *imageLarge;
@property (retain, nonatomic) AWEURLModel *imageThumb;
@property (retain, nonatomic) AWEURLModel *imageSmall;

+ (id)JSONKeyPathsByPropertyKey;

- (id)imageLarge;
- (id)imageThumb;
- (void)setImageLarge:(id)arg0;
- (void)setImageThumb:(id)arg0;
- (id)imageSmall;
- (void)setImageSmall:(id)arg0;
- (void).cxx_destruct;

@end
