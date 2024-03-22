//
//     Generated by private class-dump
//

@class NSArray, AWEOpenPlatformAuthFlowManager;

@interface AWEOpenPlatformHalfAuthIdentityConfiguration : NSObject {
    AWEOpenPlatformAuthFlowManager *_flowManager;
    NSArray *_scopeItems;
    unsigned long long _scopeType;
}

@property (retain, nonatomic) AWEOpenPlatformAuthFlowManager *flowManager;
@property (copy, nonatomic) NSArray *scopeItems;
@property (nonatomic) unsigned long long scopeType;

- (id)scopeItems;
- (void)setScopeItems:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)scopeType;
- (void)setScopeType:(unsigned long long)arg0;
- (id)flowManager;
- (void)setFlowManager:(id)arg0;

@end
