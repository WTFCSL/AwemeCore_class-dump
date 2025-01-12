//
//     Generated by private class-dump
//

@class IESLiveNewDressResourceManager, NSArray, NSString, IESLiveNewDressContainer, IESLiveNewDressDataManager;

@interface IESLiveNewDressServiceProxy : NSProxy <IESLiveNewDressService> {
    IESLiveNewDressContainer *_container;
    IESLiveNewDressDataManager *_dataManager;
    IESLiveNewDressResourceManager *_resourceManager;
    NSArray *_targets;
}

@property (retain, nonatomic) IESLiveNewDressContainer *container;
@property (retain, nonatomic) IESLiveNewDressDataManager *dataManager;
@property (retain, nonatomic) IESLiveNewDressResourceManager *resourceManager;
@property (retain, nonatomic) NSArray *targets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleNoSelector:(id)arg0;
- (void)updateDressContext:(id)arg0;
- (id)dataManager;
- (id)container;
- (id)init;
- (BOOL)isProxy;
- (id)targets;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (void)setContainer:(id)arg0;
- (void)setTargets:(id)arg0;
- (id)resourceManager;
- (void)setDataManager:(id)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (void)setResourceManager:(id)arg0;

@end
