//
//     Generated by private class-dump
//

@class RTVWebService, NSString;
@protocol RxInjector;

@interface RTVFlowerTaskManager : NSObject <RTVFlowerTaskManagerInterface> {
    id<RxInjector> _injector;
    RTVWebService *_webService;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVWebService *webService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)reportTaskCompleteFlower:(id)arg0;
- (id)reportTaskCompleteWithToken:(id)arg0;
- (void).cxx_destruct;
- (id)injector;
- (id)webService;

@end
