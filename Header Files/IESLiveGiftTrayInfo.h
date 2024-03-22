//
//     Generated by private class-dump
//

@class NSString, NSDictionary, HTSLiveImage, NSNumber;

@interface IESLiveGiftTrayInfo : IESLiveDynamicModel {
    BOOL _useHighLayer;
    int _preEffectSource;
    int _postEffectSource;
    int _trayGroupMode;
    NSString *_traySchemaUrl;
    long long _duration;
    NSString *_toast;
    long long _traySlideRate;
    HTSLiveImage *_preEffectImg;
    long long _trayStartTime;
    HTSLiveImage *_trayRipple;
    HTSLiveImage *_postEffectImg;
    NSString *_preSchema;
    NSString *_postSchema;
    long long _preDuration;
    long long _postDuration;
    NSString *_preEffectExtra;
    NSDictionary *_postEventTracking;
}

@property (retain, nonatomic) HTSLiveImage *baseImage;
@property (retain, nonatomic) HTSLiveImage *headImage;
@property (retain, nonatomic) HTSLiveImage *rightImage;
@property (retain, nonatomic) HTSLiveImage *dynamicImage;
@property (retain, nonatomic) NSNumber *trayLevel;
@property (copy, nonatomic) NSString *traySchemaUrl;
@property (nonatomic) long long trayType;
@property (retain, nonatomic) HTSLiveImage *baseImageV2;
@property (retain, nonatomic) HTSLiveImage *rightImageV2;
@property (nonatomic) BOOL useHighLayer;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) long long traySlideRate;
@property (retain, nonatomic) HTSLiveImage *preEffectImg;
@property (nonatomic) long long trayStartTime;
@property (retain, nonatomic) HTSLiveImage *trayRipple;
@property (retain, nonatomic) HTSLiveImage *postEffectImg;
@property (copy, nonatomic) NSString *preSchema;
@property (copy, nonatomic) NSString *postSchema;
@property (nonatomic) long long preDuration;
@property (nonatomic) long long postDuration;
@property (nonatomic) int preEffectSource;
@property (nonatomic) int postEffectSource;
@property (copy, nonatomic) NSString *preEffectExtra;
@property (copy, nonatomic) NSDictionary *postEventTracking;
@property (nonatomic) int trayGroupMode;

- (BOOL)useHighLayer;
- (long long)traySlideRate;
- (int)trayGroupMode;
- (id)preEffectImg;
- (long long)trayStartTime;
- (id)trayRipple;
- (id)preSchema;
- (int)preEffectSource;
- (id)postEffectImg;
- (id)postSchema;
- (int)postEffectSource;
- (id)traySchemaUrl;
- (void)setTraySchemaUrl:(id)arg0;
- (void)setTrayGroupMode:(int)arg0;
- (void)setUseHighLayer:(BOOL)arg0;
- (void)setTraySlideRate:(long long)arg0;
- (void)setPreEffectImg:(id)arg0;
- (void)setTrayStartTime:(long long)arg0;
- (void)setTrayRipple:(id)arg0;
- (void)setPreSchema:(id)arg0;
- (void)setPreEffectSource:(int)arg0;
- (void)setPostEffectImg:(id)arg0;
- (void)setPostSchema:(id)arg0;
- (void)setPostEffectSource:(int)arg0;
- (id)postEventTracking;
- (void)setPostEventTracking:(id)arg0;
- (id)preEffectExtra;
- (void)setPreEffectExtra:(id)arg0;
- (void).cxx_destruct;
- (long long)duration;
- (void)setDuration:(long long)arg0;
- (void)setToast:(id)arg0;
- (id)toast;
- (long long)preDuration;
- (long long)postDuration;
- (void)setPreDuration:(long long)arg0;
- (void)setPostDuration:(long long)arg0;

@end