//
//     Generated by private class-dump
//

@class IESECListKitListUpdater, NSString, IESECServiceProxy, IESECListKitItemDataModel, UICollectionViewCell, IESECWinContext;
@protocol IESECWinTabService, IESECWinDataService, IESECWinTabLayoutService, IESECWinFeedService, IESECWinLynxCardService, IESECWinSplitService;

@interface IESECWinListKitCellController : IGListSectionController <IESECWinListKitNativeCellLynxCardDelegate, IESECWinListKitCellControllerProtocol> {
    IESECWinContext *_context;
    IESECListKitListUpdater *listUpdater;
    UICollectionViewCell *cell;
    id cellModel;
    IESECListKitItemDataModel *bffItemData;
    long long section;
    long long index;
    IESECServiceProxy<IESECWinTabService> *_tabService;
    IESECServiceProxy<IESECWinDataService> *_dataService;
    IESECServiceProxy<IESECWinSplitService> *_splitService;
    IESECServiceProxy<IESECWinFeedService> *_feedService;
    IESECServiceProxy<IESECWinLynxCardService> *_lynxCardService;
    IESECServiceProxy<IESECWinTabLayoutService> *_tabLayoutService;
}

@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedService> *feedService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxCardService> *lynxCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabLayoutService> *tabLayoutService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) IESECListKitListUpdater *listUpdater;
@property (weak, nonatomic) UICollectionViewCell *cell;
@property (retain, nonatomic) id cellModel;
@property (retain, nonatomic) IESECListKitItemDataModel *bffItemData;
@property (nonatomic) long long section;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isFirstShow;

+ (Class)cellModelClass;
+ (Class)cellClass;

- (void)setCellModel:(id)arg0;
- (id)feedService;
- (id)getViewController;
- (id)dataService;
- (void)setDataService:(id)arg0;
- (void)configCell;
- (id)listUpdater;
- (void)setListUpdater:(id)arg0;
- (id)bffItemData;
- (void)setBffItemData:(id)arg0;
- (void)willDisplayWithSource:(unsigned long long)arg0 extraParams:(id)arg1;
- (void)updateLayoutAndCanBeCanceled;
- (id)headerObjectForCellModel:(id)arg0 sectionID:(id)arg1;
- (id)splitService;
- (void)setSplitService:(id)arg0;
- (id)tabService;
- (void)setTabService:(id)arg0;
- (id)lynxCardService;
- (void)setLynxCardService:(id)arg0;
- (id)tabLayoutService;
- (void)setTabLayoutService:(id)arg0;
- (void)setFeedService:(id)arg0;
- (id)globalPropsExtra:(id)arg0;
- (void)updateListLayoutWithLynxCard:(id)arg0;
- (id)customConfigWithLynxData:(id)arg0;
- (id)objectForCellModel:(id)arg0;
- (double)lynxExtensionCardHeightForModel:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (void)setSection:(long long)arg0;
- (long long)index;
- (id)context;
- (long long)section;
- (id)cell;
- (void)setCell:(id)arg0;
- (id)cellModel;

@end
