//
//     Generated by private class-dump
//

@class AWEChallengeModel, NSString, AWEPOICouponActivityModel;

@interface AWEPOIScanActivityInfo : NSObject {
    AWEPOICouponActivityModel *_couponActivity;
    AWEChallengeModel *_challenge;
    NSString *_stickerId;
}

@property (retain, nonatomic) AWEPOICouponActivityModel *couponActivity;
@property (retain, nonatomic) AWEChallengeModel *challenge;
@property (copy, nonatomic) NSString *stickerId;

- (void)setStickerId:(id)arg0;
- (id)stickerId;
- (id)couponActivity;
- (BOOL)hasValidActivity;
- (void)setCouponActivity:(id)arg0;
- (void).cxx_destruct;
- (id)challenge;
- (void)setChallenge:(id)arg0;

@end
