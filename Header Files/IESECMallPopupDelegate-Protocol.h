//
//     Generated by private class-dump
//

@protocol IESECMallPopupDelegate <IESECMallLynxRenderMonitorDelegate, IESECMallPopupTaskDelegate, IESECMallJSBridgeProvider>

- (id)responderView;
- (void)mallWriteAlog:(id)arg0 paramModel:(id)arg1 result:(id)arg2 context:(id)arg3;
- (id)pageNameForPopup:(id)arg0;
- (id)globalExtraForPopup:(id)arg0;
- (id)rootGlobalExtraForPopup:(id)arg0;
- (id)hybridMonitorContextForPopup:(id)arg0;
- (id)hmBidForPopup:(id)arg0;
- (BOOL)enableOptLynxViewLoadLogicForPopup:(id)arg0;
- (id)currentListContextIdForPopup:(id)arg0;
- (void)popupViewMakeStartPerformance;
- (void)popupViewMakeEndPerformance;

@optional

- (BOOL)currentListViewIsVisible;

@end
