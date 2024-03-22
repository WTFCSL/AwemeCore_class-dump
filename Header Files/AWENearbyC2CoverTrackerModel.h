//
//     Generated by private class-dump
//

@class NSDictionary, AWEAwemeModel;

@interface AWENearbyC2CoverTrackerModel : AWENearbyC2TrackerModel {
    BOOL _successed;
    BOOL _isFirstPull;
    AWEAwemeModel *_aweme;
    double _loadTime;
    long long _from;
    long long _order;
    long long _isBlackOrWhite;
    unsigned long long _type;
    unsigned long long _loadType;
    long long _pageType;
    NSDictionary *_freshImageShowtimeParams;
}

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) double loadTime;
@property (nonatomic) BOOL successed;
@property (nonatomic) long long from;
@property (nonatomic) long long order;
@property (nonatomic) long long isBlackOrWhite;
@property (nonatomic) BOOL isFirstPull;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long loadType;
@property (nonatomic) long long pageType;
@property (copy, nonatomic) NSDictionary *freshImageShowtimeParams;

- (id)aweme;
- (void)setAweme:(id)arg0;
- (void)setLoadType:(unsigned long long)arg0;
- (void)setLoadTime:(double)arg0;
- (void)setSuccessed:(BOOL)arg0;
- (void)setIsFirstPull:(BOOL)arg0;
- (void)setIsBlackOrWhite:(long long)arg0;
- (BOOL)successed;
- (long long)isBlackOrWhite;
- (BOOL)isFirstPull;
- (id)freshImageShowtimeParams;
- (void)setFreshImageShowtimeParams:(id)arg0;
- (long long)pageType;
- (long long)order;
- (void)setOrder:(long long)arg0;
- (id)init;
- (double)loadTime;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (void)setPageType:(long long)arg0;
- (long long)from;
- (void)setFrom:(long long)arg0;
- (unsigned long long)loadType;

@end
