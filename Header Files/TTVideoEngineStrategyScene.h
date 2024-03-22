//
//     Generated by private class-dump
//

@class NSString;

@interface TTVideoEngineStrategyScene : NSObject {
    BOOL _autoPlay;
    BOOL _muted;
    NSString *_sceneId;
    NSString *_briefSceneId;
    long long _maxVisibleCardCnt;
    NSString *_configString;
}

@property (copy, nonatomic) NSString *sceneId;
@property (copy, nonatomic) NSString *briefSceneId;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) BOOL muted;
@property (nonatomic) long long maxVisibleCardCnt;
@property (copy, nonatomic) NSString *configString;

+ (id)scene:(id)arg0;

- (void)setConfigString:(id)arg0;
- (id)initWithSceneId:(id)arg0;
- (id)briefSceneId;
- (void)setBriefSceneId:(id)arg0;
- (long long)maxVisibleCardCnt;
- (void)setMaxVisibleCardCnt:(long long)arg0;
- (void).cxx_destruct;
- (BOOL)muted;
- (void)setMuted:(BOOL)arg0;
- (id)toJsonString;
- (id)sceneId;
- (void)setSceneId:(id)arg0;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg0;
- (id)configString;

@end