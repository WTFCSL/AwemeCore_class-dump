//
//     Generated by private class-dump
//

@class NSDate, NSString, APBToygerRemoteConfig, NSArray, NSMutableDictionary, APBToygerBioBisConfigManager, NSDictionary, NSMutableArray, UIViewController, APBToygerDataCenter;

@interface APBToygerFacade : NSObject <IBioAuthFactor> {
    BOOL _bIsCardFace;
    NSString *_factorName;
    UIViewController *_vc;
    NSMutableArray *_tasks;
    NSMutableDictionary *_pipeInfo;
    APBToygerRemoteConfig *_bisConfig;
    APBToygerBioBisConfigManager *_biocfgManager;
    NSDictionary *_extInfo;
    NSArray *_actionList;
    NSArray *_actionListStack;
    long long _currentRetryCnt;
    APBToygerDataCenter *_dataCenter;
    double _brightness;
    NSDate *_startTime;
    NSString *_fcToken;
}

@property (copy, nonatomic) NSString *factorName;
@property (weak, nonatomic) UIViewController *vc;
@property (retain, nonatomic) NSMutableArray *tasks;
@property (retain, nonatomic) NSMutableDictionary *pipeInfo;
@property (retain, nonatomic) APBToygerRemoteConfig *bisConfig;
@property (retain, nonatomic) APBToygerBioBisConfigManager *biocfgManager;
@property (retain, nonatomic) NSDictionary *extInfo;
@property (retain, nonatomic) NSArray *actionList;
@property (retain, nonatomic) NSArray *actionListStack;
@property (nonatomic) long long currentRetryCnt;
@property (retain, nonatomic) APBToygerDataCenter *dataCenter;
@property (nonatomic) double brightness;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) BOOL bIsCardFace;
@property (copy, nonatomic) NSString *fcToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getMetaInfo;
+ (void)setTokenid:(id)arg0;
+ (id)getTokenid;
+ (id)getVersion;

- (void)setExtInfo:(id)arg0;
- (void)setVc:(id)arg0;
- (id)extInfo;
- (id)dataCenter;
- (void)setDataCenter:(id)arg0;
- (void)setBiocfgManager:(id)arg0;
- (id)biocfgManager;
- (BOOL)isOCRFacade:(id)arg0;
- (id)actionListStack;
- (id)getActionListfromeStack:(id)arg0 RetryCnt:(long long)arg1;
- (id)getTasks;
- (id)getGlobalConfig;
- (void)finalizeResponse:(id)arg0;
- (void)onEngineWillRestart:(id)arg0;
- (void)setActionListStack:(id)arg0;
- (BOOL)bIsCardFace;
- (void)setBIsCardFace:(BOOL)arg0;
- (id)fcToken;
- (void)setFcToken:(id)arg0;
- (void)setPipeInfo:(id)arg0;
- (void)setBisConfig:(id)arg0;
- (id)bisConfig;
- (long long)currentRetryCnt;
- (id)pipeInfo;
- (void)setCurrentRetryCnt:(long long)arg0;
- (id)factorName;
- (id)initWithRequest:(id)arg0;
- (void)setStartTime:(id)arg0;
- (double)brightness;
- (void).cxx_destruct;
- (void)setBrightness:(double)arg0;
- (id)startTime;
- (void)dealloc;
- (void)setFactorName:(id)arg0;
- (id)tasks;
- (void)setTasks:(id)arg0;
- (id)vc;
- (id)actionList;
- (void)setActionList:(id)arg0;

@end
