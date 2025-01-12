//
//     Generated by private class-dump
//

@class IESECLiveContext, NSString, UIView, IESECLiveDynamicUIContext;
@protocol IESECLiveDynamicUIComponentDelegate;

@interface IESECLiveDynamicUIComponent : UIView <IESECLiveDynamicRegionHybridDelegate> {
    IESECLiveDynamicUIContext *_context;
    id<IESECLiveDynamicUIComponentDelegate> _delegate;
    UIView *_contentView;
    IESECLiveContext *_liveContext;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECLiveDynamicUIContext *context;
@property (weak, nonatomic) id<IESECLiveDynamicUIComponentDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLiveContext:(id)arg0;
- (id)liveContext;
- (void)dynamicRegion:(id)arg0 updateContainerBG:(id)arg1;
- (void)dynamicRegion:(id)arg0 resize:(struct CGSize { double x0; double x1; })arg1;
- (void)displayContentView;
- (id)setupLynxCardWithContext:(id)arg0;
- (id)setupNativeCardWithContext:(id)arg0;
- (id)initWithContext:(id)arg0 delegate:(id)arg1 liveContext:(id)arg2;
- (BOOL)updateDynamicUIWithContext:(id)arg0 delegate:(id)arg1 liveContext:(id)arg2;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)contentView;
- (id)delegate;
- (id)context;
- (void)setDelegate:(id)arg0;
- (void)setContentView:(id)arg0;
- (void)updateUI;

@end
