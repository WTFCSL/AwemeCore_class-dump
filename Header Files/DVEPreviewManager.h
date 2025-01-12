//
//     Generated by private class-dump
//

@class NSMapTable, NSString, UIPinchGestureRecognizer, DVEPreviewContainerView, UIPanGestureRecognizer;
@protocol IESServiceProvider;

@interface DVEPreviewManager : NSObject <DVEPreviewContainerViewDelegate, UIGestureRecognizerDelegate, DVEPreviewManagerProtocol> {
    id<IESServiceProvider> _serviceProvider;
    long long _editType;
    DVEPreviewContainerView *_containerView;
    NSMapTable *_pluginMapLayers;
    NSMapTable *_disablePlugins;
    UIPanGestureRecognizer *_panGesture;
    UIPanGestureRecognizer *_doublePanGesture;
    UIPinchGestureRecognizer *_pinGesture;
}

@property (retain, nonatomic) DVEPreviewContainerView *containerView;
@property (retain, nonatomic) NSMapTable *pluginMapLayers;
@property (retain, nonatomic) NSMapTable *disablePlugins;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *doublePanGesture;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long editType;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;

- (id)previewContainerView;
- (void)dismissPlugin:(id)arg0;
- (id)pluginMapLayersLocateContainPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)disablePluginWithTypes:(id)arg0;
- (void)bringPluginToFront:(id)arg0;
- (void)updatePreviewPluginIfNeed;
- (void)setEditType:(long long)arg0;
- (id)hitPreventViewWithPoint:(struct CGPoint { double x0; double x1; })arg0 event:(id)arg1;
- (void)addPluginToMapTable:(id)arg0;
- (void)removePluginFromMapTable:(id)arg0;
- (id)pluginMapLayers;
- (id)disablePlugins;
- (void)dispatchGesturePan:(id)arg0;
- (void)dispatchGestureRotate:(id)arg0;
- (void)dispatchGestureScale:(id)arg0;
- (void)dispatchGestureSingleTap:(id)arg0;
- (void)dispatchDoubleGesturePan:(id)arg0;
- (void)dispatchGestureDoubleTap:(id)arg0;
- (void)dispatchGestureLongPress:(id)arg0;
- (void)setDoublePanGesture:(id)arg0;
- (void)setPinGesture:(id)arg0;
- (id)dispatchPluginsWithGesture:(id)arg0 selector:(SEL)arg1;
- (void)reArrangeMapTableWithPlugin:(id)arg0 insertFront:(BOOL)arg1;
- (id)doublePanGesture;
- (id)pinGesture;
- (void)setPluginMapLayers:(id)arg0;
- (void)setDisablePlugins:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (void)setContainerView:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)containerView;
- (id)serviceProvider;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (void)showPlugin:(id)arg0;
- (long long)editType;
- (void)setupGestures;

@end
