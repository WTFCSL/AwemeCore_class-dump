//
//     Generated by private class-dump
//

@class BackendDslInfo, NSString, UIView;
@protocol IESLiveDynamicManagerReaction, IESLiveSliceXInstanceInterface, IESLiveLynxAirInstanceInterface;

@interface IESLiveDynamicComponentView : UIView <IESLiveSliceXEventForwardDelegate, IESLiveLynxAirLifecycleProtocol, HTSLivePluginLayoutView> {
    BackendDslInfo *_dslInfo;
    UIView *_dynamicView;
    id<IESLiveDynamicManagerReaction> _reaction;
    id<IESLiveLynxAirInstanceInterface> _airInstance;
    id<IESLiveSliceXInstanceInterface> _sliceXInstance;
    struct CGSize { double width; double height; } _viewSize;
}

@property (retain, nonatomic) BackendDslInfo *dslInfo;
@property (retain, nonatomic) UIView *dynamicView;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (weak, nonatomic) id<IESLiveDynamicManagerReaction> reaction;
@property (retain, nonatomic) id<IESLiveLynxAirInstanceInterface> airInstance;
@property (retain, nonatomic) id<IESLiveSliceXInstanceInterface> sliceXInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)containerDidFirstScreen:(id)arg0;
- (void)didSetAttachingDIContext;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)createInstances;
- (void)createLynxAirViewWithDsl:(id)arg0;
- (void)setSliceXInstance:(id)arg0;
- (id)sliceXInstance;
- (void)setAirInstance:(id)arg0;
- (id)dynamicView;
- (id)airInstance;
- (void)setDynamicView:(id)arg0;
- (void)triggerSliceXEvent:(id)arg0;
- (void)setDslInfo:(id)arg0;
- (id)dslInfo;
- (void)createSliceXViewWithDsl:(id)arg0;
- (id)initWithDslInfo:(id)arg0 reaction:(id)arg1;
- (void).cxx_destruct;
- (void)setup;
- (struct CGSize { double x0; double x1; })viewSize;
- (id)viewType;
- (void)setViewSize:(struct CGSize { double x0; double x1; })arg0;
- (id)reaction;
- (void)setReaction:(id)arg0;

@end
