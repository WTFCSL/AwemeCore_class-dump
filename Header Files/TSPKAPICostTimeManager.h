//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;
@protocol TSPKLock;

@interface TSPKAPICostTimeManager : NSObject <TSPKSubscriber> {
    NSMutableDictionary *_uploaderDic;
    id<TSPKLock> _lock;
}

@property (retain, nonatomic) NSMutableDictionary *uploaderDic;
@property (retain, nonatomic) id<TSPKLock> lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)canHandelEvent:(id)arg0;
- (id)hanleEvent:(id)arg0;
- (id)uploaderDic;
- (void)setUploaderDic:(id)arg0;
- (id)init;
- (id)uniqueId;
- (void).cxx_destruct;
- (id)lock;
- (void)setLock:(id)arg0;

@end
