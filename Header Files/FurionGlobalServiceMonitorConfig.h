//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface FurionGlobalServiceMonitorConfig : NSObject {
    BOOL _enable;
    float _user_rate;
    float _init_rate;
    float _run_rate;
    NSString *_ignore_scene;
    NSArray *_ignoreSceneArray;
}

@property (nonatomic) BOOL enable;
@property (nonatomic) float user_rate;
@property (nonatomic) float init_rate;
@property (nonatomic) float run_rate;
@property (retain, nonatomic) NSString *ignore_scene;
@property (retain, nonatomic) NSArray *ignoreSceneArray;

- (BOOL)shouldReportServiceInitData;
- (float)user_rate;
- (void)setUser_rate:(float)arg0;
- (float)init_rate;
- (void)setInit_rate:(float)arg0;
- (float)run_rate;
- (void)setRun_rate:(float)arg0;
- (id)ignore_scene;
- (void)setIgnore_scene:(id)arg0;
- (id)ignoreSceneArray;
- (void)setIgnoreSceneArray:(id)arg0;
- (BOOL)enable;
- (id)init;
- (void).cxx_destruct;
- (void)setEnable:(BOOL)arg0;

@end
