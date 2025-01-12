//
//     Generated by private class-dump
//

@class IESLiveThreadSafeDictionary, NSString;
@protocol IESLivePEFeatureSetDelegate;

@interface IESLivePEFeatureSet : NSObject <IESLivePEFeatureCollector> {
    id<IESLivePEFeatureSetDelegate> _delegate;
    IESLiveThreadSafeDictionary *_featureDic;
}

@property (retain, nonatomic) IESLiveThreadSafeDictionary *featureDic;
@property (weak, nonatomic) id<IESLivePEFeatureSetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectFeature:(id)arg0 withBoolValue:(BOOL)arg1;
- (void)collectFeature:(id)arg0 withIntValue:(long long)arg1;
- (void)collectFeature:(id)arg0 withDoubleValue:(double)arg1;
- (void)collectFeature:(id)arg0 withStringValue:(id)arg1;
- (void)collectFeature:(id)arg0;
- (id)featureDic;
- (void)featureChanged:(id)arg0 withValue:(id)arg1;
- (void)setFeatureDic:(id)arg0;
- (id)featureSet;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)addFeature:(id)arg0;

@end
