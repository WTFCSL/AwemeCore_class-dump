//
//     Generated by private class-dump
//

@class NSDate, NSString, BDALokiComponent, NSTimer, UIView, NSDictionary, BDMannorComponentManagerContext, BDALokiModel, BDMannorStyleTemplateComponentDataModel, BDMannorStyleTemplateComponentModel;

@interface BDMannorLokiComponent : NSObject <BDALokiComponentDelegate, BDMannorAdComponentProtocol> {
    BOOL _isShow;
    BOOL _downgrade;
    BOOL _didRender;
    BOOL _didShow;
    BOOL _hostHandleComponentRelation;
    BOOL _isSheoComponent;
    BOOL _sheoHasComponentShown;
    NSString *_scene;
    BDMannorComponentManagerContext *_context;
    NSString *_componentID;
    BDMannorStyleTemplateComponentModel *_componentModel;
    BDMannorStyleTemplateComponentDataModel *_data;
    NSDictionary *_parsedTrackConfig;
    NSString *_componentType;
    BDALokiModel *_lokiModel;
    BDALokiComponent *_lokiComponent;
    NSDictionary *_layoutContext;
    NSDate *_showDate;
    double _startLoadTime;
    NSTimer *_sheoProgressTimer;
}

@property (retain, nonatomic) BDMannorStyleTemplateComponentModel *componentModel;
@property (retain, nonatomic) BDMannorStyleTemplateComponentDataModel *data;
@property (copy, nonatomic) NSDictionary *parsedTrackConfig;
@property (copy, nonatomic) NSString *componentType;
@property (nonatomic) BOOL isShow;
@property (nonatomic) BOOL downgrade;
@property (retain, nonatomic) BDALokiModel *lokiModel;
@property (retain, nonatomic) BDALokiComponent *lokiComponent;
@property (copy, nonatomic) NSDictionary *layoutContext;
@property (retain, nonatomic) NSDate *showDate;
@property (nonatomic) BOOL didRender;
@property (nonatomic) BOOL didShow;
@property (nonatomic) BOOL hostHandleComponentRelation;
@property (nonatomic) double startLoadTime;
@property (nonatomic) BOOL isSheoComponent;
@property (retain, nonatomic) NSTimer *sheoProgressTimer;
@property (nonatomic) BOOL sheoHasComponentShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) BDMannorComponentManagerContext *context;
@property (readonly, nonatomic) UIView *componentView;
@property (readonly, nonatomic) NSString *scene;
@property (readonly, nonatomic) NSString *componentID;

- (void)setComponentModel:(id)arg0;
- (void)sendEvent:(id)arg0 params:(id)arg1 callback:(id /* block */)arg2;
- (BOOL)isShow;
- (void)setIsShow:(BOOL)arg0;
- (double)startLoadTime;
- (void)setStartLoadTime:(double)arg0;
- (void)setDidShow:(BOOL)arg0;
- (void)checkHasShowOnce:(id /* block */)arg0;
- (void)setLokiModel:(id)arg0;
- (id)lokiModel;
- (void)lokiStartLoad:(id)arg0;
- (id)getLayoutComponent:(id)arg0;
- (void)lokiRenderFinishComponent:(id)arg0;
- (void)lokiShowFinish:(id)arg0;
- (void)lokiClose:(id)arg0;
- (void)lokiComponent:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)lokiLoadUrlSuccess:(id)arg0;
- (void)lokiDowngrade:(id)arg0 errorMsg:(id)arg1 type:(long long)arg2;
- (void)lokiFetchTemplateDataWithUrl:(id)arg0 completion:(id /* block */)arg1;
- (void)lokiLoadImageWithUrl:(id)arg0 imageView:(id)arg1;
- (id)lokiSendMethodWithName:(id)arg0 params:(id)arg1;
- (void)setParsedTrackConfig:(id)arg0;
- (id)parsedTrackConfig;
- (id)componentModel;
- (void)p_addEventHandler;
- (void)createComponentViewAndConfig;
- (id)initWithContext:(id)arg0 componentType:(id)arg1;
- (void)destory;
- (BOOL)downgrade;
- (void)setDowngrade:(BOOL)arg0;
- (void)sendLokiTrackWithAreaKey:(id)arg0 eventName:(id)arg1 params:(id)arg2 adExtraParams:(id)arg3;
- (id)p_generateGlobalProps;
- (void)setHostHandleComponentRelation:(BOOL)arg0;
- (id)mannorBridges;
- (void)sheo_render;
- (void)setupAnimationInitalState;
- (void)sheo_destroy;
- (BOOL)isSheoComponent;
- (void)sheo_sendEvent:(id)arg0 params:(id)arg1;
- (id)lokiComponent;
- (id)appStoreDownloadMethod;
- (id)adInfoMethod;
- (id)sendAdLogMethod;
- (id)openOtherAppMethod;
- (id)getCardDataMethod;
- (void)startShowComponent;
- (void)startHideComponent;
- (id)broadToHostMethod;
- (BOOL)hostHandleComponentRelation;
- (void)p_trackToShowToHideAnimation;
- (id)sheoProgressTimer;
- (void)setSheoHasComponentShown:(BOOL)arg0;
- (void)sheo_showComponentIfNeeded;
- (void)setSheoProgressTimer:(id)arg0;
- (BOOL)sheoHasComponentShown;
- (void)sheo_showComponent;
- (void)sheo_changeActionButtonColor;
- (void)sheo_showComponentAnimation;
- (void)sheo_sendOtherShow;
- (void)sheo_clickButtonWithParams:(id)arg0;
- (void)setLokiComponent:(id)arg0;
- (void)setDidRender:(BOOL)arg0;
- (void)setIsSheoComponent:(BOOL)arg0;
- (void)setLayoutContext:(id)arg0;
- (id)layoutContext;
- (id)data;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setData:(id)arg0;
- (void)show;
- (id)context;
- (void)hide;
- (id)componentType;
- (void)setComponentType:(id)arg0;
- (id)scene;
- (void)render;
- (id)componentView;
- (BOOL)didShow;
- (id)componentID;
- (BOOL)didRender;
- (id)showDate;
- (void)setShowDate:(id)arg0;

@end