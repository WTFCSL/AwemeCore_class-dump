//
//     Generated by private class-dump
//

@class PHAsset, UIImage, AVAsset;

@interface AWEStudioCommentEditSourceModel : NSObject {
    long long _sourceType;
    PHAsset *_sourcePhAsset;
    UIImage *_image;
    AVAsset *_asset;
}

@property (nonatomic) long long sourceType;
@property (retain, nonatomic) PHAsset *sourcePhAsset;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) AVAsset *asset;

- (id)sourcePhAsset;
- (void)setSourcePhAsset:(id)arg0;
- (void)setSourceType:(long long)arg0;
- (long long)sourceType;
- (void).cxx_destruct;
- (id)image;
- (void)setImage:(id)arg0;
- (id)asset;
- (void)setAsset:(id)arg0;

@end
