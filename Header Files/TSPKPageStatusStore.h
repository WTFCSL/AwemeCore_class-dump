//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary;
@protocol TSPKLock;

@interface TSPKPageStatusStore : NSObject {
    id<TSPKLock> _lock;
    NSMutableDictionary *_pageStatusInfo;
    NSArray *_caredPages;
}

@property (retain, nonatomic) id<TSPKLock> lock;
@property (retain, nonatomic) NSMutableDictionary *pageStatusInfo;
@property (copy, nonatomic) NSArray *caredPages;

+ (id)shared;

- (void)setConfigs:(id)arg0;
- (void)handlePageStatusChangeNotification:(id)arg0;
- (unsigned long long)pageStatus:(id)arg0;
- (id)caredPages;
- (id)pageStatusInfo;
- (void)setCaredPages:(id)arg0;
- (void)setPageStatusInfo:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)addObserver;
- (void)setLock:(id)arg0;

@end
