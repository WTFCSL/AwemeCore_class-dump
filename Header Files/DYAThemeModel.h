//
//     Generated by private class-dump
//

@class NSString, DYAFullScreenResModel, DYAHalfScreenResModel, DYAGuideConfigModel, DYAInterceptConfigModel;

@interface DYAThemeModel : MTLModel <MTLJSONSerializing> {
    BOOL _disableIfNoCheck;
    NSString *_themeId;
    long long _guidShowFrequency;
    long long _interceptThemeShowFrequency;
    long long _maxThemeCount;
    long long _startTime;
    long long _endTime;
    DYAGuideConfigModel *_guideConfig;
    DYAInterceptConfigModel *_interceptConfig;
    DYAHalfScreenResModel *_halfScreenRes;
    DYAFullScreenResModel *_fullScreenRes;
    NSString *_activityId;
    long long _alertStrategy;
    NSString *_redirectUrlAfterLogin;
}

@property (copy, nonatomic) NSString *themeId;
@property (nonatomic) long long guidShowFrequency;
@property (nonatomic) long long interceptThemeShowFrequency;
@property (nonatomic) long long maxThemeCount;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (retain, nonatomic) DYAGuideConfigModel *guideConfig;
@property (retain, nonatomic) DYAInterceptConfigModel *interceptConfig;
@property (retain, nonatomic) DYAHalfScreenResModel *halfScreenRes;
@property (retain, nonatomic) DYAFullScreenResModel *fullScreenRes;
@property (copy, nonatomic) NSString *activityId;
@property (nonatomic) long long alertStrategy;
@property (nonatomic) BOOL disableIfNoCheck;
@property (copy, nonatomic) NSString *redirectUrlAfterLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)themeId;
- (void)setThemeId:(id)arg0;
- (id)guideConfig;
- (void)setGuideConfig:(id)arg0;
- (long long)alertStrategy;
- (void)setAlertStrategy:(long long)arg0;
- (long long)guidShowFrequency;
- (void)setGuidShowFrequency:(long long)arg0;
- (long long)interceptThemeShowFrequency;
- (void)setInterceptThemeShowFrequency:(long long)arg0;
- (long long)maxThemeCount;
- (void)setMaxThemeCount:(long long)arg0;
- (id)halfScreenRes;
- (void)setHalfScreenRes:(id)arg0;
- (id)fullScreenRes;
- (void)setFullScreenRes:(id)arg0;
- (BOOL)disableIfNoCheck;
- (void)setDisableIfNoCheck:(BOOL)arg0;
- (id)redirectUrlAfterLogin;
- (void)setRedirectUrlAfterLogin:(id)arg0;
- (void)setStartTime:(long long)arg0;
- (void).cxx_destruct;
- (long long)endTime;
- (id)interceptConfig;
- (long long)startTime;
- (void)setEndTime:(long long)arg0;
- (void)setInterceptConfig:(id)arg0;
- (id)activityId;
- (void)setActivityId:(id)arg0;

@end
