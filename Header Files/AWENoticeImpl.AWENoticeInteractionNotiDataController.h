//
//     Generated by private class-dump
//

@interface AWENoticeImpl.AWENoticeInteractionNotiDataController : NSObject <AWEUserMessage, AWENoticeInProfileDataControllerProtocol> {
    void /* unknown type, empty encoding */ isRequestingRemoteData;
    void /* unknown type, empty encoding */ latestInteractionResponseModel;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_groupDataController;
    void /* unknown type, empty encoding */ profileHeaderInfoCardModels;
}

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)handleUpdateInteractNoticeWithNoti:(id)arg0;
- (void)handleAddFakeInteractNoticeWithNoti:(id)arg0;
- (void)handleUpdateInteractionNoticeAfterDeleteWithNoti:(id)arg0;
- (void)handleTryToFetchRemoteDataWithNoti:(id)arg0;
- (void)handleUpdateInteractionNoticeUnreadCountWithNoti:(id)arg0;
- (void)handleUpdateInteractNoticeDisplayTextWithNoti:(id)arg0;
- (void)fetchRemoteNoticeData;
- (id)currentInfoModels;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
