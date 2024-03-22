//
//     Generated by private class-dump
//

@class NSString, CreateInfoResponse_ConfigItem, NSMutableSet, NSMutableArray, UITableView;

@interface IESLiveGuideAbilityPanelView : UIView <UITableViewDelegate, UITableViewDataSource> {
    unsigned long long _liveType;
    CreateInfoResponse_ConfigItem *_configItem;
    NSMutableArray *_subItemsArray;
    UITableView *_tableView;
    id /* block */ _dismissCallback;
    NSMutableSet *_trackedSet;
}

@property (retain, nonatomic) CreateInfoResponse_ConfigItem *configItem;
@property (retain, nonatomic) NSMutableArray *subItemsArray;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) id /* block */ dismissCallback;
@property (retain, nonatomic) NSMutableSet *trackedSet;
@property (nonatomic) unsigned long long liveType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLiveType:(unsigned long long)arg0;
- (unsigned long long)liveType;
- (void)closePanel;
- (id /* block */)dismissCallback;
- (void)setDismissCallback:(id /* block */)arg0;
- (id)configItem;
- (void)setConfigItem:(id)arg0;
- (id)subItemsArray;
- (id)trackedSet;
- (void)handleItemTappedTrack:(id)arg0;
- (void)handleItemShowTrack:(id)arg0;
- (void)trackEvent:(id)arg0 extraTrackParams:(id)arg1;
- (void)setTrackedSet:(id)arg0;
- (void)setUpData;
- (void)setSubItemsArray:(id)arg0;
- (id)initWithConfigItem:(id)arg0 dismissCallback:(id /* block */)arg1;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setup;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;

@end