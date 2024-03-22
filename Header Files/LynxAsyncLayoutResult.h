//
//     Generated by private class-dump
//

@class NSString;
@protocol LynxServiceContainerProtocol;

@interface LynxAsyncLayoutResult : NSObject <LynxAsyncLayoutResultProtocol> {
    id<LynxServiceContainerProtocol> _container;
    NSString *_identify;
    long long _resultCode;
}

@property (retain, nonatomic) id<LynxServiceContainerProtocol> container;
@property (copy, nonatomic) NSString *identify;
@property (nonatomic) long long resultCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultErrorResult:(id)arg0 container:(id)arg1;

- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (long long)resultCode;
- (void)setResultCode:(long long)arg0;
- (id)identify;
- (void)setIdentify:(id)arg0;

@end