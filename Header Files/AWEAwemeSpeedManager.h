//
//     Generated by private class-dump
//

@class NSString, NSMapTable;

@interface AWEAwemeSpeedManager : NSObject <AWEAwemeSpeedManagerProtocol> {
    NSString *_currentSpeed;
    NSString *_currentItemId;
    double _currentSpeedInMixVideo;
    double _currentSpeedInInterestDiscover;
    double _currentSpeedInHomepage;
    NSString *_currentItemIDInMixVideo;
    NSString *_currentItemIDInInterestDiscover;
    NSString *_currentReferstringInPerson;
    NSString *_currentAuthorIdInPerson;
    NSMapTable *_mixVideoSpeedInheritedConfigTable;
    struct CGPoint { double x; double y; } _speedCenter;
}

@property (retain, nonatomic) NSMapTable *mixVideoSpeedInheritedConfigTable;
@property (copy, nonatomic) NSString *currentSpeed;
@property (copy, nonatomic) NSString *currentItemId;
@property (nonatomic) struct CGPoint { double x; double y; } speedCenter;
@property (nonatomic) double currentSpeedInMixVideo;
@property (nonatomic) double currentSpeedInInterestDiscover;
@property (nonatomic) double currentSpeedInHomepage;
@property (copy, nonatomic) NSString *currentItemIDInMixVideo;
@property (copy, nonatomic) NSString *currentItemIDInInterestDiscover;
@property (copy, nonatomic) NSString *currentReferstringInPerson;
@property (copy, nonatomic) NSString *currentAuthorIdInPerson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (void)setCurrentSpeedInMixVideo:(double)arg0;
- (void)setCurrentItemIDInMixVideo:(id)arg0;
- (void)setCurrentItemId:(id)arg0;
- (void)adjustSpeedWithCurrentSpeed:(double)arg0;
- (void)updateSpeed:(id)arg0;
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
- (BOOL)addSpeedManagerLog;
- (void)setCurrentReferstringInPerson:(id)arg0;
- (void)setCurrentAuthorIdInPerson:(id)arg0;
- (id)mixVideoSpeedInheritedConfigTable;
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
- (void)setMixVideoSpeedInheritedConfigTable:(id)arg0;
- (void).cxx_destruct;
- (id)currentSpeed;
- (void)setCurrentSpeed:(id)arg0;

@end
