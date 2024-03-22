//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEFeedIndexFeatureConfig : NSObject {
    BOOL _isStrictSessionMode;
    NSString *_featureName;
    NSArray *_feedIndexInitPullTypeList;
    NSArray *_feedIndexIncreasePullTypeList;
}

@property (copy, nonatomic) NSString *featureName;
@property (nonatomic) BOOL isStrictSessionMode;
@property (copy, nonatomic) NSArray *feedIndexInitPullTypeList;
@property (copy, nonatomic) NSArray *feedIndexIncreasePullTypeList;

- (BOOL)isStrictSessionMode;
- (void)setIsStrictSessionMode:(BOOL)arg0;
- (id)feedIndexInitPullTypeList;
- (void)setFeedIndexInitPullTypeList:(id)arg0;
- (id)feedIndexIncreasePullTypeList;
- (void)setFeedIndexIncreasePullTypeList:(id)arg0;
- (void).cxx_destruct;
- (void)setFeatureName:(id)arg0;
- (id)featureName;

@end