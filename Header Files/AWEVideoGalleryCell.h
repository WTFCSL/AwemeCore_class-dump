//
//     Generated by private class-dump
//

@class AWEAssetModel, UIImageView, AWECircularProgressView, UILabel, ACCGradientMaskView, UIView;

@interface AWEVideoGalleryCell : UICollectionViewCell {
    BOOL _useForAmericaRecordOptim;
    BOOL _checkMarkSelectedStyle;
    BOOL _animationFinished;
    int _imageRequestID;
    AWEAssetModel *_assetModel;
    id /* block */ _didSelectPhotoBlock;
    id /* block */ _didFetchThumbnailBlock;
    UILabel *_timeLabel;
    UIImageView *_thumbnailImageView;
    UIImageView *_selectedImageView;
    ACCGradientMaskView *_selectedGradientView;
    UIView *_maskView;
    UIView *_selectPhotoView;
    UIImageView *_unCheckImageView;
    UIImageView *_numberBackGroundImageView;
    UILabel *_numberLabel;
    double _screenScale;
    AWECircularProgressView *_circularProgressView;
}

@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImageView *thumbnailImageView;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) ACCGradientMaskView *selectedGradientView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *selectPhotoView;
@property (retain, nonatomic) UIImageView *unCheckImageView;
@property (retain, nonatomic) UIImageView *numberBackGroundImageView;
@property (retain, nonatomic) UILabel *numberLabel;
@property (nonatomic) int imageRequestID;
@property (nonatomic) double screenScale;
@property (retain, nonatomic) AWECircularProgressView *circularProgressView;
@property (nonatomic) BOOL animationFinished;
@property (retain, nonatomic) AWEAssetModel *assetModel;
@property (nonatomic) BOOL useForAmericaRecordOptim;
@property (nonatomic) BOOL checkMarkSelectedStyle;
@property (copy, nonatomic) id /* block */ didSelectPhotoBlock;
@property (copy, nonatomic) id /* block */ didFetchThumbnailBlock;

+ (id)identifier;

- (id)assetModel;
- (void)setAssetModel:(id)arg0;
- (void)setSelectPhotoView:(id)arg0;
- (id)selectPhotoView;
- (void)showAlreadySelectedHint:(BOOL)arg0;
- (id)selectedGradientView;
- (double)checkImageHeight;
- (id)unCheckImageView;
- (id)numberBackGroundImageView;
- (void)setSelectedGradientView:(id)arg0;
- (void)setUnCheckImageView:(id)arg0;
- (void)setNumberBackGroundImageView:(id)arg0;
- (void)doSelectedAnimation;
- (void)setDidSelectPhotoBlock:(id /* block */)arg0;
- (void)configureCellWithAsset:(id)arg0 greyMode:(BOOL)arg1 showRightTopIcon:(BOOL)arg2;
- (void)setCheckMarkSelectedStyle:(BOOL)arg0;
- (BOOL)checkMarkSelectedStyle;
- (void)selectPhotoButtonClick:(id)arg0;
- (id /* block */)didSelectPhotoBlock;
- (void)configureCellWithAsset:(id)arg0 greyMode:(BOOL)arg1 showRightTopIcon:(BOOL)arg2 alreadySelect:(BOOL)arg3;
- (BOOL)useForAmericaRecordOptim;
- (void)removeiCloudKVOObservor;
- (void)addiCloudKVOObservor;
- (void)updatePhotoSelectedWithNum:(id)arg0 greyMode:(BOOL)arg1;
- (id /* block */)didFetchThumbnailBlock;
- (void)runScaleAnimationWithCallback:(id /* block */)arg0;
- (void)setUseForAmericaRecordOptim:(BOOL)arg0;
- (void)setDidFetchThumbnailBlock:(id /* block */)arg0;
- (double)screenScale;
- (void).cxx_destruct;
- (id)maskView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTimeLabel:(id)arg0;
- (void)prepareForReuse;
- (void)setScreenScale:(double)arg0;
- (id)timeLabel;
- (void)setMaskView:(id)arg0;
- (id)thumbnailImage;
- (id)thumbnailImageView;
- (void)setThumbnailImageView:(id)arg0;
- (void)setImageRequestID:(int)arg0;
- (int)imageRequestID;
- (id)circularProgressView;
- (void)setCircularProgressView:(id)arg0;
- (void)setAnimationFinished:(BOOL)arg0;
- (BOOL)animationFinished;
- (id)numberLabel;
- (void)setNumberLabel:(id)arg0;
- (id)selectedImageView;
- (void)setSelectedImageView:(id)arg0;

@end