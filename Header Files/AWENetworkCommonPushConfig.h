//
//     Generated by private class-dump
//

@interface AWENetworkCommonPushConfig : NSObject {
    unsigned long long _byteSyncThreadID;
    id /* block */ _monitorBlock;
}

@property (nonatomic) unsigned long long byteSyncThreadID;
@property (copy, nonatomic) id /* block */ monitorBlock;

- (void)setMonitorBlock:(id /* block */)arg0;
- (unsigned long long)byteSyncThreadID;
- (void)setByteSyncThreadID:(unsigned long long)arg0;
- (id /* block */)monitorBlock;
- (void).cxx_destruct;

@end
