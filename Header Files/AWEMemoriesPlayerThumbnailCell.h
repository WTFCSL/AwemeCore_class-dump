//
//     Generated by private class-dump
//

@class UIImageView, NSString, AWEMemoriesPlayerTileModel;

@interface AWEMemoriesPlayerThumbnailCell : UICollectionViewCell {
    int _imageRequestID;
    AWEMemoriesPlayerTileModel *_model;
    UIImageView *_imageView;
    double _screenScale;
    NSString *_localIdentifier;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) int imageRequestID;
@property (nonatomic) double screenScale;
@property (copy, nonatomic) NSString *localIdentifier;
@property (retain, nonatomic) AWEMemoriesPlayerTileModel *model;

- (void)p_setupUI;
- (double)screenScale;
- (void)setModel:(id)arg0;
- (struct CGSize { double x0; double x1; })imageSize;
- (void).cxx_destruct;
- (id)model;
- (id)imageView;
- (id)localIdentifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)setScreenScale:(double)arg0;
- (void)setLocalIdentifier:(id)arg0;
- (void)setImageRequestID:(int)arg0;
- (int)imageRequestID;

@end
