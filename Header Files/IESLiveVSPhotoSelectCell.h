//
//     Generated by private class-dump
//

@class UIImageView, NSIndexPath, PHAsset;

@interface IESLiveVSPhotoSelectCell : UICollectionViewCell {
    int _requestID;
    NSIndexPath *_index;
    PHAsset *_asset;
    UIImageView *_photoImageView;
}

@property (retain, nonatomic) UIImageView *photoImageView;
@property (nonatomic) int requestID;
@property (retain, nonatomic) NSIndexPath *index;
@property (retain, nonatomic) PHAsset *asset;

+ (id)identifier;

- (double)selfwidth;
- (void)updateWithPHAsset:(id)arg0;
- (void)setIndex:(id)arg0;
- (void)setRequestID:(int)arg0;
- (int)requestID;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)index;
- (void)prepareForReuse;
- (id)asset;
- (void)layoutSubviews;
- (void)setAsset:(id)arg0;
- (struct CGSize { double x0; double x1; })cellSize;
- (id)photoImageView;
- (void)setPhotoImageView:(id)arg0;

@end