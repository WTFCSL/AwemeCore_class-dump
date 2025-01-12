//
//     Generated by private class-dump
//

@class NSString, NSDate;

@interface TTHttpResponseTimingInfo : NSObject {
    BOOL _isSocketReused;
    BOOL _isCached;
    BOOL _isFromProxy;
    char _cacheStatus;
    unsigned short _remotePort;
    NSDate *_start;
    long long _proxy;
    long long _dns;
    long long _connect;
    long long _ssl;
    long long _send;
    long long _wait;
    long long _receive;
    long long _total;
    long long _receivedResponseContentLength;
    long long _totalReceivedBytes;
    NSString *_remoteIP;
}

@property (readonly, nonatomic) NSDate *start;
@property (readonly, nonatomic) long long proxy;
@property (readonly, nonatomic) long long dns;
@property (readonly, nonatomic) long long connect;
@property (readonly, nonatomic) long long ssl;
@property (readonly, nonatomic) long long send;
@property (readonly, nonatomic) long long wait;
@property (readonly, nonatomic) long long receive;
@property (readonly, nonatomic) long long total;
@property (readonly, nonatomic) long long receivedResponseContentLength;
@property (readonly, nonatomic) long long totalReceivedBytes;
@property (readonly, nonatomic) BOOL isSocketReused;
@property (readonly, nonatomic) BOOL isCached;
@property (readonly, nonatomic) BOOL isFromProxy;
@property (readonly, nonatomic) char cacheStatus;
@property (readonly, copy, nonatomic) NSString *remoteIP;
@property (readonly, nonatomic) unsigned short remotePort;

- (long long)ssl;
- (id)remoteIP;
- (BOOL)isSocketReused;
- (BOOL)isFromProxy;
- (long long)receivedResponseContentLength;
- (long long)totalReceivedBytes;
- (char)cacheStatus;
- (long long)send;
- (long long)connect;
- (long long)total;
- (long long)proxy;
- (void).cxx_destruct;
- (unsigned short)remotePort;
- (long long)wait;
- (id)start;
- (BOOL)isCached;
- (long long)receive;
- (long long)dns;

@end
