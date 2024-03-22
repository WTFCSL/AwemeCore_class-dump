//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface IESGurdChannelBlocklistManager : NSObject {
    NSMutableDictionary *_blocklistChannelDictionary;
}

@property (retain, nonatomic) NSMutableDictionary *blocklistChannelDictionary;

+ (id)cachedBlocklist;
+ (id)dataWithPath:(id)arg0;
+ (id)sharedManager;

- (BOOL)isBlocklistChannel:(id)arg0 accessKey:(id)arg1;
- (BOOL)needBlock:(id)arg0;
- (void)setBlocklistChannelDictionary:(id)arg0;
- (id)blocklistChannelDictionary;
- (void)syncBlocklist;
- (void)removeChannel:(id)arg0 forAccessKey:(id)arg1;
- (void)addChannel:(id)arg0 forAccessKey:(id)arg1 lastCleanTimestamp:(long long)arg2;
- (long long)getLastCleanTimestamp:(id)arg0 channel:(id)arg1;
- (id)getBlockChannelStr:(id)arg0;
- (unsigned long long)getBlocklistCount:(id)arg0;
- (id)copyBlocklistChannel;
- (void).cxx_destruct;
- (void)cleanCache;

@end
