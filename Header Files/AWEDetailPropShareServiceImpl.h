//
//     Generated by private class-dump
//

@class NSString, AWEDetailPropViewModel, IESServiceProvider, UIViewController;

@interface AWEDetailPropShareServiceImpl : NSObject <AWEDetailShareService> {
    UIViewController *_host;
    IESServiceProvider *_provider;
    AWEDetailPropViewModel *_stateContext;
}

@property (weak, nonatomic) UIViewController *host;
@property (weak, nonatomic) IESServiceProvider *provider;
@property (weak, nonatomic) AWEDetailPropViewModel *stateContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHost:(id)arg0 serviceProvider:(id)arg1;
- (void)shareWithActionSender:(id)arg0;
- (void)setProvider:(id)arg0;
- (void)setHost:(id)arg0;
- (id)provider;
- (void).cxx_destruct;
- (void)setStateContext:(id)arg0;
- (id)host;
- (id)stateContext;

@end
