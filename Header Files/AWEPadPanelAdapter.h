//
//     Generated by private class-dump
//

@class AWEPadPanelHelper, NSString;
@protocol AFDModalViewHelperProtocol;

@interface AWEPadPanelAdapter : HTSService <AWEPadPanelAdapter> {
    AWEPadPanelHelper<AFDModalViewHelperProtocol> *_helper;
}

@property (retain, nonatomic) AWEPadPanelHelper<AFDModalViewHelperProtocol> *helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)showPanelAnimated:(id)arg0 preAction:(id /* block */)arg1 addition:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)panelViewMasAdapt:(id)arg0 superView:(id)arg1 height:(double)arg2;
- (BOOL)dismissPanelAnimated:(id)arg0 preAction:(id /* block */)arg1 addition:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)addCloseButtonTo:(id)arg0 actionTarget:(id)arg1 action:(SEL)arg2 image:(id)arg3;
- (BOOL)dismissPanelAnimated:(id)arg0 completion:(id /* block */)arg1;
- (id)addPlaceHolderViewTo:(id)arg0 magrinView:(id)arg1 height:(double)arg2 isBottom:(BOOL)arg3;
- (void)panelViewMasAdaptFuntional:(id)arg0 superView:(id)arg1 height:(double)arg2;
- (void)panelContainerViewMasAdapt:(id)arg0 superView:(id)arg1;
- (BOOL)showPanelAnimated:(id)arg0 completion:(id /* block */)arg1;
- (void).cxx_destruct;
- (void)setHelper:(id)arg0;
- (id)helper;
- (BOOL)performBlock:(id /* block */)arg0;

@end
