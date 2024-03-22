//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveWebViewService;

@interface IESLiveFeedCollectionView : UICollectionView <UIGestureRecognizerDelegate> {
    BOOL _snapPageEnable;
    BOOL _enableNewInteraction;
    id<IESLiveWebViewService> _webViewService;
}

@property (retain, nonatomic) id<IESLiveWebViewService> webViewService;
@property (nonatomic) BOOL enableNewInteraction;
@property (nonatomic) BOOL snapPageEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)webViewService;
- (void)setWebViewService:(id)arg0;
- (void)cacheSettingKey;
- (BOOL)p_shouldProhibitLandscapeSlideDown:(id)arg0;
- (BOOL)snapPageEnable;
- (void)setSnapPageEnable:(BOOL)arg0;
- (BOOL)enableNewInteraction;
- (void)setEnableNewInteraction:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;

@end