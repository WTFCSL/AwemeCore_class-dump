//
//     Generated by private class-dump
//

@class AWEAwemeDetailContainerActionConfig, NSString, NSArray, AWEAwemeDetailContainerRouterConfig, AWEListDataController, AWEAwemeDetailContainerTrackerConfig, AWEAwemeDetailContainerPlayControlConfig, NSDictionary, AWEAwemeDetailContainerOptimizeConfig, AWEAwemeDetailContainerSearchConfig, AWEAwemeDetailContainerTransitionConfig, AWEAwemeDetailContainerDataControlConfig;

@interface AWEAwemeDetailContainerConfig : NSObject {
    AWEListDataController *_dataController;
    long long _initialIndex;
    NSString *_referString;
    NSString *_enterFrom;
    NSArray *_controllerArray;
    NSDictionary *_logExtraDict;
    NSDictionary *_businessDict;
    NSDictionary *_bottomInfoDict;
    AWEAwemeDetailContainerDataControlConfig *_dataControlConfig;
    AWEAwemeDetailContainerTrackerConfig *_trackerConfig;
    AWEAwemeDetailContainerPlayControlConfig *_playControlConfig;
    AWEAwemeDetailContainerTransitionConfig *_transitionConfig;
    AWEAwemeDetailContainerActionConfig *_actionConfig;
    AWEAwemeDetailContainerRouterConfig *_routerConfig;
    AWEAwemeDetailContainerSearchConfig *_searchConfig;
    AWEAwemeDetailContainerOptimizeConfig *_optimizeConfig;
}

@property (retain, nonatomic) AWEListDataController *dataController;
@property (nonatomic) long long initialIndex;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSArray *controllerArray;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSDictionary *businessDict;
@property (copy, nonatomic) NSDictionary *bottomInfoDict;
@property (retain, nonatomic) AWEAwemeDetailContainerDataControlConfig *dataControlConfig;
@property (retain, nonatomic) AWEAwemeDetailContainerTrackerConfig *trackerConfig;
@property (retain, nonatomic) AWEAwemeDetailContainerPlayControlConfig *playControlConfig;
@property (retain, nonatomic) AWEAwemeDetailContainerTransitionConfig *transitionConfig;
@property (retain, nonatomic) AWEAwemeDetailContainerActionConfig *actionConfig;
@property (retain, nonatomic) AWEAwemeDetailContainerRouterConfig *routerConfig;
@property (retain, nonatomic) AWEAwemeDetailContainerSearchConfig *searchConfig;
@property (retain, nonatomic) AWEAwemeDetailContainerOptimizeConfig *optimizeConfig;

+ (id)defaultConfig;

- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)enterFrom;
- (id)controllerArray;
- (void)setDataController:(id)arg0;
- (id)trackerConfig;
- (id)transitionConfig;
- (id)routerConfig;
- (id)searchConfig;
- (id)actionConfig;
- (void)setTrackerConfig:(id)arg0;
- (void)setRouterConfig:(id)arg0;
- (id)dataControlConfig;
- (void)setTransitionConfig:(id)arg0;
- (void)setSearchConfig:(id)arg0;
- (void)setControllerArray:(id)arg0;
- (id)optimizeConfig;
- (void)addDefaultConfig;
- (void)setupDefaultTrackConfig;
- (void)setupDefaultTransitionConfig;
- (void)setupDefaultDataControlConfig;
- (void)setupDefaultActionConfig;
- (void)setupDefaultPlayControlConfig;
- (void)setupDefaultRouterConfig;
- (void)setupDefaultSearchConfig;
- (void)setupDefaultOptimizeConfig;
- (void)setDataControlConfig:(id)arg0;
- (void)setActionConfig:(id)arg0;
- (void)setPlayControlConfig:(id)arg0;
- (void)setOptimizeConfig:(id)arg0;
- (id)businessDict;
- (void)setBusinessDict:(id)arg0;
- (id)bottomInfoDict;
- (void)setBottomInfoDict:(id)arg0;
- (id)playControlConfig;
- (id)init;
- (void).cxx_destruct;
- (id)dataController;
- (long long)initialIndex;
- (void)setInitialIndex:(long long)arg0;

@end
