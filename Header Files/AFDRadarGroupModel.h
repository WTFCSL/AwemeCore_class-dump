//
//     Generated by private class-dump
//

@class AFDRadarInnerGroupModel;

@interface AFDRadarGroupModel : AWEBaseApiModel {
    BOOL _hasJoined;
    long long _status;
    AFDRadarInnerGroupModel *_groupInfo;
}

@property (nonatomic) long long status;
@property (nonatomic) BOOL hasJoined;
@property (retain, nonatomic) AFDRadarInnerGroupModel *groupInfo;

+ (id)groupInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (long long)status;
- (void)setStatus:(long long)arg0;
- (id)groupInfo;
- (BOOL)hasJoined;
- (void)setHasJoined:(BOOL)arg0;
- (void)setGroupInfo:(id)arg0;

@end
