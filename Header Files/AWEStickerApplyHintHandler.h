//
//     Generated by private class-dump
//

@class NSString, AWEStickerHintView, AWEVideoPublishViewModel;

@interface AWEStickerApplyHintHandler : AWEStickerApplyBaseHandler <ACCRecordFlowServiceSubscriber> {
    BOOL _needCheckPropHintShow;
    AWEStickerHintView *_stickerHintView;
    AWEVideoPublishViewModel *_repository;
}

@property (retain, nonatomic) AWEStickerHintView *stickerHintView;
@property (nonatomic) BOOL needCheckPropHintShow;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flowServiceDidAddFragment:(id)arg0;
- (void)handlerDidBecomeActive;
- (void)camera:(id)arg0 willApplySticker:(id)arg1 propSource:(long long)arg2;
- (void)p_resetStickerHintView;
- (void)checkPropNeedShowHintToast:(id)arg0 propSource:(long long)arg1;
- (BOOL)p_shouldShowPhotoSensitiveHint:(id)arg0;
- (void)p_showPhotoSensitiveHint:(id)arg0;
- (void)p_showPropHintViewIfNeed:(id)arg0;
- (id)stickerHintView;
- (void)setStickerHintView:(id)arg0;
- (void)setNeedCheckPropHintShow:(BOOL)arg0;
- (BOOL)needCheckPropHintShow;
- (BOOL)getShowComplianceToastCount;
- (void)markComplianceToastCount;
- (void).cxx_destruct;
- (void)setRepository:(id)arg0;
- (id)repository;

@end