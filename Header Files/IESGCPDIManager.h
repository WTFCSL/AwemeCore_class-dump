//
//     Generated by private class-dump
//

@class NSPointerArray, NSMapTable, IESGCPDIContainer;
@protocol IESGCPDIContext;

@interface IESGCPDIManager : NSObject {
    IESGCPDIContainer *_appDI;
    IESGCPDIContainer *_roomDI;
    NSMapTable *_store;
    NSMapTable *_contextIDMap;
    NSPointerArray *_diStack;
}

@property (retain, nonatomic) NSMapTable *store;
@property (retain, nonatomic) NSMapTable *contextIDMap;
@property (retain, nonatomic) NSPointerArray *diStack;
@property (retain, nonatomic) IESGCPDIContainer *appDI;
@property (weak, nonatomic) IESGCPDIContainer *roomDI;
@property (readonly, weak, nonatomic) id<IESGCPDIContext> currentDIContext;

+ (id)shareInstance;

- (id)appDI;
- (id)roomDI;
- (void)setRoomDI:(id)arg0;
- (id)currentDIContext;
- (id)registerDIWithContext:(id)arg0 parentDI:(id)arg1;
- (id)diContainerWithContext:(id)arg0;
- (id)diContainerWithContextID:(id)arg0;
- (id)diContextWithContextID:(id)arg0;
- (BOOL)bindObject:(id)arg0 forProtocol:(id)arg1 withContext:(id)arg2;
- (BOOL)multiBindObject:(id)arg0 forProtocol:(id)arg1 withContext:(id)arg2;
- (BOOL)unbindObject:(id)arg0 forProtocol:(id)arg1 withContext:(id)arg2;
- (id)objectForProtocol:(id)arg0 withContext:(id)arg1;
- (id)contextIDMap;
- (id)diStack;
- (void)reportMonitorWithStatus:(long long)arg0 extra:(id)arg1;
- (void)compactDIStack;
- (void)setAppDI:(id)arg0;
- (void)setContextIDMap:(id)arg0;
- (void)setDiStack:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;

@end
