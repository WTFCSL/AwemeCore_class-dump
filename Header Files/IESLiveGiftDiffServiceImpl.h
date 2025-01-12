//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveStreamCaptureProvider;

@interface IESLiveGiftDiffServiceImpl : NSObject <IESLiveGiftDiffService> {
    id<IESLiveStreamCaptureProvider> _streamCaptureProvider;
}

@property (retain, nonatomic) id<IESLiveStreamCaptureProvider> streamCaptureProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)audioDrivePictureEffect_destroyHandler;
- (id)streamCaptureProvider;
- (void)setStreamCaptureProvider:(id)arg0;
- (Class)giftAuthorizeGuideCellClass;
- (id)getGiftAuthorizeGuideItemWithGiftPanelDataSharing:(id)arg0;
- (id)getGiftDiamondChangeItemWithGiftPanelDataSharing:(id)arg0;
- (id)getGiftDiamondChangeCellWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)audioDrivePictureEffect_prepareHandlerWithUseInMic:(BOOL)arg0 useInMusic:(BOOL)arg1;
- (BOOL)shouldEnterDanmukuModeWithRoom:(id)arg0;
- (void).cxx_destruct;

@end
