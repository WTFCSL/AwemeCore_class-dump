//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface DitoLynxHelper : NSObject {
    NSMutableArray *_templateCacheCheckQueue;
}

@property (retain, nonatomic) NSMutableArray *templateCacheCheckQueue;

- (void)checkLynxTempleteCache:(id)arg0 completeBlock:(id /* block */)arg1;
- (id)templateCacheCheckQueue;
- (void)removeLynxTempleteCheckTask:(id)arg0;
- (void)setTemplateCacheCheckQueue:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end