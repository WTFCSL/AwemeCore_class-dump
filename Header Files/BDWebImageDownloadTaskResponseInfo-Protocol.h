//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSDictionary;

@protocol BDWebImageDownloadTaskResponseInfo <NSObject>

@property (readonly, nonatomic) NSNumber *DNSDuration;
@property (readonly, nonatomic) NSNumber *connetDuration;
@property (readonly, nonatomic) NSNumber *sslDuration;
@property (readonly, nonatomic) NSNumber *sendDuration;
@property (readonly, nonatomic) NSNumber *waitDuration;
@property (readonly, nonatomic) NSNumber *receiveDuration;
@property (readonly, nonatomic) NSNumber *totalDuration;
@property (readonly, nonatomic) long long cacheControlTime;
@property (readonly, nonatomic) NSNumber *isSocketReused;
@property (readonly, nonatomic) NSNumber *isFromProxy;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, nonatomic) long long statusCode;
@property (readonly, copy, nonatomic) NSString *nwSessionTrace;
@property (readonly, copy, nonatomic) NSDictionary *responseHeaders;
@property (readonly, nonatomic) NSNumber *isHitCDNCache;
@property (readonly, copy, nonatomic) NSString *imageXDemotion;
@property (readonly, copy, nonatomic) NSString *imageXWantedFormat;
@property (readonly, copy, nonatomic) NSString *imageXRealGotFormat;
@property (readonly, nonatomic) NSNumber *imageXConsistent;
@property (readonly, nonatomic) NSNumber *isCached;
@property (readonly, copy, nonatomic) NSString *remoteIP;
@property (readonly, nonatomic) NSNumber *remotePort;
@property (readonly, copy, nonatomic) NSString *requestLog;

- (id)isSocketReused;
- (id)isFromProxy;
- (id)imageXRealGotFormat;
- (id)connetDuration;
- (id)sslDuration;
- (id)waitDuration;
- (long long)cacheControlTime;
- (id)nwSessionTrace;
- (id)isHitCDNCache;
- (id)imageXDemotion;
- (id)imageXWantedFormat;
- (id)imageXConsistent;
- (long long)statusCode;
- (id)totalDuration;
- (id)DNSDuration;
- (id)mimeType;
- (id)responseHeaders;
- (id)sendDuration;
- (id)receiveDuration;

@optional

- (id)requestLog;
- (id)remoteIP;
- (id)remotePort;
- (id)isCached;

@end
