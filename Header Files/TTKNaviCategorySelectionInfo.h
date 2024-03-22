//
//     Generated by private class-dump
//

@class NSString;

@interface TTKNaviCategorySelectionInfo : NSObject {
    BOOL _isMetal;
    BOOL _passSlider;
    BOOL _subMetal;
    BOOL _subPassSlider;
    BOOL _applyCollection;
    double _colorRatio;
    unsigned long long _subColorType;
    double _subColorRatio;
    NSString *_stickerName;
    NSString *_resourceId;
    NSString *_inspirationKey;
    NSString *_colorKey;
    NSString *_subColorKey;
}

@property (nonatomic) double colorRatio;
@property (nonatomic) BOOL isMetal;
@property (nonatomic) BOOL passSlider;
@property (nonatomic) unsigned long long subColorType;
@property (nonatomic) double subColorRatio;
@property (nonatomic) BOOL subMetal;
@property (nonatomic) BOOL subPassSlider;
@property (nonatomic) BOOL applyCollection;
@property (copy, nonatomic) NSString *stickerName;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *inspirationKey;
@property (copy, nonatomic) NSString *colorKey;
@property (copy, nonatomic) NSString *subColorKey;

- (id)resourceId;
- (void)setResourceId:(id)arg0;
- (void)setInspirationKey:(id)arg0;
- (id)colorKey;
- (id)inspirationKey;
- (double)colorRatio;
- (void)setColorRatio:(double)arg0;
- (void)setIsMetal:(BOOL)arg0;
- (BOOL)passSlider;
- (void)setPassSlider:(BOOL)arg0;
- (unsigned long long)subColorType;
- (void)setSubColorType:(unsigned long long)arg0;
- (double)subColorRatio;
- (void)setSubColorRatio:(double)arg0;
- (BOOL)subMetal;
- (void)setSubMetal:(BOOL)arg0;
- (BOOL)subPassSlider;
- (void)setSubPassSlider:(BOOL)arg0;
- (void)setColorKey:(id)arg0;
- (id)subColorKey;
- (void)setSubColorKey:(id)arg0;
- (void)syncColorSelection:(id)arg0;
- (BOOL)applyCollection;
- (void)setApplyCollection:(BOOL)arg0;
- (void).cxx_destruct;
- (id)stickerName;
- (void)setStickerName:(id)arg0;
- (BOOL)isMetal;

@end