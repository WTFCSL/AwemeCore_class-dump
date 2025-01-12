//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEPOIRecommendActivityModel : AWEBaseApiModel <AWEStudioPOIRecommendActivityModelProtocol> {
    NSString *_activityID;
    NSString *_activityTitle;
    NSString *_activityDescription;
    AWEURLModel *_activityURL;
    NSString *_activitySchema;
    NSString *_activitySource;
    unsigned long long _activityType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *activityTitle;
@property (copy, nonatomic) NSString *activityDescription;
@property (retain, nonatomic) AWEURLModel *activityURL;
@property (copy, nonatomic) NSString *activitySchema;
@property (copy, nonatomic) NSString *activitySource;
@property (nonatomic) unsigned long long activityType;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setActivityURL:(id)arg0;
- (id)activitySchema;
- (void)setActivitySchema:(id)arg0;
- (id)activitySource;
- (void)setActivitySource:(id)arg0;
- (void)setActivityType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)activityType;
- (void)setActivityDescription:(id)arg0;
- (id)activityDescription;
- (void)setActivityTitle:(id)arg0;
- (id)activityTitle;
- (id)activityID;
- (id)activityURL;
- (void)setActivityID:(id)arg0;

@end
