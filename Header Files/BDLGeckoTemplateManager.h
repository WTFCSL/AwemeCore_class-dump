//
//     Generated by private class-dump
//

@class NSLock, NSMapTable, NSString;

@interface BDLGeckoTemplateManager : NSObject <BDLTemplateProtocol> {
    NSMapTable *_dataUpdateBlocks;
    NSLock *_blocksLock;
}

@property (retain, nonatomic) NSMapTable *dataUpdateBlocks;
@property (retain, nonatomic) NSLock *blocksLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)sharedInstance;

- (id)rootDirForGroupID:(id)arg0;
- (id)fileForGroupID:(id)arg0;
- (void)registerDataUpdate:(id /* block */)arg0 forGroupID:(id)arg1;
- (id)blocksLock;
- (id)dataUpdateBlocks;
- (void)setDataUpdateBlocks:(id)arg0;
- (void)setBlocksLock:(id)arg0;
- (void)geckoDataUpdate:(id)arg0 succeed:(BOOL)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)defaultGroupID;

@end
