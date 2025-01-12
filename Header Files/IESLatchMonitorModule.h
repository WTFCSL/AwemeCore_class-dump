//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESLatchMonitorModule : NSObject <LynxModule> {
    NSString *_latchID;
    NSString *_business;
    NSString *_url;
}

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (copy, nonatomic) NSString *latchID;
@property (copy, nonatomic) NSString *business;
@property (copy, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)methodLookup;
+ (id)name;

- (id)initWithParam:(id)arg0;
- (id)latchID;
- (void)setLatchID:(id)arg0;
- (void)perfMetric:(id)arg0;
- (void)jsbPromiseResult:(id)arg0;
- (void)result:(id)arg0;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (id)url;
- (id)business;
- (void)setBusiness:(id)arg0;

@end
