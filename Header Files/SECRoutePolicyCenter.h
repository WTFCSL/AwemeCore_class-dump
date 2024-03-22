//
//     Generated by private class-dump
//

@protocol SECRoutePolicyProtocol;

@interface SECRoutePolicyCenter : NSObject {
    id<SECRoutePolicyProtocol> _policy;
}

@property (retain, nonatomic) id<SECRoutePolicyProtocol> policy;

+ (id)sharedCenter;

- (id)protect:(id)arg0;
- (id)riskLevelOf:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)policy;
- (void)setPolicy:(id)arg0;

@end