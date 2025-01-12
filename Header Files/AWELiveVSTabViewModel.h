//
//     Generated by private class-dump
//

@class NSString, AWEBaseListAdapterDataSource, IGListAdapter, AWEListDataController;

@interface AWELiveVSTabViewModel : NSObject <AWEBaseListViewControllerDataSource> {
    AWEListDataController *_dataController;
    IGListAdapter *_listAdapter;
    AWEBaseListAdapterDataSource *_dataSource;
}

@property (retain, nonatomic) AWEListDataController *dataController;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) AWEBaseListAdapterDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sectionControllerClassArray;
- (id)sectionViewModels;
- (void)setDataController:(id)arg0;
- (id)initWithDataController:(id)arg0;
- (void)viewDidDisAppear;
- (id)listAdapter;
- (void)setListAdapter:(id)arg0;
- (void)trackFormatCenterPageShow;
- (void)bindListAdapter:(id)arg0 dataSource:(id)arg1;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (id)dataController;

@end
