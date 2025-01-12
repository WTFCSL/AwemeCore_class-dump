//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString, AWEVideoPublishViewModel;

@interface ACCToolBarSortDataSource : NSObject <ACCBarItemSortDataSource> {
    BOOL _isEdit;
    unsigned long long _page;
    AWEVideoPublishViewModel *_publishModel;
    NSArray *_recordList;
    NSArray *_editList;
    NSDictionary *_mapEdit;
    NSDictionary *_mapRecord;
}

@property (nonatomic) unsigned long long page;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) NSArray *recordList;
@property (copy, nonatomic) NSArray *editList;
@property (copy, nonatomic) NSDictionary *mapEdit;
@property (copy, nonatomic) NSDictionary *mapRecord;
@property (nonatomic) BOOL isEdit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)setIsEdit:(BOOL)arg0;
- (id)barItemSortArray;
- (id)moreBarItemSortArray;
- (id)initWithPage:(unsigned long long)arg0 publishModel:(id)arg1;
- (id)mapEdit;
- (id)mapRecord;
- (void)setupEditToolBarList;
- (void)setupRecordToolBarList;
- (id)settingsToList:(id)arg0 isEdit:(BOOL)arg1;
- (id)defaultSortArrayRecord;
- (id)defaultSortArrayEdit;
- (void)setEditList:(id)arg0;
- (void)addDualCameraIfNeeded:(id)arg0;
- (void)addRecordDurationIfNeeded:(id)arg0;
- (void)addVariableModeChangeIfNeed:(id)arg0;
- (id)editList;
- (unsigned long long)findRecordSettingsAboveItemIndex:(id)arg0;
- (unsigned long long)findRecorderDivisionItemIndex:(id)arg0;
- (id)barItemSortArrayWithPage:(unsigned long long)arg0;
- (void)setMapEdit:(id)arg0;
- (void)setMapRecord:(id)arg0;
- (unsigned long long)page;
- (void).cxx_destruct;
- (void)setPage:(unsigned long long)arg0;
- (void)setRecordList:(id)arg0;
- (id)recordList;
- (BOOL)isEdit;

@end
