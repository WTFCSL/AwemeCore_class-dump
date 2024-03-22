//
//     Generated by private class-dump
//

@class NSMutableArray, NSString, NSTimer, NSLock, HGUniqueID;
@protocol HGMonitorableObjectProtocol;

@interface HGGameMonitor : NSObject <HGBusinessMonitorProtocol> {
    BOOL _isActive;
    id<HGMonitorableObjectProtocol> _gameEngine;
    HGUniqueID *_uniqueID;
    NSTimer *_collectTimer;
    NSLock *_dataLock;
    NSMutableArray *_collectedDatas;
}

@property (weak, nonatomic) id<HGMonitorableObjectProtocol> gameEngine;
@property (retain, nonatomic) HGUniqueID *uniqueID;
@property (retain, nonatomic) NSTimer *collectTimer;
@property (retain, nonatomic) NSLock *dataLock;
@property (retain, nonatomic) NSMutableArray *collectedDatas;
@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)monitorWithGameEngine:(id)arg0 uniqueID:(id)arg1;

- (id)paramsForReport;
- (id)collectTimer;
- (void)setCollectTimer:(id)arg0;
- (void)setGameEngine:(id)arg0;
- (id)gameEngine;
- (id)collectedDatas;
- (void)setCollectedDatas:(id)arg0;
- (id)gameDatas;
- (id)dataLock;
- (id)init;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)stop;
- (BOOL)isActive;
- (void)start;
- (void)setDataLock:(id)arg0;
- (void)collectData;

@end
