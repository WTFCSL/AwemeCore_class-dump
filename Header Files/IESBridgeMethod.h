//
//     Generated by private class-dump
//

@class NSString;

@interface IESBridgeMethod : NSObject {
    unsigned long long _authType;
    NSString *_methodName;
    NSString *_methodNamespace;
    id /* block */ _handler;
}

@property (readonly, nonatomic) unsigned long long authType;
@property (readonly, copy, nonatomic) NSString *methodName;
@property (readonly, copy, nonatomic) NSString *methodNamespace;
@property (readonly, copy, nonatomic) id /* block */ handler;

- (id)methodNamespace;
- (id)initWithMethodName:(id)arg0 methodNamespace:(id)arg1 authType:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (void).cxx_destruct;
- (unsigned long long)authType;
- (id /* block */)handler;
- (id)methodName;

@end
