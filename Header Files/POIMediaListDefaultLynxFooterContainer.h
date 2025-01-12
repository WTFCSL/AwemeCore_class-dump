//
//     Generated by private class-dump
//

@class NSString, AWEPOILynxContainerView, AWEPOITouchThroughView, POIMediaListPageContext, UIViewController;
@protocol POIMediaListViewControllerProtocol;

@interface POIMediaListDefaultLynxFooterContainer : NSObject <AWEPOICubeViewDelegate, POIMediaListStickyContainerProtocol> {
    POIMediaListPageContext *context;
    UIViewController<POIMediaListViewControllerProtocol> *vc;
    AWEPOILynxContainerView *_lynxView;
    AWEPOITouchThroughView *_containerView;
    double _height;
}

@property (retain, nonatomic) AWEPOILynxContainerView *lynxView;
@property (retain, nonatomic) AWEPOITouchThroughView *containerView;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) POIMediaListPageContext *context;
@property (weak, nonatomic) UIViewController<POIMediaListViewControllerProtocol> *vc;

- (id)lynxView;
- (void)setVc:(id)arg0;
- (void)setLynxView:(id)arg0;
- (void)cubeView:(id)arg0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)initializeExtension;
- (void)videoCell:(id)arg0 didUpdateWithModel:(id)arg1;
- (void)updateWithContainerModel:(id)arg0 currentMediaModel:(id)arg1;
- (BOOL)shouldOverlayBeyondOtherSiblingView;
- (id)cubeManager;
- (id)init;
- (void).cxx_destruct;
- (double)height;
- (void)setContext:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (id)context;
- (void)setHeight:(double)arg0;
- (double)preferredHeight;
- (id)vc;

@end
