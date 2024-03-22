//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface BDREInstructionCacheManager : NSObject {
    NSString *_signature;
    NSDictionary *_commandMap;
    NSString *_kvStoreID;
}

@property (retain, nonatomic) NSDictionary *commandMap;
@property (copy, nonatomic) NSString *signature;
@property (readonly, copy, nonatomic) NSString *kvStoreID;

+ (id)sharedManager;

- (id)findCommandsForExpr:(id)arg0;
- (void)updateInstructionJsonMap:(id)arg0 signature:(id)arg1;
- (void)loadCommandMap;
- (id)kvStoreID;
- (void)updateCommandMapWithInstructionJsonMap:(id)arg0;
- (void)setSignature:(id)arg0;
- (id)signature;
- (id)init;
- (void).cxx_destruct;
- (id)commandMap;
- (void)setCommandMap:(id)arg0;

@end
