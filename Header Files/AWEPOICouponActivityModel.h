//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPOICouponActivityModel : AWEBaseApiModel {
    long long _activityID;
    NSString *_activityTitle;
}

@property (nonatomic) long long activityID;
@property (copy, nonatomic) NSString *activityTitle;

+ (id)activityIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setActivityTitle:(id)arg0;
- (id)activityTitle;
- (long long)activityID;
- (void)setActivityID:(long long)arg0;

@end
