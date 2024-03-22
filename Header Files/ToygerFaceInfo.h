//
//     Generated by private class-dump
//

@class NSArray, NSString, ToygerRect;

@interface ToygerFaceInfo : ToygerBaseModel {
    ToygerRect *_rect;
    NSArray *_points;
    NSString *_confidence;
    NSString *_quality;
    NSString *_feature;
    NSString *_feaVersion;
}

@property (copy, nonatomic) ToygerRect *rect;
@property (copy, nonatomic) NSArray *points;
@property (copy, nonatomic) NSString *confidence;
@property (copy, nonatomic) NSString *quality;
@property (copy, nonatomic) NSString *feature;
@property (copy, nonatomic) NSString *feaVersion;

- (void)setFeaVersion:(id)arg0;
- (id)feaVersion;
- (id)confidence;
- (void)setConfidence:(id)arg0;
- (void)setQuality:(id)arg0;
- (id)init;
- (id)quality;
- (void).cxx_destruct;
- (void)setRect:(id)arg0;
- (id)feature;
- (id)points;
- (id)rect;
- (void)setFeature:(id)arg0;
- (void)setPoints:(id)arg0;

@end
