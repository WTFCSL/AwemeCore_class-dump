//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEMusicStreamingImpl.LunaSongtabRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* unknown type, empty encoding */ playedMedia;
    void /* unknown type, empty encoding */ isFirstRequest;
    void /* unknown type, empty encoding */ feedMode;
    void /* unknown type, empty encoding */ withClientCache;
    void /* unknown type, empty encoding */ didFirstUseTime;
    void /* unknown type, empty encoding */ feedExtra;
}

@property (nonatomic, copy) NSArray *playedMedia;
@property (nonatomic) void /* unknown type, empty encoding */ isFirstRequest;
@property (nonatomic, copy) NSString *feedMode;
@property (nonatomic) void /* unknown type, empty encoding */ withClientCache;
@property (nonatomic) void /* unknown type, empty encoding */ didFirstUseTime;
@property (nonatomic, retain) void /* unknown type, empty encoding */ feedExtra;

- (Class)responseModelClass;
- (id)playedMedia;
- (void)setPlayedMedia:(id)arg0;
- (BOOL)isFirstRequest;
- (void)setIsFirstRequest:(BOOL)arg0;
- (id)feedMode;
- (void)setFeedMode:(id)arg0;
- (BOOL)withClientCache;
- (void)setWithClientCache:(BOOL)arg0;
- (long long)didFirstUseTime;
- (void)setDidFirstUseTime:(long long)arg0;
- (id)feedExtra;
- (void)setFeedExtra:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)path;
- (id)params;

@end
