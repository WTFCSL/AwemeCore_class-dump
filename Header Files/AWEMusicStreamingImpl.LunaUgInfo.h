//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEMusicStreamingImpl.LunaUgInfo : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* unknown type, empty encoding */ interestingTrackID;
    void /* unknown type, empty encoding */ isNeedInsert;
    void /* unknown type, empty encoding */ insertTimeMs;
    void /* unknown type, empty encoding */ sceneName;
    void /* unknown type, empty encoding */ subSceneName;
    void /* unknown type, empty encoding */ extra;
}

@property (nonatomic, copy) NSString *interestingTrackID;
@property (nonatomic) void /* unknown type, empty encoding */ isNeedInsert;
@property (nonatomic) void /* unknown type, empty encoding */ insertTimeMs;
@property (nonatomic, copy) NSString *sceneName;
@property (nonatomic, copy) NSString *subSceneName;
@property (nonatomic, copy) NSDictionary *extra;

- (void)setExtra:(id)arg0;
- (id)subSceneName;
- (void)setSubSceneName:(id)arg0;
- (id)interestingTrackID;
- (void)setInterestingTrackID:(id)arg0;
- (long long)isNeedInsert;
- (void)setIsNeedInsert:(long long)arg0;
- (long long)insertTimeMs;
- (void)setInsertTimeMs:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)extra;
- (id)sceneName;
- (void)setSceneName:(id)arg0;

@end
