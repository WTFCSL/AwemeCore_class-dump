//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, NSURL, IESLiveVideoGiftIcons;

@interface IESLiveVideoGiftResourceInfo : MTLModel <MTLJSONSerializing> {
    BOOL _hasAudio;
    BOOL _blendingEnable;
    BOOL _maskContainerEnable;
    unsigned long long _contentMode;
    long long _resourceVersion;
    NSString *_resourceName;
    NSString *_vibrateResourceName;
    NSArray *_alphaFrameArray;
    NSArray *_rgbFrameArray;
    double _frames;
    double _videoOriginHeight;
    double _videoOriginWidth;
    double _videoHeight;
    double _videoWidth;
    NSDictionary *_foregroundDictionary;
    NSDictionary *_backgroundDictionary;
    IESLiveVideoGiftIcons *_icons;
    NSString *_resourceFilePath;
    NSURL *_vibrateResourceFileURL;
    NSString *_vibrateResourceFilePath;
    NSURL *_resourceFileURL;
    NSDictionary *_masksInfo;
    NSDictionary *_masksDictionary;
    NSDictionary *_resources;
    NSDictionary *_foreground;
    NSDictionary *_background;
    NSArray *_originLayers;
    NSArray *_layersOrder;
    NSDictionary *_layerDictionary;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _alphaFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rgbFrame;
}

@property (nonatomic) unsigned long long contentMode;
@property (nonatomic) long long resourceVersion;
@property (copy, nonatomic) NSString *resourceName;
@property (copy, nonatomic) NSString *vibrateResourceName;
@property (copy, nonatomic) NSArray *alphaFrameArray;
@property (copy, nonatomic) NSArray *rgbFrameArray;
@property (nonatomic) double frames;
@property (nonatomic) double videoOriginHeight;
@property (nonatomic) double videoOriginWidth;
@property (nonatomic) double videoHeight;
@property (nonatomic) double videoWidth;
@property (nonatomic) BOOL hasAudio;
@property (copy, nonatomic) NSDictionary *foregroundDictionary;
@property (copy, nonatomic) NSDictionary *backgroundDictionary;
@property (retain, nonatomic) IESLiveVideoGiftIcons *icons;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } alphaFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rgbFrame;
@property (copy, nonatomic) NSString *resourceFilePath;
@property (copy, nonatomic) NSURL *vibrateResourceFileURL;
@property (copy, nonatomic) NSString *vibrateResourceFilePath;
@property (copy, nonatomic) NSURL *resourceFileURL;
@property (retain, nonatomic) NSDictionary *masksInfo;
@property (retain, nonatomic) NSDictionary *masksDictionary;
@property (retain, nonatomic) NSDictionary *resources;
@property (copy, nonatomic) NSDictionary *foreground;
@property (copy, nonatomic) NSDictionary *background;
@property (copy, nonatomic) NSArray *originLayers;
@property (copy, nonatomic) NSArray *layersOrder;
@property (copy, nonatomic) NSDictionary *layerDictionary;
@property (nonatomic) BOOL blendingEnable;
@property (nonatomic) BOOL maskContainerEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)originLayersJSONTransformer;
+ (id)contentModeJSONTransformer;
+ (id)resourceVersionJSONTransformer;
+ (id)iconsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rgbFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alphaFrame;
- (double)videoOriginWidth;
- (double)videoOriginHeight;
- (id)masksInfo;
- (id)rgbFrameArray;
- (void)setRgbFrameArray:(id)arg0;
- (id)alphaFrameArray;
- (void)setAlphaFrameArray:(id)arg0;
- (void)setRgbFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setAlphaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)resourceFileURL;
- (BOOL)multiVideoResourceAvailable;
- (BOOL)checkResourceAvailable:(id)arg0;
- (id)vibrateResourceFileURL;
- (id)vibrateResourceFilePath;
- (void)live_replenish;
- (BOOL)resourceAvailable;
- (BOOL)vibrateAvailable;
- (id)vibrateResourceName;
- (void)setVibrateResourceName:(id)arg0;
- (void)setVideoOriginHeight:(double)arg0;
- (void)setVideoOriginWidth:(double)arg0;
- (id)foregroundDictionary;
- (void)setForegroundDictionary:(id)arg0;
- (id)backgroundDictionary;
- (void)setBackgroundDictionary:(id)arg0;
- (void)setVibrateResourceFileURL:(id)arg0;
- (void)setVibrateResourceFilePath:(id)arg0;
- (void)setResourceFileURL:(id)arg0;
- (void)setMasksInfo:(id)arg0;
- (id)masksDictionary;
- (void)setMasksDictionary:(id)arg0;
- (id)originLayers;
- (void)setOriginLayers:(id)arg0;
- (id)layersOrder;
- (void)setLayersOrder:(id)arg0;
- (id)layerDictionary;
- (void)setLayerDictionary:(id)arg0;
- (BOOL)blendingEnable;
- (void)setBlendingEnable:(BOOL)arg0;
- (BOOL)maskContainerEnable;
- (void)setMaskContainerEnable:(BOOL)arg0;
- (double)frames;
- (void)setForeground:(id)arg0;
- (void)setContentMode:(unsigned long long)arg0;
- (id)background;
- (id)resources;
- (void).cxx_destruct;
- (void)setVideoHeight:(double)arg0;
- (long long)resourceVersion;
- (id)foreground;
- (void)setBackground:(id)arg0;
- (void)setResources:(id)arg0;
- (void)setResourceName:(id)arg0;
- (void)setIcons:(id)arg0;
- (id)icons;
- (double)videoHeight;
- (BOOL)hasAudio;
- (void)setVideoWidth:(double)arg0;
- (double)videoWidth;
- (id)resourceName;
- (void)setHasAudio:(BOOL)arg0;
- (unsigned long long)contentMode;
- (void)setFrames:(double)arg0;
- (void)setResourceVersion:(long long)arg0;
- (id)resourceFilePath;
- (void)setResourceFilePath:(id)arg0;

@end
