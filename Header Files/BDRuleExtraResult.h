//
//     Generated by private class-dump
//

@class NSDictionary;

@interface BDRuleExtraResult : NSObject {
    BOOL _hitRule;
    BOOL _needPostProcess;
    NSDictionary *_context;
}

@property (nonatomic) BOOL hitRule;
@property (nonatomic) BOOL needPostProcess;
@property (retain, nonatomic) NSDictionary *context;

- (BOOL)hitRule;
- (void)setHitRule:(BOOL)arg0;
- (BOOL)needPostProcess;
- (void)setNeedPostProcess:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end
