//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIImage, UILabel, UIScrollView, AWEUILoadingView;
@protocol AWEPhotosPreviewCollectionViewCellDelegate;

@interface AWEPhotosPreviewCollectionViewCell : UICollectionViewCell <UIScrollViewDelegate> {
    BOOL _hdImageLoaded;
    UIImageView *_imageView;
    id<AWEPhotosPreviewCollectionViewCellDelegate> _delegate;
    UIImage *_thumbnailImage;
    UILabel *_watermarkLabel;
    UIScrollView *_scrollView;
    AWEUILoadingView *_loadingView;
    double _previousScale;
}

@property (retain, nonatomic) UIImage *thumbnailImage;
@property (retain, nonatomic) UILabel *watermarkLabel;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL hdImageLoaded;
@property (nonatomic) double previousScale;
@property (retain, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) id<AWEPhotosPreviewCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setThumbnailURLs:(id)arg0 imageURLs:(id)arg1 watermark:(id)arg2;
- (void)setThumbnailURLs:(id)arg0 imageURLs:(id)arg1 watermark:(id)arg2 imageReqConfig:(id)arg3;
- (void)setHdImageLoaded:(BOOL)arg0;
- (id)watermarkLabel;
- (void)loadImageWithImageManagerThumbnailURLs:(id)arg0 imageURLs:(id)arg1 watermark:(id)arg2 config:(id)arg3;
- (void)loadImageWithImageViewThumbnailURLs:(id)arg0 imageURLs:(id)arg1 watermark:(id)arg2;
- (BOOL)hdImageLoaded;
- (void)p_setImgViewFrameAfterSetImg;
- (void)updateWatermarkLabelConstraints;
- (struct CGSize { double x0; double x1; })p_resizeImageSize:(struct CGSize { double x0; double x1; })arg0 viewSize:(struct CGSize { double x0; double x1; })arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_alignPictureWithImgSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setMaxZoomScalesForCurrentBounds;
- (void)setThumbnailURLs:(id)arg0 imageURLs:(id)arg1;
- (void)setupScrollViewWithPreviewsScale:(double)arg0 contentOffset:(struct CGPoint { double x0; double x1; })arg1;
- (void)setWatermarkLabel:(id)arg0;
- (void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1;
- (void)setScrollView:(id)arg0;
- (void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(double)arg2;
- (id)viewForZoomingInScrollView:(id)arg0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (id)delegate;
- (void)scrollViewDidZoom:(id)arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (id)scrollView;
- (id)thumbnailImage;
- (void)setThumbnailImage:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (double)previousScale;
- (void)setPreviousScale:(double)arg0;

@end
