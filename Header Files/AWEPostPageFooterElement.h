//
//     Generated by private class-dump
//

@class NSString, AWEVideoPublishFooterViewController;

@interface AWEPostPageFooterElement : AWEPostPageElement <AWEVideoPublishFooterDelegate> {
    BOOL _isPublishRightNavi;
    BOOL _isVideoPreviewPagePublish;
    BOOL _isShowKeyboard;
    AWEVideoPublishFooterViewController *_footerController;
}

@property (retain, nonatomic) AWEVideoPublishFooterViewController *footerController;
@property (nonatomic) BOOL isPublishRightNavi;
@property (nonatomic) BOOL isVideoPreviewPagePublish;
@property (nonatomic) BOOL isShowKeyboard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;

- (id)publishViewModel;
- (id)poi;
- (void)addNotifications;
- (void)subscribeServices;
- (void)updatePublishButton;
- (BOOL)syncToToutiaoItemIsOn;
- (void)trackLegalAffairsToastShow;
- (id)navigationBarService;
- (void)setIsPublishRightNavi:(BOOL)arg0;
- (BOOL)isShowKeyboard;
- (void)setIsShowKeyboard:(BOOL)arg0;
- (void)previewPublishNotification:(id)arg0;
- (void)setIsVideoPreviewPagePublish:(BOOL)arg0;
- (BOOL)isVideoPreviewPagePublish;
- (BOOL)isPublishRightNavi;
- (id)videoSyncService;
- (void)didPublish:(id)arg0;
- (id)draftActions:(id)arg0;
- (void)didDraft:(id)arg0;
- (id)titleResolveHashtags:(id)arg0;
- (BOOL)showNearbyPrivacyBubble:(id)arg0;
- (id)poiTrackerWithFooterCotroller:(id)arg0;
- (id)additionParamsForPublish:(id)arg0;
- (void)didConfigCover:(id)arg0;
- (void)willPublish:(id)arg0;
- (id /* block */)commonDraftAction;
- (void)setFooterController:(id)arg0;
- (void).cxx_destruct;
- (id)type;
- (BOOL)isEnabled;
- (id)privacy;
- (id)contentView;
- (id)footerController;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)isVisible;

@end
