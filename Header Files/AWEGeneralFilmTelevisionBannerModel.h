//
//     Generated by private class-dump
//

@class NSURL, AWEURLModel;

@interface AWEGeneralFilmTelevisionBannerModel : AWEBaseApiModel {
    NSURL *_link;
    AWEURLModel *_image;
}

@property (copy, nonatomic) NSURL *link;
@property (retain, nonatomic) AWEURLModel *image;

+ (id)imageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setLink:(id)arg0;
- (void).cxx_destruct;
- (id)image;
- (void)setImage:(id)arg0;
- (id)link;

@end