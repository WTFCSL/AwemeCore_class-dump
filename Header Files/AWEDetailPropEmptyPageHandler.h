//
//     Generated by private class-dump
//

@class NSString, AWEDetailPropViewModel, AWEDetailPropEmptyView, UIViewController;
@protocol AWEDetailPropEmptyPageHost;

@interface AWEDetailPropEmptyPageHandler : NSObject <AWEDetailBusinessHandlerProtocol> {
    AWEDetailPropViewModel *_stateContext;
    UIViewController<AWEDetailPropEmptyPageHost> *_host;
    AWEDetailPropEmptyView *_emptyView;
}

@property (weak, nonatomic) AWEDetailPropViewModel *stateContext;
@property (weak, nonatomic) UIViewController<AWEDetailPropEmptyPageHost> *host;
@property (retain, nonatomic) AWEDetailPropEmptyView *emptyView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostViewDidLoad;
- (id)initWithHost:(id)arg0 stateContext:(id)arg1;
- (void)p_showEmptyPropView;
- (void)setHost:(id)arg0;
- (void).cxx_destruct;
- (void)setStateContext:(id)arg0;
- (id)host;
- (id)stateContext;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;

@end
