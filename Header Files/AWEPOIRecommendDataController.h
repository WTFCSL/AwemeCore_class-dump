//
//     Generated by private class-dump
//

@class NSArray, CLLocation, NSString;

@interface AWEPOIRecommendDataController : NSObject {
    BOOL _isRequestOnAir;
    CLLocation *_location;
    NSArray *_locationInfos;
    NSArray *_selectedPOIs;
    NSArray *_AIRecommendPOIs;
    NSArray *_topics;
    NSArray *_challengeIDs;
    NSString *_microAppID;
    NSString *_shootWay;
    NSString *_creationID;
}

@property (nonatomic) BOOL isRequestOnAir;
@property (retain, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSArray *locationInfos;
@property (copy, nonatomic) NSArray *selectedPOIs;
@property (copy, nonatomic) NSArray *AIRecommendPOIs;
@property (copy, nonatomic) NSArray *topics;
@property (copy, nonatomic) NSArray *challengeIDs;
@property (copy, nonatomic) NSString *microAppID;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *creationID;

- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:(BOOL)arg0;
- (void)setShootWay:(id)arg0;
- (id)shootWay;
- (id)challengeIDs;
- (void)setChallengeIDs:(id)arg0;
- (id)AIRecommendPOIs;
- (void)setAIRecommendPOIs:(id)arg0;
- (id)creationID;
- (void)setCreationID:(id)arg0;
- (void)setLocationInfos:(id)arg0;
- (void)setSelectedPOIs:(id)arg0;
- (void)setMicroAppID:(id)arg0;
- (id)requestParameter;
- (id)locationInfos;
- (id)selectedPOIs;
- (id)microAppID;
- (void).cxx_destruct;
- (id)location;
- (void)setTopics:(id)arg0;
- (void)setLocation:(id)arg0;
- (id)topics;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end