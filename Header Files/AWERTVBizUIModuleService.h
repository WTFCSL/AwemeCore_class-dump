//
//     Generated by private class-dump
//

@class NSString;
@protocol RxInjector;

@interface AWERTVBizUIModuleService : HTSService <HTSService, AWERTVBizUIModuleService> {
    id<RxInjector> _injector;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)rxAwakeFromPropertyInjection;
- (id)createInviteViewControllerWithContext:(id)arg0;
- (void).cxx_destruct;
- (id)injector;

@end