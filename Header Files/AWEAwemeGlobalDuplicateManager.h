//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWEAwemeGlobalDuplicateManager : NSObject <AWEAwemeGlobalDuplicateManagerProtocol> {
    NSMutableDictionary *_awemeInfos;
}

@property (retain, nonatomic) NSMutableDictionary *awemeInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (id)awemeInfos;
- (void)setAwemeInfos:(id)arg0;
- (BOOL)isValidModel:(id)arg0;
- (void)trackWithAweme:(id)arg0 fromType:(id)arg1;
- (BOOL)shouldFilterAweme:(id)arg0 fromType:(id)arg1;
- (void)addAmeme:(id)arg0 enterfrom:(id)arg1;
- (id)filterDuplicatedDatasource:(id)arg0 fromIndex:(long long)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;
- (unsigned long long)duplicateType;

@end