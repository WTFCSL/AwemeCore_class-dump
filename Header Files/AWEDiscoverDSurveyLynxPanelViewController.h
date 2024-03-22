//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, UIView;
@protocol AWEFeedDynamicContainerProtocol, AWEFeedHotSpotPanelDelegate;

@interface AWEDiscoverDSurveyLynxPanelViewController : AWEDiscoverDFeedLynxPanelViewController <AWEBottomContainerViewLifeCycleDelegate> {
    id<AWEFeedHotSpotPanelDelegate> _panelDelegate;
    NSString *_referString;
    UIView<AWEFeedDynamicContainerProtocol> *_lynxContainer;
    AWEAwemeModel *_model;
}

@property (retain, nonatomic) UIView<AWEFeedDynamicContainerProtocol> *lynxContainer;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setReferString:(id)arg0;
- (id)lynxContainer;
- (void)onApplicationDidChangeStatusBarOrientation:(id)arg0;
- (void)setLynxContainer:(id)arg0;
- (id)panelDelegate;
- (void)setPanelDelegate:(id)arg0;
- (void)containerViewDidFinishLoadWithURL:(id)arg0;
- (void)containerViewDidLoadFailedWithURL:(id)arg0 error:(id)arg1;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)updateWithModel:(id)arg0;

@end
