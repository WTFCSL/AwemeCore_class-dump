//
//     Generated by private class-dump
//

@class NSArray, NSString, IESLiveKTVDecorateListDataSource, IGListSectionController;

@interface IESLiveKTVDecorateDataSource : NSObject <IGListAdapterDataSource> {
    IESLiveKTVDecorateListDataSource *_dataSource;
    IGListSectionController *_sectionController;
    NSArray *_gridItems;
}

@property (weak, nonatomic) IESLiveKTVDecorateListDataSource *dataSource;
@property (retain, nonatomic) IGListSectionController *sectionController;
@property (retain, nonatomic) NSArray *gridItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectsForListAdapter:(id)arg0;
- (id)listAdapter:(id)arg0 sectionControllerForObject:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg0;
- (id)gridItems;
- (void)setGridItems:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (void)setSectionController:(id)arg0;
- (id)sectionController;

@end
