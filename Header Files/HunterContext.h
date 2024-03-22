//
//     Generated by private class-dump
//

@class NSString, BDXContext, NSDictionary, NSMutableArray;

@interface HunterContext : NSObject {
    BOOL _useHunterCache;
    BOOL _disableHunterMonitor;
    BDXContext *_bdxContext;
    unsigned long long _containerType;
    NSString *_containerScene;
    NSString *_bid;
    NSDictionary *_customUIElements;
    NSMutableArray *_pluginList;
    id /* block */ _loadTypeBlock;
    long long _loadType;
    NSDictionary *_clientExtraData;
}

@property (retain, nonatomic) BDXContext *bdxContext;
@property (readonly, nonatomic) BDXContext *bdxContext;
@property (nonatomic) unsigned long long containerType;
@property (copy, nonatomic) NSString *containerScene;
@property (copy, nonatomic) NSString *bid;
@property (copy, nonatomic) NSDictionary *customUIElements;
@property (nonatomic) BOOL useHunterCache;
@property (retain, nonatomic) NSMutableArray *pluginList;
@property (copy, nonatomic) id /* block */ loadTypeBlock;
@property (nonatomic) long long loadType;
@property (retain, nonatomic) NSDictionary *clientExtraData;
@property (nonatomic) BOOL disableHunterMonitor;

- (void)setUseHunterCache:(BOOL)arg0;
- (void)setBid:(id)arg0;
- (id)bid;
- (id)pluginList;
- (void)setLoadType:(long long)arg0;
- (id)bdxContext;
- (id)bdxContext;
- (void)setBdxContext:(id)arg0;
- (id)customUIElements;
- (void)setCustomUIElements:(id)arg0;
- (BOOL)useHunterCache;
- (void)setContainerScene:(id)arg0;
- (void)setPluginList:(id)arg0;
- (id /* block */)loadTypeBlock;
- (BOOL)disableHunterMonitor;
- (void)setDisableHunterMonitor:(BOOL)arg0;
- (void)configureInitialBDXContext;
- (id)initBulletContext;
- (id)containerScene;
- (void)setLoadTypeBlock:(id /* block */)arg0;
- (id)clientExtraData;
- (void)setClientExtraData:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)containerType;
- (void)setContainerType:(unsigned long long)arg0;
- (long long)loadType;

@end