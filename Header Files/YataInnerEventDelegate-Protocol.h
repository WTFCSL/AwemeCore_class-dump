//
//     Generated by private class-dump
//

@protocol YataInstanceInnerInterface;

@protocol YataInnerEventDelegate <YataEventHandlerProtocol, YataEventInterceptor>

@property (readonly, weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;

- (id)initWithYataInstance:(id)arg0;
- (id)yataInstance;

@end
