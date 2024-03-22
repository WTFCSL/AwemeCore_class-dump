//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface TMAPIControlUnifiedContext : NSObject <TMAPIControlTaskContext> {
    NSMutableDictionary *_unified;
}

@property (retain, nonatomic) NSMutableDictionary *unified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rulerParams;
- (id)apiClass;
- (id)apiMethod;
- (id)apiDataType;
- (id)contextFromKey:(id)arg0;
- (void)mergeContext:(id)arg0 withKey:(id)arg1;
- (id)callToken;
- (void)setUnified:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)unified;

@end
