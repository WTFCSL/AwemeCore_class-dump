//
//     Generated by private class-dump
//

@class NSArray, AWELiveVisibleTypeModel, NSString, CreateInfoResponse_CreateInfo;

@interface AWELiveVisibleScopeListFragment : IESLiveGuideComponent <AWELiveVisibleScopeListRouter, IESLiveGuideActions, IESLiveGuideToolBarAction> {
    int _realCurrentVisibleType;
    CreateInfoResponse_CreateInfo *_openLiveModel;
    unsigned long long _currentVisibleType;
    NSArray *_userList;
    AWELiveVisibleTypeModel *_curPaidSelectModel;
}

@property (retain, nonatomic) CreateInfoResponse_CreateInfo *openLiveModel;
@property (nonatomic) int realCurrentVisibleType;
@property (nonatomic) unsigned long long currentVisibleType;
@property (retain, nonatomic) NSArray *userList;
@property (retain, nonatomic) AWELiveVisibleTypeModel *curPaidSelectModel;
@property (nonatomic) int realVisibleType;
@property (nonatomic) unsigned long long currentSelectedVisibleType;
@property (retain, nonatomic) NSArray *selectedUserList;
@property (retain, nonatomic) AWELiveVisibleTypeModel *paidSelectModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUserList:(id)arg0;
- (void)componentBindService;
- (void)updateOpenLiveModel:(id)arg0;
- (id)openLiveModel;
- (void)changeGuidePaidLiveStatus:(BOOL)arg0;
- (void)changePaidVisibleRange:(long long)arg0;
- (void)willCancelPaidLiveStateWhenChangeLiveType:(unsigned long long)arg0;
- (void)setOpenLiveModel:(id)arg0;
- (void)toolbarLoadAllToolBarItemsForLiveType:(unsigned long long)arg0;
- (id)getVisibleScopeDetailListVC:(unsigned long long)arg0 liveType:(unsigned long long)arg1 DIContext:(id)arg2 selectedBlock:(id /* block */)arg3;
- (id)getItemAddTextOf:(unsigned long long)arg0;
- (id)getCreateAPIParamsOf:(unsigned long long)arg0;
- (id)getTrackStrOf:(unsigned long long)arg0;
- (id)getVisiblePanelViewWithType:(unsigned long long)arg0 liveType:(unsigned long long)arg1 DIContext:(id)arg2 selectedBlock:(id /* block */)arg3;
- (id)getPaidVisiblePanelViewWithVisibleType:(unsigned long long)arg0 selectedUsers:(id)arg1 isShowNotPreviewOption:(BOOL)arg2 selectedBlock:(id /* block */)arg3;
- (void)setTryLiveVisibleScopeWithDIContext:(id)arg0 completedBlock:(id /* block */)arg1;
- (int)realVisibleType;
- (void)setRealVisibleType:(int)arg0;
- (unsigned long long)currentSelectedVisibleType;
- (void)setCurrentSelectedVisibleType:(unsigned long long)arg0;
- (id)selectedUserList;
- (void)setSelectedUserList:(id)arg0;
- (id)paidSelectModel;
- (void)setPaidSelectModel:(id)arg0;
- (void)initSelect;
- (void)setCurrentVisibleType:(unsigned long long)arg0;
- (void)setRealCurrentVisibleType:(int)arg0;
- (int)realCurrentVisibleType;
- (unsigned long long)currentVisibleType;
- (BOOL)isInPaidSelectionType:(unsigned long long)arg0;
- (id)curPaidSelectModel;
- (id)userIdStringArray:(id)arg0;
- (void)handleUpdateVisibleScopeResult:(BOOL)arg0 userList:(id)arg1;
- (void)addUploadVisibleSelectMonitor:(id)arg0 type:(unsigned long long)arg1 userList:(id)arg2 updateFailedList:(id)arg3 cancelFailedList:(id)arg4;
- (void)setCurPaidSelectModel:(id)arg0;
- (void)saveSelectType:(unsigned long long)arg0 realType:(int)arg1;
- (void).cxx_destruct;
- (id)userList;

@end
