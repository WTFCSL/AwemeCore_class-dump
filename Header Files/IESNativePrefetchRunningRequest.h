//
//     Generated by private class-dump
//

@class IESPrefetchJSNetworkRequestModel, NSMutableArray;

@interface IESNativePrefetchRunningRequest : NSObject {
    IESPrefetchJSNetworkRequestModel *_request;
    long long _expire;
    NSMutableArray *_callbacks;
}

@property (retain, nonatomic) IESPrefetchJSNetworkRequestModel *request;
@property (nonatomic) long long expire;
@property (retain, nonatomic) NSMutableArray *callbacks;

- (id)callbacks;
- (id)init;
- (void).cxx_destruct;
- (long long)expire;
- (void)setRequest:(id)arg0;
- (id)request;
- (void)setCallbacks:(id)arg0;
- (void)setExpire:(long long)arg0;

@end
