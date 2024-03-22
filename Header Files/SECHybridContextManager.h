//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface SECHybridContextManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _pageContextLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _piperContextLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _groupMapLock;
    NSMutableDictionary *_pageContextMap;
    NSMutableDictionary *_piperContextMap;
    NSMutableDictionary *_page2PipersMap;
    NSMutableDictionary *_groupMap;
}

@property (retain, nonatomic) NSMutableDictionary *pageContextMap;
@property (retain, nonatomic) NSMutableDictionary *piperContextMap;
@property (retain, nonatomic) NSMutableDictionary *page2PipersMap;
@property (retain, nonatomic) NSMutableDictionary *groupMap;

+ (id)sharedManager;

- (id)pageContextMap;
- (id)page2PipersMap;
- (id)piperContextMap;
- (id)allPiperContxt;
- (id)groupMap;
- (id)pageContextForSession:(id)arg0;
- (void)setPageContext:(id)arg0 forSession:(id)arg1;
- (void)removePageContextForSession:(id)arg0;
- (void)removeAllPipersForPage:(id)arg0;
- (void)setPiperContext:(id)arg0 forSession:(id)arg1;
- (void)removePiperContextForSession:(id)arg0;
- (id)piperContextForSession:(id)arg0;
- (id)allPipersForPage:(id)arg0;
- (void)addPiperContext:(id)arg0 group:(id)arg1;
- (void)removePiperContextForSession:(id)arg0 group:(id)arg1;
- (id)contextsForGroup:(id)arg0;
- (void)setPageContextMap:(id)arg0;
- (void)setPiperContextMap:(id)arg0;
- (void)setPage2PipersMap:(id)arg0;
- (void)setGroupMap:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end