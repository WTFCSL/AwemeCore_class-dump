//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, AWEHPTabStayTimeTrackController, AWEHPEntranceStayTimeTrackController;

@interface AWEHPTabTrackManager : NSObject <AWEHPTabTrackManagerProtocol, AWEHPLifeCycleProtocol> {
    NSMutableDictionary *_enterCounts;
    AWEHPTabStayTimeTrackController *_tabTimingController;
    AWEHPEntranceStayTimeTrackController *_entranceTimingController;
}

@property (retain, nonatomic) NSMutableDictionary *enterCounts;
@property (retain, nonatomic) AWEHPTabStayTimeTrackController *tabTimingController;
@property (retain, nonatomic) AWEHPEntranceStayTimeTrackController *entranceTimingController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)trackEnterTabWithModel:(id)arg0;
- (void)trackLeaveTabWithModel:(id)arg0;
- (void)enterHPSearchEntrance;
- (void)leaveHPSearchEntrance;
- (void)enterPublishEntrance;
- (void)leavePublishEntrance;
- (long long)getTimingStayDurationWithTabID:(id)arg0;
- (id)tabTimingController;
- (void)trakEnterHomePageTabWithTabID:(id)arg0 trackModel:(id)arg1;
- (id)entranceTimingController;
- (id)enterCounts;
- (id)getBizEnterTrackEventNameWithTabId:(id)arg0;
- (void)setEnterCounts:(id)arg0;
- (void)setTabTimingController:(id)arg0;
- (void)setEntranceTimingController:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
