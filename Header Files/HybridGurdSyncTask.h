//
//     Generated by private class-dump
//

@class NSString, NSArray, NSLock, NSMutableArray;

@interface HybridGurdSyncTask : NSObject {
    BOOL _disableThrottle;
    NSString *_accessKey;
    NSArray *_channelsArray;
    NSString *_groupName;
    NSString *_businessDomain;
    NSString *_resourceVersion;
    unsigned long long _options;
    long long _pollingPriority;
    long long _downloadPriority;
    long long _state;
    id /* block */ _completion;
    NSLock *_allCompletionsLock;
    NSMutableArray *_allCompletions;
}

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSArray *channelsArray;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) id /* block */ completion;
@property long long state;
@property (retain, nonatomic) NSLock *allCompletionsLock;
@property (retain, nonatomic) NSMutableArray *allCompletions;
@property (copy, nonatomic) NSString *businessDomain;
@property (copy, nonatomic) NSString *resourceVersion;
@property (nonatomic) unsigned long long options;
@property (nonatomic) long long pollingPriority;
@property (nonatomic) long long downloadPriority;
@property (readonly, getter=isExecuting) BOOL executing;
@property (nonatomic) BOOL disableThrottle;

+ (id)taskWithAccessKey:(id)arg0 groupName:(id)arg1 channelsArray:(id)arg2 completion:(id /* block */)arg3;

- (void)setPollingPriority:(long long)arg0;
- (void)setDisableThrottle:(BOOL)arg0;
- (id)channelsArray;
- (id)businessDomain;
- (void)setBusinessDomain:(id)arg0;
- (long long)pollingPriority;
- (void)setChannelsArray:(id)arg0;
- (BOOL)isEqualToTask:(id)arg0;
- (BOOL)disableThrottle;
- (void)addCompletionOfTask:(id)arg0;
- (void)setAllCompletionsLock:(id)arg0;
- (void)setAllCompletions:(id)arg0;
- (id)allCompletions;
- (id)allCompletionsLock;
- (id /* block */)completion;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (long long)state;
- (void)setCompletion:(id /* block */)arg0;
- (long long)downloadPriority;
- (void)setState:(long long)arg0;
- (id)resourceVersion;
- (void)setOptions:(unsigned long long)arg0;
- (void)setDownloadPriority:(long long)arg0;
- (unsigned long long)hash;
- (id)groupName;
- (BOOL)isEqual:(id)arg0;
- (unsigned long long)options;
- (void)setGroupName:(id)arg0;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (void)callCompletionsWithResult:(id)arg0;
- (void)setResourceVersion:(id)arg0;

@end
