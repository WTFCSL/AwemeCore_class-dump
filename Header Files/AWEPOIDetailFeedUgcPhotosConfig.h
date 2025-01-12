//
//     Generated by private class-dump
//

@interface AWEPOIDetailFeedUgcPhotosConfig : NSObject {
    BOOL _radiusOnOuterOnly;
    BOOL _hiddenCountTipView;
    long long _maxPhotoCount;
    long long _numberOfColumns;
    double _photoRadius;
    double _maxWidth;
    double _lineSpacing;
    double _itemSpacing;
    double _singlePhotoSize;
}

@property (nonatomic) long long maxPhotoCount;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic) double photoRadius;
@property (nonatomic) BOOL radiusOnOuterOnly;
@property (nonatomic) double maxWidth;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double singlePhotoSize;
@property (nonatomic) BOOL hiddenCountTipView;

- (double)photoRadius;
- (void)setPhotoRadius:(double)arg0;
- (BOOL)radiusOnOuterOnly;
- (void)setRadiusOnOuterOnly:(BOOL)arg0;
- (double)singlePhotoSize;
- (void)setSinglePhotoSize:(double)arg0;
- (BOOL)hiddenCountTipView;
- (void)setHiddenCountTipView:(BOOL)arg0;
- (id)init;
- (void)setMaxWidth:(double)arg0;
- (double)itemSpacing;
- (void)setMaxPhotoCount:(long long)arg0;
- (void)setItemSpacing:(double)arg0;
- (double)maxWidth;
- (long long)numberOfColumns;
- (void)setNumberOfColumns:(long long)arg0;
- (long long)maxPhotoCount;
- (double)lineSpacing;
- (void)setLineSpacing:(double)arg0;

@end
