//
//     Generated by private class-dump
//

@class IESMMKeyFrameInfo, NSString, UIColor;

@interface IESMMCanvasSource : NSObject <NSCopying, KeyFrameOperationDelegate> {
    BOOL _isAutoFitScale;
    BOOL _flipX;
    BOOL _flipY;
    BOOL _enableAntiAliasing;
    double _scale;
    double _rotateAngle;
    unsigned long long _rotateMode;
    double _alpha;
    NSString *_videoTrackID;
    UIColor *_borderColor;
    long long _borderWidth;
    IESMMKeyFrameInfo *_canvasKeyFrameInfo;
    struct CGPoint { double x; double y; } _centerPos;
}

@property (retain, nonatomic) IESMMKeyFrameInfo *canvasKeyFrameInfo;
@property (nonatomic) struct CGPoint { double x; double y; } centerPos;
@property (nonatomic) double scale;
@property (nonatomic) double rotateAngle;
@property (nonatomic) BOOL isAutoFitScale;
@property (nonatomic) unsigned long long rotateMode;
@property (nonatomic) BOOL flipX;
@property (nonatomic) BOOL flipY;
@property (nonatomic) double alpha;
@property (nonatomic) NSString *videoTrackID;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) long long borderWidth;
@property (nonatomic) BOOL enableAntiAliasing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)canvasSourceWithDic:(id)arg0;

- (void)setkeyFrameInfo:(id)arg0 withPts:(unsigned long long)arg1;
- (void)removekeyFrameInfo:(unsigned long long)arg0;
- (void)setCenterPos:(struct CGPoint { double x0; double x1; })arg0;
- (void)setRotateAngle:(double)arg0;
- (void)setEnableAntiAliasing:(BOOL)arg0;
- (BOOL)nle_equalToCanvasSource:(id)arg0;
- (struct CGPoint { double x0; double x1; })centerPos;
- (double)rotateAngle;
- (id)videoTrackID;
- (void)setVideoTrackID:(id)arg0;
- (id)toDicInfo;
- (void)removeallKeyFrameInfo;
- (id)getKeyFrameInfo;
- (void)completeUpdateAllkeyFrames;
- (unsigned long long)getKeyFrameNum;
- (BOOL)needRefreshKeyFrame;
- (void)setRotateMode:(unsigned long long)arg0;
- (void)setCanvasKeyFrameInfo:(id)arg0;
- (unsigned long long)rotateMode;
- (BOOL)isAutoFitScale;
- (void)setIsAutoFitScale:(BOOL)arg0;
- (id)canvasKeyFrameInfo;
- (BOOL)enableAntiAliasing;
- (long long)borderWidth;
- (id)init;
- (void).cxx_destruct;
- (id)borderColor;
- (void)setAlpha:(double)arg0;
- (void)setBorderColor:(id)arg0;
- (void)setFlipY:(BOOL)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (double)scale;
- (void)setBorderWidth:(long long)arg0;
- (id)debugDescription;
- (void)setFlipX:(BOOL)arg0;
- (double)alpha;
- (BOOL)flipX;
- (BOOL)flipY;
- (void)setScale:(double)arg0;

@end