//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWEMicroAppEntranceContextObject : NSObject <AWEMicroAppEntranceContextProtocol> {
    BOOL _isHasTraceMpShow;
    BOOL _isHasTraceMpClick;
    BOOL _isHasPreload;
    NSMutableDictionary *_bdpLog;
    NSMutableDictionary *_customParams;
    NSString *_host;
    NSString *_schemaPrefix;
    long long _ironManType;
}

@property (retain, nonatomic) NSMutableDictionary *bdpLog;
@property (retain, nonatomic) NSMutableDictionary *customParams;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *schemaPrefix;
@property (nonatomic) long long ironManType;
@property (copy, nonatomic) NSString *appId;
@property (readonly, copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *sceneSuffix;
@property (copy, nonatomic) NSString *launch_from;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *entrance_form;
@property (copy, nonatomic) NSString *enter_from_merge;
@property (copy, nonatomic) NSString *enter_position;
@property (nonatomic) BOOL isHasTraceMpShow;
@property (nonatomic) BOOL isHasTraceMpClick;
@property (nonatomic) BOOL isHasPreload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateParamsByAwemeModel:(id)arg0;
- (void)updateParamsByIronManModel:(id)arg0;
- (void)setSceneSuffix:(id)arg0;
- (void)setLaunch_from:(id)arg0;
- (void)setEnter_from_merge:(id)arg0;
- (void)setEntrance_form:(id)arg0;
- (void)setEnter_position:(id)arg0;
- (void)traceMpClickWithModel:(id)arg0 LogExtra:(id)arg1;
- (void)updateParamsWithLogExtra:(id)arg0;
- (BOOL)invokeOpenSchema;
- (void)traceAnchorStyleShow;
- (id)containerController;
- (void)setCustomParams:(id)arg0;
- (id)customParams;
- (id)bdpLog;
- (id)launch_from;
- (void)setBdpLog:(id)arg0;
- (long long)ironManType;
- (void)updateParamsByCMCAwemeContext:(id)arg0;
- (void)updateParamsByCMCAdContext:(id)arg0;
- (void)setIronManType:(long long)arg0;
- (BOOL)isCanOpen;
- (void)traceMpClick;
- (void)updateParamsBySchema:(id)arg0;
- (void)traceMpShow;
- (void)preloadIfNeeded;
- (id)getEntranceInfo;
- (void)updateBdpLog:(id)arg0 customParams:(id)arg1;
- (BOOL)isTimorApp;
- (BOOL)isTimorGame;
- (void)setSchemaPrefix:(id)arg0;
- (id)sceneSuffix;
- (id)enter_from_merge;
- (id)schemaPrefix;
- (void)p_tracePreLaunchEvent:(id)arg0;
- (void)p_tracePreLaunchEvent:(id)arg0 model:(id)arg1 logExtra:(id)arg2;
- (id)enter_position;
- (BOOL)isTimor;
- (id)p_getSchemaBeforeInvoke;
- (id)entrance_form;
- (void)updateSceneParamsBySceneType:(long long)arg0;
- (BOOL)isHasTraceMpShow;
- (void)setIsHasTraceMpShow:(BOOL)arg0;
- (BOOL)isHasTraceMpClick;
- (void)setIsHasTraceMpClick:(BOOL)arg0;
- (BOOL)isHasPreload;
- (void)setIsHasPreload:(BOOL)arg0;
- (void)setAppId:(id)arg0;
- (id)init;
- (void)setHost:(id)arg0;
- (void).cxx_destruct;
- (id)location;
- (id)host;
- (void)setLocation:(id)arg0;
- (id)appId;
- (id)scene;
- (id)generateSchema;

@end