//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEFeedContainerLandingStoreModel : NSObject {
    NSString *_tabId;
    NSDictionary *_params;
    id /* block */ _completionBlock;
    id /* block */ _exitBlock;
}

@property (retain, nonatomic) NSString *tabId;
@property (retain, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ exitBlock;

- (id)tabId;
- (id /* block */)exitBlock;
- (void)setExitBlock:(id /* block */)arg0;
- (void)setTabId:(id)arg0;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (id)params;
- (void)setParams:(id)arg0;

@end
