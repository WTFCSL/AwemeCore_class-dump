//
//     Generated by private class-dump
//

@class NSString, NSNumber;
@protocol IESLiveIMDecoder;

@interface IESLiveIMAppConfig : IESLiveIMAppInfo {
    BOOL _enableWS;
    NSString *_unifiedWsUrl;
    NSString *_unifiedHttpUrl;
    double _unifiedMaxUnusedTime;
    id<IESLiveIMDecoder> _unifiedDecoder;
    NSNumber *_liveId;
    NSString *_appLanguage;
}

@property (copy, nonatomic) NSString *unifiedWsUrl;
@property (copy, nonatomic) NSString *unifiedHttpUrl;
@property (nonatomic) double unifiedMaxUnusedTime;
@property (retain, nonatomic) id<IESLiveIMDecoder> unifiedDecoder;
@property (retain, nonatomic) NSNumber *liveId;
@property (copy, nonatomic) NSString *appLanguage;
@property (nonatomic) BOOL enableWS;

- (id)liveId;
- (void)setLiveId:(id)arg0;
- (void)setEnableWS:(BOOL)arg0;
- (BOOL)enableWS;
- (void)setUnifiedWsUrl:(id)arg0;
- (void)setUnifiedHttpUrl:(id)arg0;
- (void)setUnifiedMaxUnusedTime:(double)arg0;
- (id)unifiedWsUrl;
- (id)unifiedHttpUrl;
- (double)unifiedMaxUnusedTime;
- (id)unifiedDecoder;
- (void)setUnifiedDecoder:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)appLanguage;
- (void)setAppLanguage:(id)arg0;

@end
