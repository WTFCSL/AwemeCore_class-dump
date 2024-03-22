//
//     Generated by private class-dump
//

@class NSString, NSURL;

@interface BDXCategoryImageCellModel : BDXCategoryIndicatorCellModel {
    BOOL _imageZoomEnabled;
    id /* block */ _loadImageCallback;
    NSString *_imageName;
    NSURL *_imageURL;
    NSString *_selectedImageName;
    NSURL *_selectedImageURL;
    double _imageCornerRadius;
    double _imageZoomScale;
    struct CGSize { double width; double height; } _imageSize;
}

@property (copy, nonatomic) id /* block */ loadImageCallback;
@property (copy, nonatomic) NSString *imageName;
@property (retain, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *selectedImageName;
@property (retain, nonatomic) NSURL *selectedImageURL;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double imageCornerRadius;
@property (nonatomic, getter=isImageZoomEnabled) BOOL imageZoomEnabled;
@property (nonatomic) double imageZoomScale;

- (id)selectedImageURL;
- (void)setSelectedImageURL:(id)arg0;
- (id)selectedImageName;
- (void)setSelectedImageName:(id)arg0;
- (id /* block */)loadImageCallback;
- (BOOL)isImageZoomEnabled;
- (double)imageZoomScale;
- (void)setLoadImageCallback:(id /* block */)arg0;
- (void)setImageZoomEnabled:(BOOL)arg0;
- (void)setImageZoomScale:(double)arg0;
- (struct CGSize { double x0; double x1; })imageSize;
- (void).cxx_destruct;
- (id)imageName;
- (void)setImageName:(id)arg0;
- (void)setImageURL:(id)arg0;
- (id)imageURL;
- (void)setImageSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setImageCornerRadius:(double)arg0;
- (double)imageCornerRadius;

@end
