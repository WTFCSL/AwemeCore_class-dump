//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface BDLGurdSyncResourcesTask : NSObject {
    BOOL _executing;
    NSString *_identifier;
    NSString *_accessKey;
    NSArray *_channelsArray;
    NSString *_businessDomain;
    id /* block */ _completion;
    NSString *_resourceVersion;
    unsigned long long _options;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSArray *channelsArray;
@property (copy, nonatomic) NSString *businessDomain;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic, getter=isExecuting) BOOL executing;
@property (copy, nonatomic) NSString *resourceVersion;
@property (nonatomic) unsigned long long options;

+ (id)taskWithAccessKey:(id)arg0 channels:(id)arg1 businessDomain:(id)arg2 completion:(id /* block */)arg3;
+ (id)taskWithChannels:(id)arg0 businessDomain:(id)arg1 completion:(id /* block */)arg2;

- (BOOL)forceRequest;
- (id)channelsArray;
- (id)businessDomain;
- (void)setBusinessDomain:(id)arg0;
- (void)setChannelsArray:(id)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (void)setCompletion:(id /* block */)arg0;
- (id)resourceVersion;
- (void)setOptions:(unsigned long long)arg0;
- (id)identifier;
- (unsigned long long)options;
- (void)setExecuting:(BOOL)arg0;
- (void)setIdentifier:(id)arg0;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (void)setResourceVersion:(id)arg0;

@end
