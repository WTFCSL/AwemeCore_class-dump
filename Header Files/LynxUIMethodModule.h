//
//     Generated by private class-dump
//

@class NSString, NSDictionary, LynxContext;

@interface LynxUIMethodModule : NSObject <LynxContextModule> {
    LynxContext *context_;
}

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (retain, nonatomic) id extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)methodLookup;
+ (id /* block */)wrapInvokeUIMethodCallback:(id /* block */)arg0;
+ (void)runOnUiThread:(id /* block */)arg0;
+ (id)name;

- (id)initWithLynxContext:(id)arg0;
- (void)invokeUIMethod:(id)arg0 nodes:(id)arg1 method:(id)arg2 params:(id)arg3 callback:(id /* block */)arg4;
- (void).cxx_destruct;

@end
