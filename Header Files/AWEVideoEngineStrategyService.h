//
//     Generated by private class-dump
//

@class NSLock, NSArray, NSString;

@interface AWEVideoEngineStrategyService : NSObject <TTVideoEngineStrategyAppService> {
    NSLock *_dataSourceLock;
    NSArray *_currentDataSource;
}

@property (retain, nonatomic) NSLock *dataSourceLock;
@property (retain, nonatomic) NSArray *currentDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)vodStrategy:(id)arg0 getMediaPortrait:(id)arg1 name:(id)arg2 source:(id)arg3;
- (id)dataSourceLock;
- (void)setDataSourceLock:(id)arg0;
- (void)setCurrentDataSource:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)currentDataSource;

@end