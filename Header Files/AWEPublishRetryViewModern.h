//
//     Generated by private class-dump
//

@class NSString, AWEPublishResultView, UIWindow;

@interface AWEPublishRetryViewModern : UIView <AWEPublishRetryViewProtocol> {
    id /* block */ _retryAction;
    id /* block */ _closeAction;
    id /* block */ _panToDismissAction;
    AWEPublishResultView *_resultView;
    UIWindow *_overlayWindow;
}

@property (retain, nonatomic) AWEPublishResultView *resultView;
@property (retain, nonatomic) UIWindow *overlayWindow;
@property (copy, nonatomic) id /* block */ retryAction;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ panToDismissAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCoverImage:(id)arg0;
- (void)toggleRetryButton:(BOOL)arg0;
- (void)setPanToDismissAction:(id /* block */)arg0;
- (void)indicatorButtonTapped;
- (id /* block */)panToDismissAction;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)show;
- (id /* block */)closeAction;
- (id /* block */)retryAction;
- (void)setCloseAction:(id /* block */)arg0;
- (void)dismiss:(BOOL)arg0;
- (void)handlePanGesture:(id)arg0;
- (id)initWithType:(unsigned long long)arg0 title:(id)arg1 subtitle:(id)arg2;
- (void)setCoverImageURL:(id)arg0;
- (id)resultView;
- (void)setResultView:(id)arg0;
- (id)overlayWindow;
- (void)setOverlayWindow:(id)arg0;
- (void)actionButtonTapped;
- (void)setRetryAction:(id /* block */)arg0;

@end