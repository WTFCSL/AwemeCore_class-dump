//
//     Generated by private class-dump
//

@class NSString, IESECWinVideoProductDataController, IESECWinTabListModel, NSMutableArray;

@interface IESECWinVideoProductDataServiceImpl : NSObject <AWEAwemeDetailTableViewControllerDelegate, IESECWinVideoProductDataService> {
    NSMutableArray *_tabDataSource;
    IESECWinTabListModel *_tabList;
    IESECWinVideoProductDataController *_dataController;
}

@property (retain, nonatomic) IESECWinVideoProductDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECWinTabListModel *tabList;
@property (retain, nonatomic) NSMutableArray *tabDataSource;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (void)setDataController:(id)arg0;
- (id)tabList;
- (void)setTabList:(id)arg0;
- (id)initWithWinContext:(id)arg0 tabListModel:(id)arg1 tabViewController:(id)arg2;
- (id)getAWEAweweModelsWithTabListModel:(id)arg0 AwemeModelString:(id)arg1;
- (void)enterVideoFeedWithAwemeModelString:(id)arg0 index:(long long)arg1 winContext:(id)arg2 showGoodsDetail:(BOOL)arg3;
- (id)tabDataSource;
- (void)setTabDataSource:(id)arg0;
- (void).cxx_destruct;
- (id)dataController;

@end