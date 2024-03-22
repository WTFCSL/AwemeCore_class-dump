//
//     Generated by private class-dump
//

@class NSString, AWEStorage;

@interface AFDFrequencyRule : NSObject {
    BOOL _uidSpecific;
    AWEStorage *_storage;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL uidSpecific;
@property (retain, nonatomic) AWEStorage *storage;

+ (id)globalRuleWithID:(id)arg0;
+ (void)registerLazyGlobalRuleWithID:(id)arg0 initializer:(id /* block */)arg1;
+ (void)setUserIDProvider:(id /* block */)arg0;
+ (id)frequencyStorage;
+ (id)p_globalRules;
+ (id)p_globalRuleInitializers;
+ (void)setGlobalRule:(id)arg0 forID:(id)arg1;
+ (id)allGlobalRuleIDs;
+ (void)initialize;

- (void)setUidSpecific:(BOOL)arg0;
- (BOOL)uidSpecific;
- (id)storageKeyWithPrefix:(id)arg0;
- (void)logAction:(id)arg0 resultFormat:(id)arg1;
- (void)logAvailable:(BOOL)arg0 reasonFormat:(id)arg1;
- (BOOL)available;
- (void)setStorage:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)storage;
- (id)identifier;
- (id)initWithID:(id)arg0;
- (void)reset;
- (void)setIdentifier:(id)arg0;

@end