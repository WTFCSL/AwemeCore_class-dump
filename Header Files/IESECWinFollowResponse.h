//
//     Generated by private class-dump
//

@class NSString, IESECRelationActivityDynamicComponentModel;

@interface IESECWinFollowResponse : IESECBaseApiModel {
    NSString *_followSuccessMsg;
    long long _followStatus;
    IESECRelationActivityDynamicComponentModel *_module;
}

@property (copy, nonatomic) NSString *followSuccessMsg;
@property (nonatomic) long long followStatus;
@property (retain, nonatomic) IESECRelationActivityDynamicComponentModel *module;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)followStatus;
- (void)setFollowStatus:(long long)arg0;
- (id)followSuccessMsg;
- (void)setFollowSuccessMsg:(id)arg0;
- (void).cxx_destruct;
- (id)module;
- (void)setModule:(id)arg0;

@end
