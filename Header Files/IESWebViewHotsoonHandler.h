//
//     Generated by private class-dump
//

@class NSString;

@interface IESWebViewHotsoonHandler : NSObject {
    id /* block */ _consoleLogHandler;
    NSString *_handlerName;
}

@property (copy) NSString *handlerName;
@property (copy, nonatomic) id /* block */ consoleLogHandler;

+ (BOOL)conformsToProtocol:(id)arg0;

- (id /* block */)consoleLogHandler;
- (void)setConsoleLogHandler:(id /* block */)arg0;
- (void)viewController:(id)arg0 handleContent:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (BOOL)respondsToSelector:(SEL)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (void)setHandlerName:(id)arg0;
- (id)handlerName;

@end
