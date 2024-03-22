//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface TSPKEntryManager : NSObject {
    id /* block */ _customCanHandleBuilder;
    NSMutableDictionary *_entries;
    NSMutableDictionary *_entryEnableDict;
    NSMutableDictionary *_apiModelDict;
}

@property (copy, nonatomic) id /* block */ customCanHandleBuilder;
@property (retain, nonatomic) NSMutableDictionary *entries;
@property (retain, nonatomic) NSMutableDictionary *entryEnableDict;
@property (retain, nonatomic) NSMutableDictionary *apiModelDict;

+ (id)sharedManager;

- (id)didEnterEntry:(id)arg0 withModel:(id)arg1;
- (void)registerCustomCanHandleBuilder:(id /* block */)arg0;
- (void)setCustomCanHandleBuilder:(id /* block */)arg0;
- (void)buildEntryModelToDict:(id)arg0;
- (BOOL)canHandleEntry:(id)arg0 withModel:(id)arg1;
- (id)handleEnterEntry:(id)arg0 withModel:(id)arg1;
- (id /* block */)customCanHandleBuilder;
- (id)apiModelDict;
- (void)buildAPI:(id)arg0 ofEntryModel:(id)arg1 apiClass:(id)arg2;
- (void)registerEntryType:(id)arg0 entryModel:(id)arg1;
- (void)setEntryType:(id)arg0 enable:(BOOL)arg1;
- (BOOL)respondToAPIKey:(id)arg0;
- (id)entryEnableDict;
- (void)setEntryEnableDict:(id)arg0;
- (void)setApiModelDict:(id)arg0;
- (id)entries;
- (id)init;
- (void)setEntries:(id)arg0;
- (void).cxx_destruct;

@end