//
//     Generated by private class-dump
//

@class NSString, AWENewCoverEditImageTemplateViewModel, AWENewCoverImageTemplateResourcesDataHelper, AWEVideoPublishViewModel;
@protocol AWENewCoverEditImageTemplateRenderServiceHelperDelegate, ACCStickerServiceProtocol, ACCVideoCoverEditServiceProtocol, ACCEditServiceProtocol;

@interface AWENewCoverEditImageTemplateRenderServiceHelper : NSObject <AWEImageTemplateResourcesDataHelperDelegate> {
    BOOL _isRenderTemplateLocked;
    BOOL _disableAdjustPostion;
    AWENewCoverEditImageTemplateViewModel *_viewModel;
    id<ACCEditServiceProtocol> _editService;
    id<ACCVideoCoverEditServiceProtocol> _videoCoverEditService;
    id<ACCStickerServiceProtocol> _stickerService;
    id<AWENewCoverEditImageTemplateRenderServiceHelperDelegate> _delegate;
    AWEVideoPublishViewModel *_publishViewModel;
    AWENewCoverImageTemplateResourcesDataHelper *_resourceDataHelper;
}

@property (retain, nonatomic) AWENewCoverImageTemplateResourcesDataHelper *resourceDataHelper;
@property (nonatomic) BOOL isRenderTemplateLocked;
@property (weak, nonatomic) AWENewCoverEditImageTemplateViewModel *viewModel;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCVideoCoverEditServiceProtocol> videoCoverEditService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<AWENewCoverEditImageTemplateRenderServiceHelperDelegate> delegate;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (nonatomic) BOOL disableAdjustPostion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getTemplateCropInfoWith:(id)arg0;

- (id)publishViewModel;
- (void)bindViewModel;
- (void)clearTemplate;
- (id)editService;
- (void)setEditService:(id)arg0;
- (void)setPublishViewModel:(id)arg0;
- (void)setStickerService:(id)arg0;
- (id)stickerService;
- (id)videoCoverEditService;
- (id)currentImageItemModel;
- (void)setVideoCoverEditService:(id)arg0;
- (void)setIsRenderTemplateLocked:(BOOL)arg0;
- (void)setShouldLockTemplateApply:(BOOL)arg0;
- (void)prepareImageTemplateResourcesIfSuccess:(BOOL)arg0 cachedResources:(id)arg1;
- (BOOL)isRenderTemplateLocked;
- (void)prepareImageTemplateResourcesIsCancel;
- (void)renderImageTemplateWithTemplateMediaID:(id)arg0 isInitializeScene:(BOOL)arg1 currentTemplateInfoModel:(id)arg2;
- (void)setDisableAdjustPostion:(BOOL)arg0;
- (id)resourceDataHelper;
- (void)removeTemplate;
- (void)removeStickers;
- (void)removeFilter;
- (BOOL)userVideoCoverRenderOptimize;
- (id)transferCacheDicToTemplateInfo:(id)arg0;
- (id)getCurrentTemplateMediaID;
- (id)currentImageTemplateLayerTrackInfoWithNLEImageWrapper:(id)arg0;
- (void)updateStickerLimitViewWithSize:(struct CGSize { double x0; double x1; })arg0;
- (void)updateCoverSafeAreaMaskVIewWithSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)disableAdjustPostion;
- (void)renderImageTemplateWithTemplateMediaID:(id)arg0 isInitializeScene:(BOOL)arg1;
- (void)setResourceDataHelper:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)setDelegate:(id)arg0;

@end