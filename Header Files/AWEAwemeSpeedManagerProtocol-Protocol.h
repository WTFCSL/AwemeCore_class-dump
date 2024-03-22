//
//     Generated by private class-dump
//

@class NSString;

@protocol AWEAwemeSpeedManagerProtocol <NSObject>

@property (copy, nonatomic) NSString *currentSpeed;
@property (copy, nonatomic) NSString *currentItemId;
@property (nonatomic) struct CGPoint { double x0; double x1; } speedCenter;
@property (nonatomic) double currentSpeedInMixVideo;
@property (nonatomic) double currentSpeedInInterestDiscover;
@property (nonatomic) double currentSpeedInHomepage;
@property (copy, nonatomic) NSString *currentItemIDInMixVideo;
@property (copy, nonatomic) NSString *currentItemIDInInterestDiscover;
@property (copy, nonatomic) NSString *currentReferstringInPerson;
@property (copy, nonatomic) NSString *currentAuthorIdInPerson;

- (void)setCurrentSpeedInMixVideo:(double)arg0;
- (void)setCurrentItemIDInMixVideo:(id)arg0;
- (void)setCurrentItemId:(id)arg0;
- (void)adjustSpeedWithCurrentSpeed:(double)arg0;
- (void)adjustCurrentSpeedwithFloatValue:(double)arg0;
- (double)currentSpeedInInterestDiscover;
- (id)currentItemIDInInterestDiscover;
- (void)setCurrentSpeedInInterestDiscover:(double)arg0;
- (void)setCurrentItemIDInInterestDiscover:(id)arg0;
- (void)recordMixVideoSpeedInheritedViewController:(id)arg0 withPreviousPage:(id)arg1;
- (double)currentSpeedInMixVideo;
- (void)resetSpeedInMixVideoIfNeedFromInheritedViewController:(id)arg0;
- (void)setSpeedCenter:(struct CGPoint { double x0; double x1; })arg0;
- (id)currentItemId;
- (struct CGPoint { double x0; double x1; })speedCenter;
- (void)setCurrentSpeedInHomepage:(double)arg0;
- (void)setCurrentReferstringInPerson:(id)arg0;
- (void)setCurrentAuthorIdInPerson:(id)arg0;
- (BOOL)isNeedRecordMixVideoSpeedForReferString:(id)arg0;
- (void)resetSpeedInMixVideo;
- (id)currentReferstringInPerson;
- (id)currentAuthorIdInPerson;
- (void)resetSpeedInHomepage;
- (void)resetSpeedInInterestDiscover;
- (BOOL)isNeedRecordInterestDiscoverSpeedForReferString:(id)arg0;
- (BOOL)shouldResetSpeedManageInfoInHomepageWithModelReferString:(id)arg0 andAuthorId:(id)arg1;
- (void)resetSpeedControl;
- (double)currentSpeedInHomepage;
- (id)currentItemIDInMixVideo;
- (id)currentSpeed;
- (void)setCurrentSpeed:(id)arg0;

@end
