//
//     Generated by private class-dump
//

@class NSString, GetRoomIntroResponse_Data, UICollectionView, IESLiveRoomIntroductionApi, RACSubject, HTSEventContext, NSNumber;

@interface IESLiveRoomIntroductionViewModel : NSObject <RoomLabelCollectionViewCellDelegate, UICollectionViewDataSource, IESLabelCollectionViewLayoutDataSource> {
    BOOL _pickButtonShowTracked;
    HTSEventContext *_trackContext;
    NSNumber *_roomID;
    NSString *_liveType;
    NSNumber *_gameCategoryID;
    GetRoomIntroResponse_Data *_roomIntroductionData;
    id /* block */ _reloadPickData;
    IESLiveRoomIntroductionApi *_api;
    GetRoomIntroResponse_Data *_oldRoomIntroductionData;
    UICollectionView *_collectionView;
    RACSubject *_settingViewStateSubject;
    RACSubject *_updateSubject;
}

@property (retain, nonatomic) IESLiveRoomIntroductionApi *api;
@property (retain, nonatomic) GetRoomIntroResponse_Data *roomIntroductionData;
@property (retain, nonatomic) GetRoomIntroResponse_Data *oldRoomIntroductionData;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) RACSubject *settingViewStateSubject;
@property (retain, nonatomic) RACSubject *updateSubject;
@property (nonatomic) BOOL pickButtonShowTracked;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *liveType;
@property (retain, nonatomic) NSNumber *gameCategoryID;
@property (copy, nonatomic) id /* block */ reloadPickData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)hideRedDot;
+ (BOOL)dotShouldShow;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)setLiveType:(id)arg0;
- (id)liveType;
- (id)updateSignal;
- (id)updateSubject;
- (void)setUpdateSubject:(id)arg0;
- (id)settingViewStateSubject;
- (void)setSettingViewStateSubject:(id)arg0;
- (id)settingViewStateSignal;
- (void)setGameCategoryID:(id)arg0;
- (void)settingViewShouldAlert;
- (id)replaceLabelIconURL:(id)arg0 withLastPath:(id)arg1;
- (void)settingViewShouldDismiss;
- (struct CGSize { double x0; double x1; })collectionViewLayout:(id)arg0 sizeForItemAtIndexPath:(id)arg1;
- (void)collectionViewLayout:(id)arg0 validateContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)requestRoomIntroduction;
- (void)registCellFor:(id)arg0;
- (id)fetchPickerSource;
- (id)roomIntroductionData;
- (void)setReloadPickData:(id /* block */)arg0;
- (void)hideLabelAtIndex:(long long)arg0;
- (void)pickLabelAtIndex:(long long)arg0;
- (void)clearRoomIntroductionData;
- (void)uploadWithCompletion:(id /* block */)arg0;
- (void)trackPickButton;
- (id)gameCategoryID;
- (void)setRoomIntroductionData:(id)arg0;
- (void)setOldRoomIntroductionData:(id)arg0;
- (void)preprocessRoomIntroLabelForPicker:(id)arg0;
- (id)createAttributeStringWithRoomIntroLabel:(id)arg0;
- (id /* block */)reloadPickData;
- (void)loadIconWithURL:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)pickButtonShowTracked;
- (void)setPickButtonShowTracked:(BOOL)arg0;
- (void)preprocessRoomIntroLabelWith:(id)arg0;
- (void)loadRoomIntroLabelIconWith:(id)arg0 completion:(id /* block */)arg1;
- (id)oldRoomIntroductionData;
- (id)init;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (void)dealloc;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)api;
- (void)setApi:(id)arg0;

@end
