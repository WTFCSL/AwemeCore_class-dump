//
//     Generated by private class-dump
//

@protocol SECFeatureProtocol;

@interface SECFeatureDetector : NSObject {
    id<SECFeatureProtocol> _customFeature;
}

+ (void)setupWithFeatures:(id)arg0;
+ (id)shared;
+ (id)feature;

- (void).cxx_destruct;

@end