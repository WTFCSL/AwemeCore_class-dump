//
//     Generated by private class-dump
//

@class NSString, PIABiMapTable, NSMutableDictionary;

@interface PIABootService : NSObject <PIABootService> {
    PIABiMapTable *_bootTable;
    NSMutableDictionary *_bootDict;
}

@property (retain, nonatomic) PIABiMapTable *bootTable;
@property (retain, nonatomic) NSMutableDictionary *bootDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (id)initService;
- (void)injectBootBridgeWithContext:(id)arg0 instance:(id)arg1;
- (void)bootFinishWithContext:(id)arg0 URL:(id)arg1;
- (void)addBootResultWithContext:(id)arg0 URL:(id)arg1 result:(id)arg2;
- (id)bootTable;
- (BOOL)checkBootFinishWithContext:(id)arg0 bootList:(id)arg1;
- (id)bootDict;
- (void)setBootTable:(id)arg0;
- (void)setBootDict:(id)arg0;
- (void).cxx_destruct;

@end
