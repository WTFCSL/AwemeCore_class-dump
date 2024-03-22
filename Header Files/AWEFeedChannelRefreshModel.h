//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFeedChannelRefreshModel : AWEFeedChannelTrackBaseModel {
    BOOL _topTabRefreshAnimation;
    BOOL _bottomTabRefreshAnimation;
    long long _refreshType;
    NSString *_refreshMethod;
}

@property (nonatomic) long long refreshType;
@property (copy, nonatomic) NSString *refreshMethod;
@property (nonatomic) BOOL topTabRefreshAnimation;
@property (nonatomic) BOOL bottomTabRefreshAnimation;

- (void)setRefreshMethod:(id)arg0;
- (void)setRefreshType:(long long)arg0;
- (long long)refreshType;
- (void)setTopTabRefreshAnimation:(BOOL)arg0;
- (id)refreshMethod;
- (void)setBottomTabRefreshAnimation:(BOOL)arg0;
- (BOOL)topTabRefreshAnimation;
- (BOOL)bottomTabRefreshAnimation;
- (void).cxx_destruct;
- (id)description;

@end