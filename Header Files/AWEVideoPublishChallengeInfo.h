//
//     Generated by private class-dump
//

@class NSString;

@interface AWEVideoPublishChallengeInfo : MTLModel <MTLJSONSerializing> {
    NSString *_challengeId;
    NSString *_challengeName;
}

@property (copy, nonatomic) NSString *challengeId;
@property (copy, nonatomic) NSString *challengeName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)challengeName;
- (void)setChallengeName:(id)arg0;
- (id)challengeId;
- (void)setChallengeId:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end
