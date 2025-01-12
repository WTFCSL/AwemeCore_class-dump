//
//     Generated by private class-dump
//

@class NSString, TMNetworkSubscriberContext, NSURLComponents, NSDictionary;

@interface SECNativeNetModel : NSObject <SECNetTrafficProtocol> {
    NSURLComponents *_URLComponents;
    NSDictionary *_requestDataTags;
    BOOL _requestTagsFlag;
    TMNetworkSubscriberContext *_netContext;
    NSString *_netType;
}

@property (retain, nonatomic) TMNetworkSubscriberContext *netContext;
@property (copy, nonatomic) NSString *netType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)reportParams;
- (void)setNetType:(id)arg0;
- (id)rulerParams;
- (id)URLPath;
- (id)purifiedURL;
- (id)URLQuery;
- (id)reportExtra;
- (void)resolveRequestTag;
- (id)requestDataTags;
- (id)netContext;
- (void)setNetContext:(id)arg0;
- (id)URLString;
- (id)requestBody;
- (void).cxx_destruct;
- (id)URLComponents;
- (id)URLScheme;
- (id)URLHost;
- (id)netType;
- (id)requestHeader;

@end
