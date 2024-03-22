//
//     Generated by private class-dump
//

@class NSString, ACCImageAlbumItemDraftResourceRestorableModel;

@interface ACCImageAlbumItemCropInfo : ACCImageAlbumItemDraftResourceRestorableModel {
    unsigned long long _cropRatio;
    double _zoomScale;
    ACCImageAlbumItemDraftResourceRestorableModel *_compressedCroppedImageInfo;
    struct CGPoint { double x; double y; } _contentOffset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropRect;
}

@property (nonatomic) unsigned long long cropRatio;
@property (readonly, copy, nonatomic) NSString *cropRatioString;
@property (nonatomic) double zoomScale;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (readonly, nonatomic) BOOL hasCropped;
@property (retain, nonatomic) ACCImageAlbumItemDraftResourceRestorableModel *compressedCroppedImageInfo;

+ (id)cropRatioString:(unsigned long long)arg0;
+ (id)cropRatioStringWithSize:(struct CGSize { double x0; double x1; })arg0;
+ (id)originalCropRatio:(struct CGSize { double x0; double x1; })arg0;

- (BOOL)hasCropped;
- (unsigned long long)cropRatio;
- (void)setCropRatio:(unsigned long long)arg0;
- (id)initWithTaskId:(id)arg0;
- (id)compressedCroppedImageInfo;
- (id)cropRatioString;
- (BOOL)didInfosChangedWithTarget:(id)arg0;
- (void)setCompressedCroppedImageInfo:(id)arg0;
- (void)setZoomScale:(double)arg0;
- (double)zoomScale;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRect;

@end
