//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEPerfTabsRecorder : NSObject <AWEPerfSceneMonitorProtocol> {
    BOOL _enable;
    BOOL _currentIsFeed;
    NSString *_currentFeedScene;
    unsigned long long _existFeedTab;
    unsigned long long _existMainTab;
    unsigned long long _independentScene;
    NSString *_existFeedTabDescription;
    NSString *_existMainTabDescription;
    NSString *_independentSceneDescription;
    NSDictionary *_feedTabsNameMap;
    NSDictionary *_independentSceneNameMap;
}

@property (nonatomic) unsigned long long existFeedTab;
@property (nonatomic) unsigned long long existMainTab;
@property (nonatomic) unsigned long long independentScene;
@property (retain, nonatomic) NSString *existFeedTabDescription;
@property (retain, nonatomic) NSString *existMainTabDescription;
@property (retain, nonatomic) NSString *independentSceneDescription;
@property (retain, nonatomic) NSDictionary *feedTabsNameMap;
@property (retain, nonatomic) NSDictionary *independentSceneNameMap;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL currentIsFeed;
@property (retain, nonatomic) NSString *currentFeedScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)didUpdateScene:(id)arg0;
- (void)feedTabbarDidSwitchToTab:(unsigned long long)arg0 tabName:(id)arg1;
- (void)bottomTabbarDidSwitch:(BOOL)arg0;
- (void)mainTabbarDidSwitchToTab:(unsigned long long)arg0;
- (BOOL)currentIsFeed;
- (id)currentFeedScene;
- (void)setExistMainTab:(unsigned long long)arg0;
- (void)setExistFeedTabDescription:(id)arg0;
- (void)setExistMainTabDescription:(id)arg0;
- (void)setIndependentSceneDescription:(id)arg0;
- (void)setFeedTabsNameMap:(id)arg0;
- (void)setIndependentSceneNameMap:(id)arg0;
- (void)setCurrentFeedScene:(id)arg0;
- (id)feedTabsNameMap;
- (unsigned long long)existFeedTab;
- (void)setExistFeedTab:(unsigned long long)arg0;
- (id)existFeedTabDescription;
- (unsigned long long)existMainTab;
- (id)existMainTabDescription;
- (void)setCurrentIsFeed:(BOOL)arg0;
- (unsigned long long)independentScene;
- (id)independentSceneNameMap;
- (void)setIndependentScene:(unsigned long long)arg0;
- (id)independentSceneDescription;
- (unsigned long long)currentExistFeedTabs;
- (unsigned long long)currentExistMainTabs;
- (unsigned long long)currentIndependentScene;
- (id)currentExistFeedTabsDescription;
- (id)currentExistMainTabsDescription;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:(BOOL)arg0;

@end