//
//     Generated by private class-dump
//

@class IESLiveUserProfileData, IESLiveMyLiveVisitorEntryViewModel, NSArray, IESLiveUserCardStore, IESLiveMyLiveTabViewModel, NSString;

@interface IESLiveMyLiveViewModel : NSObject <IESLiveUserCardDidFinishedAction> {
    IESLiveUserProfileData *_metaData;
    IESLiveMyLiveVisitorEntryViewModel *_visitorEntryViewModel;
    IESLiveUserCardStore *_userCardStore;
    NSArray *_myTabs;
    IESLiveMyLiveTabViewModel *_selectedTab;
    double _showTimestamp;
}

@property (retain, nonatomic) IESLiveUserProfileData *metaData;
@property (retain, nonatomic) IESLiveUserCardStore *userCardStore;
@property (nonatomic) double showTimestamp;
@property (retain, nonatomic) IESLiveMyLiveVisitorEntryViewModel *visitorEntryViewModel;
@property (copy, nonatomic) NSArray *myTabs;
@property (retain, nonatomic) IESLiveMyLiveTabViewModel *selectedTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithMetaData:(id)arg0 diContext:(id)arg1;
- (id)userCardStore;
- (id)visitorEntryViewModel;
- (id)myTabs;
- (void)trackEnterTab:(id)arg0 fromTab:(id)arg1;
- (void)trackMyLiveShow;
- (void)createMultiTabsData;
- (void)userCardDidFinishedAction;
- (void)setMyTabs:(id)arg0;
- (void)setUserCardStore:(id)arg0;
- (void)trackMyLiveShowDuration;
- (void)setupUserCardStore:(id)arg0;
- (void)setVisitorEntryViewModel:(id)arg0;
- (id)metaData;
- (void).cxx_destruct;
- (void)setMetaData:(id)arg0;
- (void)setSelectedTab:(id)arg0;
- (id)selectedTab;
- (double)showTimestamp;
- (void)setShowTimestamp:(double)arg0;

@end
