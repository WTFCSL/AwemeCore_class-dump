//
//     Generated by private class-dump
//

@class NSString, NSDictionary, BDPLivePlayerSizeModel, NSNumber;

@interface BDPLivePlayerModel : BDPBasePluginModel {
    BOOL _muted;
    BOOL _autoplay;
    BOOL _hide;
    BOOL _autoPauseIfNavigate;
    BOOL _autoPauseIfOpenNative;
    BOOL _isLivePreview;
    BOOL _showCastingButton;
    NSString *_src;
    NSString *_objectFit;
    NSString *_orientation;
    BDPLivePlayerSizeModel *_size;
    NSString *_data;
    NSDictionary *_allHTTPHeaderFields;
    long long _pageID;
    NSString *_componentID;
    NSDictionary *_signature;
    NSNumber *_fullscreenDirection;
}

@property (copy, nonatomic) NSString *src;
@property (nonatomic) BOOL muted;
@property (nonatomic) BOOL autoplay;
@property (copy, nonatomic) NSString *objectFit;
@property (copy, nonatomic) NSString *orientation;
@property (retain, nonatomic) BDPLivePlayerSizeModel *size;
@property (nonatomic) BOOL hide;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSDictionary *allHTTPHeaderFields;
@property (nonatomic) BOOL autoPauseIfNavigate;
@property (nonatomic) BOOL autoPauseIfOpenNative;
@property (nonatomic) long long pageID;
@property (copy, nonatomic) NSString *componentID;
@property (retain, nonatomic) NSDictionary *signature;
@property (nonatomic) BOOL isLivePreview;
@property (retain, nonatomic) NSNumber *fullscreenDirection;
@property (nonatomic) BOOL showCastingButton;

+ (id)modelCustomPropertyMapper;

- (void)setHide:(BOOL)arg0;
- (BOOL)modelCustomTransformFromDictionary:(id)arg0;
- (void)setIsLivePreview:(BOOL)arg0;
- (BOOL)isLivePreview;
- (BOOL)showCastingButton;
- (id)objectFit;
- (void)setObjectFit:(id)arg0;
- (void)setFullscreenDirection:(id)arg0;
- (struct CGSize { double x0; double x1; })getTargetSize;
- (BOOL)autoPauseIfNavigate;
- (void)setAutoPauseIfNavigate:(BOOL)arg0;
- (BOOL)autoPauseIfOpenNative;
- (void)setAutoPauseIfOpenNative:(BOOL)arg0;
- (id)fullscreenDirection;
- (void)setShowCastingButton:(BOOL)arg0;
- (void)setSignature:(id)arg0;
- (id)signature;
- (id)data;
- (void).cxx_destruct;
- (BOOL)muted;
- (void)setPageID:(long long)arg0;
- (void)setMuted:(BOOL)arg0;
- (void)setData:(id)arg0;
- (long long)pageID;
- (id)orientation;
- (BOOL)hide;
- (void)setOrientation:(id)arg0;
- (id)size;
- (void)setSize:(id)arg0;
- (id)allHTTPHeaderFields;
- (void)setAllHTTPHeaderFields:(id)arg0;
- (id)src;
- (void)setSrc:(id)arg0;
- (id)componentID;
- (void)setComponentID:(id)arg0;
- (BOOL)autoplay;
- (void)setAutoplay:(BOOL)arg0;

@end