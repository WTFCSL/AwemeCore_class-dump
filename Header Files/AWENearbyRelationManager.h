//
//     Generated by private class-dump
//

@interface AWENearbyRelationManager : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (void)increaseRelationCardShowedCount;
- (void)trackShowFreshFollowCardWithCandidateModel:(id)arg0;
- (void)resetRelationCardShowedCount;
- (void)trackClickFreshFollowCardWithCandidateModel:(id)arg0;
- (id)__relationCardShowedCountKey;
- (long long)__relationCardUnclickThreshold;
- (void)__trackFreshFollowCardWithCandidateModel:(id)arg0 isClickEvent:(BOOL)arg1;
- (BOOL)shouldShowRelationCard;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end
