//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFeedPlayableRatingModel : MTLModel <MTLJSONSerializing> {
    double _totalStar;
    double _currentStart;
}

@property (nonatomic) double totalStar;
@property (nonatomic) double currentStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (double)currentStart;
- (double)totalStar;
- (void)setTotalStar:(double)arg0;
- (void)setCurrentStart:(double)arg0;

@end
