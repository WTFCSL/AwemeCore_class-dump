//
//     Generated by private class-dump
//

@class NSString;

@interface BDARifleLynxMethod : NSObject {
    NSString *_methodName;
    id /* block */ _handler;
}

@property (copy, nonatomic) NSString *methodName;
@property (copy, nonatomic) id /* block */ handler;

+ (id)methodWithName:(id)arg0 handler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;
- (id)methodName;
- (void)setMethodName:(id)arg0;

@end
