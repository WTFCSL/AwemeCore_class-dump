//
//     Generated by private class-dump
//

@class IEFFeatureCenterConfig;

@interface IESCombineFeatureConfig : NSObject {
    BOOL _enable;
    long long _range;
    long long _excludeThis;
    IEFFeatureCenterConfig *_combinesConfig;
}

@property (nonatomic) BOOL enable;
@property (nonatomic) long long range;
@property (nonatomic) long long excludeThis;
@property (retain, nonatomic) IEFFeatureCenterConfig *combinesConfig;

- (id)initWithJSONDict:(id)arg0 enableCloudScore:(BOOL)arg1;
- (void)setCombinesConfig:(id)arg0;
- (long long)excludeThis;
- (void)setExcludeThis:(long long)arg0;
- (id)combinesConfig;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setRange:(long long)arg0;
- (long long)range;
- (void)setEnable:(BOOL)arg0;
- (id)initWithJSONDict:(id)arg0;

@end
