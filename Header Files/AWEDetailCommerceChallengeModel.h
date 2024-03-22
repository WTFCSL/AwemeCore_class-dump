//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDetailCommerceChallengeModel : AWEDetailCommonDiffableModel <IGListDiffable, AWEDetailRoutable> {
    NSString *_challengeName;
    NSString *_challengeAvatarURLString;
    NSString *_challengeDescription;
    NSString *_challengeOpenURLString;
    NSString *_challengeID;
}

@property (copy, nonatomic) NSString *challengeName;
@property (copy, nonatomic) NSString *challengeAvatarURLString;
@property (copy, nonatomic) NSString *challengeDescription;
@property (copy, nonatomic) NSString *challengeOpenURLString;
@property (copy, nonatomic) NSString *challengeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)challengeName;
- (void)setChallengeName:(id)arg0;
- (id)challengeDescription;
- (void)setChallengeDescription:(id)arg0;
- (id)challengeAvatarURLString;
- (id)routeURLString;
- (id)challengeOpenURLString;
- (void)setChallengeAvatarURLString:(id)arg0;
- (void)setChallengeOpenURLString:(id)arg0;
- (void).cxx_destruct;
- (id)challengeID;
- (void)setChallengeID:(id)arg0;

@end