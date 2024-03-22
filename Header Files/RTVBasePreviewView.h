//
//     Generated by private class-dump
//

@class UITapGestureRecognizer, NSString, RTVPreviewViewModel;
@protocol RTVBasePreviewViewDelegate;

@interface RTVBasePreviewView : UIView <RTVInteractionControllerObserver> {
    id<RTVBasePreviewViewDelegate> _delegate;
    RTVPreviewViewModel *_viewModel;
    id _viewContext;
    UITapGestureRecognizer *_tapGesture;
}

@property (retain, nonatomic) RTVPreviewViewModel *viewModel;
@property (retain, nonatomic) id viewContext;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<RTVBasePreviewViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)arg0 context:(id)arg1;
- (void)didChangeInteractionController:(id)arg0 context:(id)arg1;
- (void)__createGestureRecognizer;
- (void)__onClicked;
- (void)viewDidClick;
- (void)willAdjustScale;
- (void)didAdjustScale;
- (void)transformChange:(id)arg0;
- (id)viewContext;
- (void).cxx_destruct;
- (void)setViewContext:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)tapGesture;
- (id)delegate;
- (id)viewModel;
- (void)setDelegate:(id)arg0;
- (void)setTapGesture:(id)arg0;

@end