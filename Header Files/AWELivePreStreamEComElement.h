//
//     Generated by private class-dump
//

@class NSString;

@interface AWELivePreStreamEComElement : AWELiveBaseElement <AWELivePreStreamMessageSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiveModuleServiceDOUYINAdaperClass;
+ (Class)aAWELiveModuleServiceDOUYINLiteAdaperClass;

- (void)onMessageReceivce:(id)arg0 withDict:(id)arg1;
- (id)aAWELiveModuleServiceDOUYINAdaper;
- (id)aAWELiveModuleServiceDOUYINLiteAdaper;
- (void)roomInfoBySceneReceive:(id)arg0;
- (void)setData:(id)arg0;
- (void)reset;

@end