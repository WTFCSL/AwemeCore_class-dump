//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol IESLiveHierarchyContainerView, AWEFormatHierarchyContainerStackable;

@interface AWEFormatHierarchyContainerView : UIView <AWEFormatViewHierarchyProvider> {
    UIView<IESLiveHierarchyContainerView> *_mediaContainer;
    UIView<IESLiveHierarchyContainerView> *_operationContainer;
    UIView<IESLiveHierarchyContainerView> *_popupContainer;
    UIView<AWEFormatHierarchyContainerStackable> *_bottomOperationView;
}

@property (retain, nonatomic) UIView<IESLiveHierarchyContainerView> *mediaContainer;
@property (retain, nonatomic) UIView<IESLiveHierarchyContainerView> *operationContainer;
@property (retain, nonatomic) UIView<IESLiveHierarchyContainerView> *popupContainer;
@property (retain, nonatomic) UIView<AWEFormatHierarchyContainerStackable> *bottomOperationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onBreakPointUpdate;
- (id)bottomOperationView;
- (id)operationContainer;
- (id)popupContainer;
- (void)setOperationContainer:(id)arg0;
- (void)setPopupContainer:(id)arg0;
- (void)setBottomOperationView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (id)mediaContainer;
- (void)setMediaContainer:(id)arg0;

@end
