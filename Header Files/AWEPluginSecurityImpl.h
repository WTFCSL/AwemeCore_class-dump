//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEPluginSecurityImpl : NSObject <BDPSecurityPluginDelegate> {
    NSArray *_validate_list;
    NSArray *_free_list;
}

@property (retain, nonatomic) NSArray *validate_list;
@property (retain, nonatomic) NSArray *free_list;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)validate_list;
- (id)free_list;
- (BOOL)checkBridgeCallableWithBridgeContext:(id)arg0;
- (void)preMatchRulesWithAppID:(id)arg0;
- (void)setValidate_list:(id)arg0;
- (void)setFree_list:(id)arg0;
- (void).cxx_destruct;

@end
