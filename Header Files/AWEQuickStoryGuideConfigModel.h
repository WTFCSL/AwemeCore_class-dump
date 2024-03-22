//
//     Generated by private class-dump
//

@class NSNumber, NSArray;

@interface AWEQuickStoryGuideConfigModel : AWEBaseApiModel {
    NSNumber *_showDaysLimit;
    NSNumber *_dailyShowLimit;
    NSNumber *_intervalHours;
    NSNumber *_dislikeCloseLimitInSeconds;
    NSNumber *_dislikeShowDaysLimit;
    NSArray *_recommendActionSort;
}

@property (retain, nonatomic) NSNumber *showDaysLimit;
@property (retain, nonatomic) NSNumber *dailyShowLimit;
@property (retain, nonatomic) NSNumber *intervalHours;
@property (retain, nonatomic) NSNumber *dislikeCloseLimitInSeconds;
@property (retain, nonatomic) NSNumber *dislikeShowDaysLimit;
@property (copy, nonatomic) NSArray *recommendActionSort;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setDailyShowLimit:(id)arg0;
- (void)setDislikeCloseLimitInSeconds:(id)arg0;
- (void)setDislikeShowDaysLimit:(id)arg0;
- (void)setIntervalHours:(id)arg0;
- (void)setShowDaysLimit:(id)arg0;
- (id)dailyShowLimit;
- (id)dislikeCloseLimitInSeconds;
- (id)dislikeShowDaysLimit;
- (id)intervalHours;
- (id)showDaysLimit;
- (id)recommendActionSort;
- (void)setRecommendActionSort:(id)arg0;
- (void).cxx_destruct;

@end