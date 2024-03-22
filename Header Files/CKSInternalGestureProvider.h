//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol ACCStickerEventFlowProtocol, ACCGestureResponsibleStickerProtocol, ACCStickerContainerProtocol;

@interface CKSInternalGestureProvider : NSObject <UIGestureRecognizerDelegate, CKSStickerGestureProviderProtocol> {
    UIView<ACCGestureResponsibleStickerProtocol> *_gestureTargetView;
    id<ACCStickerContainerProtocol, ACCStickerEventFlowProtocol> _stickerContainer;
}

@property (weak, nonatomic) UIView<ACCGestureResponsibleStickerProtocol> *gestureTargetView;
@property (weak, nonatomic) id<ACCStickerContainerProtocol, ACCStickerEventFlowProtocol> stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupGesture;
- (void)panAction:(id)arg0;
- (id)stickerContainer;
- (void)setStickerContainer:(id)arg0;
- (id)initWithWeakReferenceOfStickerContainer:(id)arg0;
- (void)pinchAction:(id)arg0;
- (void)rotationAction:(id)arg0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)gestureView;
- (void)tapAction:(id)arg0;
- (void)setGestureTargetView:(id)arg0;
- (id)gestureTargetView;

@end
