//
//     Generated by private class-dump
//

@class NSString, AWETeenMoreSheetView;

@interface AWETeenGeneralShareButton : AWETeenGeneralBaseActionButton <AWETeenSaveDataCenterDelegate, AWETeenPanelPresentPortocol, AWETeenShareMessage> {
    AWETeenMoreSheetView *_sharePanelView;
    NSString *_reportID;
}

@property (retain, nonatomic) AWETeenMoreSheetView *sharePanelView;
@property (copy, nonatomic) NSString *reportID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)reportAction;
- (void)btnClick;
- (void)setSharePanelView:(id)arg0;
- (id)sharePanelView;
- (void)willDismissPanel:(id)arg0;
- (void)configWithModel:(id)arg0 extra:(id)arg1;
- (void)didFinishShareWithItemID:(id)arg0 shareCount:(id)arg1;
- (void)p_handleBroadcastNotification:(id)arg0;
- (void)p_updateShareCount;
- (id)copyLinkAction;
- (void)saveDataCenter:(id)arg0 downloadCompleted:(long long)arg1;
- (void)saveDataCenter:(id)arg0 saveToSysPhotosCompleted:(BOOL)arg1;
- (void)saveDataCenter:(id)arg0 needApplyPhotoPermission:(BOOL)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)reportID;
- (void)dealloc;
- (id)saveButton;
- (void)setReportID:(id)arg0;

@end
