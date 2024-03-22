//
//     Generated by private class-dump
//

@class NSString, AWEGPlayerInteractionViewConfig;

@interface AWEGPlayerInteractionDispatchManager : AWEShellControllerManager <AWEGPlayerInteractionDispatchProtocol> {
    BOOL _loadBelowControllers;
    AWEGPlayerInteractionViewConfig *_viewConfig;
}

@property (retain, nonatomic) AWEGPlayerInteractionViewConfig *viewConfig;
@property (nonatomic) BOOL loadBelowControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)classNameArray;
- (BOOL)shouldFailedGestureRecognizer:(id)arg0;
- (BOOL)shouldResponseGestureRecognizer:(id)arg0;
- (BOOL)handleResponseGestureRecognizer:(id)arg0;
- (BOOL)shouldReceiveGestureRecognizer:(id)arg0 touch:(id)arg1;
- (void)setLoadBelowControllers:(BOOL)arg0;
- (BOOL)loadBelowControllers;
- (id)classNameArrayBelowBaseUI;
- (id)classNameArrayAboveBaseUI;
- (void)loadBelowBaseUIControllersWithViewController:(id)arg0 rootView:(id)arg1 withContext:(id)arg2;
- (void)loadAboveBaseUIControllersWithViewController:(id)arg0 rootView:(id)arg1 withContext:(id)arg2;
- (id)viewConfig;
- (void)setViewConfig:(id)arg0;
- (id)initWithViewConfig:(id)arg0;
- (void).cxx_destruct;

@end