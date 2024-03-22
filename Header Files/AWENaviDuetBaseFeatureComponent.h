//
//     Generated by private class-dump
//

@class NSString;
@protocol TTKNaviFeatureComponentController, IESServiceProvider, AWENaviFeatureComponentBizController;

@interface AWENaviDuetBaseFeatureComponent : NSObject <TTKNaviFeatureComponent, TTKNaviFeatureComponentViewModelProvider> {
    id<TTKNaviFeatureComponentController, AWENaviFeatureComponentBizController> _controller;
    id<IESServiceProvider> _serviceProvider;
}

@property (weak, nonatomic) id<TTKNaviFeatureComponentController, AWENaviFeatureComponentBizController> controller;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (nonatomic, getter=isMounted) BOOL mounted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getViewModel:(Class)arg0;
- (void)setController:(id)arg0;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (id)controller;
- (id)serviceProvider;

@end