//
//     Generated by private class-dump
//

@class BSTCheckConfig, NSMutableDictionary, NSMutableSet;

@interface BSTChecker : NSObject {
    BOOL _enabled;
    long long _maxMatchCount;
    long long _matchedCount;
    NSMutableDictionary *_errorParams;
    NSMutableDictionary *_filteredErrorKeys;
    NSMutableSet *_lostKeys;
    NSMutableSet *_errorKeys;
    NSMutableDictionary *_bstEvents;
    NSMutableDictionary *_originEvents;
    BSTCheckConfig *_config;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) long long maxMatchCount;
@property long long matchedCount;
@property (retain) NSMutableDictionary *errorParams;
@property (retain) NSMutableDictionary *filteredErrorKeys;
@property (retain) NSMutableSet *lostKeys;
@property (retain) NSMutableSet *errorKeys;
@property (retain) NSMutableDictionary *bstEvents;
@property (retain) NSMutableDictionary *originEvents;
@property (retain, nonatomic) BSTCheckConfig *config;

- (void)setMaxMatchCount:(long long)arg0;
- (void)setErrorParams:(id)arg0;
- (void)setFilteredErrorKeys:(id)arg0;
- (void)setLostKeys:(id)arg0;
- (void)setErrorKeys:(id)arg0;
- (void)setBstEvents:(id)arg0;
- (void)setOriginEvents:(id)arg0;
- (void)pageDisplayEnd;
- (id)lostKeys;
- (id)errorKeys;
- (id)errorParams;
- (id)filteredErrorKeys;
- (id)bstEvents;
- (id)originEvents;
- (void)setMatchedCount:(long long)arg0;
- (long long)matchedCount;
- (long long)maxMatchCount;
- (void)matchEventsWithEventParams:(id)arg0 eventsMap:(id)arg1 isBst:(BOOL)arg2 event:(id)arg3;
- (BOOL)needCheckWithName:(id)arg0 params:(id)arg1;
- (void)checkParamsWithBstParams:(id)arg0 originParams:(id)arg1 patternMap:(id)arg2;
- (void)reportErrorEventWithBtm:(id)arg0 key:(id)arg1 type:(id)arg2 extraInfo:(id)arg3;
- (BOOL)isJsonString:(id)arg0;
- (id)checkJsonStringWithBstValue:(id)arg0 originValue:(id)arg1;
- (void)checkEventWithName:(id)arg0 params:(id)arg1;
- (BOOL)enabled;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithConfig:(id)arg0;
- (void)setEnabled:(BOOL)arg0;

@end
