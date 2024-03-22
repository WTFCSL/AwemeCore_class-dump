//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSMapTable, HTSLiveHighlightContainerSyncData, NSString, NSMutableArray;

@interface IESLiveHighlightContainerSyncDataManager : NSObject <IESLiveDataSyncDelegate, IESLiveHighlightContainerSyncDataStrategyProvider> {
    NSMutableDictionary *_dataTypeMap;
    NSMapTable *_subscriberMap;
    NSMutableArray *_dataTypeQueue;
    HTSLiveHighlightContainerSyncData *_cachedSyncData;
}

@property (retain, nonatomic) NSMutableDictionary *dataTypeMap;
@property (retain, nonatomic) NSMapTable *subscriberMap;
@property (retain, nonatomic) NSMutableArray *dataTypeQueue;
@property (retain, nonatomic) HTSLiveHighlightContainerSyncData *cachedSyncData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)subscribedSyncDataWithValue:(id)arg0 version:(long long)arg1;
- (void)subscribedSyncDataUpdatedWithValue:(id)arg0 oldVersion:(long long)arg1 newVersion:(long long)arg2;
- (void)addSubscriber:(id)arg0 forViewType:(unsigned long long)arg1;
- (void)removeSubscriberForViewType:(unsigned long long)arg0;
- (void)addViewType:(unsigned long long)arg0;
- (void)removeViewType:(unsigned long long)arg0;
- (BOOL)checkIfShowViewType:(unsigned long long)arg0;
- (void)handleHighlightContainerSyncData:(id)arg0;
- (void)setCachedSyncData:(id)arg0;
- (id)subscriberMap;
- (long long)fetchHighlightViewTypeNeedShow:(id)arg0;
- (id)stringWithHighlightViewType:(long long)arg0;
- (id)dataTypeQueue;
- (void)updateHighlightContainerWithShowType:(long long)arg0;
- (void)showHighlightForSubsciber:(id)arg0;
- (void)hideHighlightForSubsciber:(id)arg0;
- (BOOL)isValidItem:(id)arg0;
- (id)dataTypeMap;
- (id)stringWithHighlightDataType:(long long)arg0;
- (BOOL)needKeptViewType:(long long)arg0;
- (id)lookForSubscriberForKey:(id)arg0;
- (id)cachedSyncData;
- (void)hideHighlightForViewType:(long long)arg0;
- (void)showHighlightForViewType:(long long)arg0;
- (id)lookForSubscriberForDataType:(int)arg0;
- (void)setDataTypeMap:(id)arg0;
- (void)setSubscriberMap:(id)arg0;
- (void)setDataTypeQueue:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end