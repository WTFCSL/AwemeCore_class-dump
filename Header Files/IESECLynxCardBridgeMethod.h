//
//     Generated by private class-dump
//

@class NSString;

@interface IESECLynxCardBridgeMethod : NSObject {
    NSString *_name;
    id /* block */ _handler;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ handler;

+ (id)bridgeMethodWithName:(id)arg0 handler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)setHandler:(id /* block */)arg0;
- (void)setName:(id)arg0;
- (id /* block */)handler;
- (id)name;

@end