//
//     Generated by private class-dump
//

@class AVAsset, NSURL, NSString;

@interface IESMediaData : NSObject {
    float _overlap;
    float _rate;
    float _maskAlpha;
    AVAsset *_asset;
    NSURL *_picPath;
    NSURL *_originalPicPath;
    long long _type;
    long long _layer;
    NSString *_assetSegmentID;
    unsigned long long _outputRotationMode;
    unsigned long long _resourceRotationMode;
    NSString *_resourceID;
    long long _scaleMode;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropRect;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _transform;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _range;
}

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) NSURL *picPath;
@property (retain, nonatomic) NSURL *originalPicPath;
@property (nonatomic) long long type;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) float overlap;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } range;
@property (nonatomic) float rate;
@property (nonatomic) long long layer;
@property (retain, nonatomic) NSString *assetSegmentID;
@property (nonatomic) unsigned long long outputRotationMode;
@property (nonatomic) unsigned long long resourceRotationMode;
@property (retain, nonatomic) NSString *resourceID;
@property (nonatomic) float maskAlpha;
@property (nonatomic) long long scaleMode;

- (unsigned long long)outputRotationMode;
- (void)setOutputRotationMode:(unsigned long long)arg0;
- (id)assetSegmentID;
- (unsigned long long)resourceRotationMode;
- (id)picPath;
- (float)maskAlpha;
- (void)setMaskAlpha:(float)arg0;
- (void)setPicPath:(id)arg0;
- (id)originalPicPath;
- (void)setOriginalPicPath:(id)arg0;
- (void)setAssetSegmentID:(id)arg0;
- (void)setResourceRotationMode:(unsigned long long)arg0;
- (id)init;
- (void)setResourceID:(id)arg0;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setLayer:(long long)arg0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRect;
- (id)resourceID;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range;
- (long long)type;
- (void)setRate:(float)arg0;
- (void)setType:(long long)arg0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (float)rate;
- (long long)layer;
- (id)asset;
- (void)setAsset:(id)arg0;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;
- (float)overlap;
- (void)setOverlap:(float)arg0;
- (void)setScaleMode:(long long)arg0;
- (long long)scaleMode;

@end
