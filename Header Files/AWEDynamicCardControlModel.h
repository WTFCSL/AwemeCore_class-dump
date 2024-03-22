//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEAwemeModel, NSArray;

@interface AWEDynamicCardControlModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _actionType;
    NSString *_pageID;
    AWEAwemeModel *_fallbackAweme;
    unsigned long long _insertMode;
    unsigned long long _insertPosition;
    NSDictionary *_removeConditions;
    NSDictionary *_insertConditions;
    NSArray *_freStrategies;
    NSArray *_concernDCardTypeList;
    long long _currentDiffPosition;
}

@property (readonly, nonatomic) long long minDiffToLastDCard;
@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *pageID;
@property (retain, nonatomic) AWEAwemeModel *fallbackAweme;
@property (nonatomic) unsigned long long insertMode;
@property (nonatomic) unsigned long long insertPosition;
@property (copy, nonatomic) NSDictionary *removeConditions;
@property (copy, nonatomic) NSDictionary *insertConditions;
@property (copy, nonatomic) NSArray *freStrategies;
@property (copy, nonatomic) NSArray *concernDCardTypeList;
@property (readonly, nonatomic) double notShowMaxAliveTime;
@property (nonatomic) long long currentDiffPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)freStrategiesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setInsertMode:(unsigned long long)arg0;
- (unsigned long long)insertMode;
- (id)removeConditions;
- (id)insertConditions;
- (unsigned long long)insertPosition;
- (unsigned long long)fetchDCardRemoveCondition;
- (double)notShowMaxAliveTime;
- (unsigned long long)fetchDCardInsertCondition;
- (long long)minDiffToLastDCard;
- (id)fallbackAweme;
- (void)setFallbackAweme:(id)arg0;
- (void)setInsertPosition:(unsigned long long)arg0;
- (void)setRemoveConditions:(id)arg0;
- (void)setInsertConditions:(id)arg0;
- (id)freStrategies;
- (void)setFreStrategies:(id)arg0;
- (id)concernDCardTypeList;
- (void)setConcernDCardTypeList:(id)arg0;
- (long long)currentDiffPosition;
- (void)setCurrentDiffPosition:(long long)arg0;
- (void)setActionType:(unsigned long long)arg0;
- (unsigned long long)actionType;
- (void).cxx_destruct;
- (void)setPageID:(id)arg0;
- (id)pageID;

@end
