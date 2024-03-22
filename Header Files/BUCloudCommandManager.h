//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSOperationQueue, NSObject, BUCloudCommandConfig;
@protocol OS_dispatch_queue;

@interface BUCloudCommandManager : NSObject {
    BUCloudCommandConfig *_config;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSOperationQueue *_commandExecutionQueue;
    NSMutableDictionary *_commandIDDic;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSOperationQueue *commandExecutionQueue;
@property (retain, nonatomic) NSMutableDictionary *commandIDDic;
@property (retain, nonatomic) BUCloudCommandConfig *config;

+ (id)sharedInstance;

- (void)executeCommandWithData:(id)arg0 ran:(id)arg1;
- (id)commandIDDic;
- (void)_executeCommand:(id)arg0;
- (id)commandExecutionQueue;
- (void)_postCommandResponse:(id)arg0;
- (id)_paramDictionaryWithResult:(id)arg0;
- (void)setCommandExecutionQueue:(id)arg0;
- (void)setCommandIDDic:(id)arg0;
- (void)fetchCloudCommand;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setSerialQueue:(id)arg0;
- (id)serialQueue;
- (id)config;
- (id)host;

@end
