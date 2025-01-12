//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWELiveWebShareModel : NSObject {
    BOOL _isLiveShare;
    BOOL _needPoster;
    BOOL _needLogin;
    BOOL _isPreLive;
    long long _liveShareType;
    NSDictionary *_posterData;
    NSString *_url;
    NSString *_platform;
    NSDictionary *_liveShareExtraParams;
    NSDictionary *_trackParams;
}

@property (nonatomic) BOOL isLiveShare;
@property (nonatomic) long long liveShareType;
@property (nonatomic) BOOL needPoster;
@property (retain, nonatomic) NSDictionary *posterData;
@property (nonatomic) BOOL needLogin;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *platform;
@property (retain, nonatomic) NSDictionary *liveShareExtraParams;
@property (nonatomic) BOOL isPreLive;
@property (retain, nonatomic) NSDictionary *trackParams;

- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (BOOL)needLogin;
- (void)setNeedLogin:(BOOL)arg0;
- (id)liveShareExtraParams;
- (void)setLiveShareExtraParams:(id)arg0;
- (BOOL)isLiveShare;
- (long long)liveShareType;
- (BOOL)isPreLive;
- (void)setIsPreLive:(BOOL)arg0;
- (BOOL)needPoster;
- (id)posterData;
- (void)setIsLiveShare:(BOOL)arg0;
- (void)setLiveShareType:(long long)arg0;
- (void)setNeedPoster:(BOOL)arg0;
- (void)setPosterData:(id)arg0;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (void)setPlatform:(id)arg0;
- (id)platform;
- (id)initWithParams:(id)arg0;
- (id)url;

@end
