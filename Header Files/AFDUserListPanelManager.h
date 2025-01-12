//
//     Generated by private class-dump
//

@class NSString, UIViewController, UIView;
@protocol AWEAgreeStoreVideoViewedViewProtocol, AWEViewedUserListPanelViewControllerProtocol;

@interface AFDUserListPanelManager : NSObject <AFDUserListPanelManagerProtocol> {
    UIViewController<AWEViewedUserListPanelViewControllerProtocol> *_viewerListViewController;
    UIView<AWEAgreeStoreVideoViewedViewProtocol> *_agreeStoreVideoViewedView;
}

@property (retain, nonatomic) UIViewController<AWEViewedUserListPanelViewControllerProtocol> *viewerListViewController;
@property (retain, nonatomic) UIView<AWEAgreeStoreVideoViewedViewProtocol> *agreeStoreVideoViewedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)agreeStoreVideoViewedView;
- (void)setAgreeStoreVideoViewedView:(id)arg0;
- (void)p_showViewedRecordListWithModel:(id)arg0 enterFrom:(id)arg1;
- (id)viewerListViewController;
- (void)setViewerListViewController:(id)arg0;
- (void)showViewedRecordListWithModel:(id)arg0 enterFrom:(id)arg1;
- (void).cxx_destruct;

@end
