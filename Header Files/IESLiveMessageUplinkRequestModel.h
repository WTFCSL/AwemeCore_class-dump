//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface IESLiveMessageUplinkRequestModel : NSObject {
    long long _routeServiceId;
    long long _serviceId;
    NSMutableDictionary *_queryParams;
    NSMutableDictionary *_headers;
    NSString *_uri;
    NSMutableDictionary *_customJson;
}

@property (nonatomic) long long routeServiceId;
@property (nonatomic) long long serviceId;
@property (retain, nonatomic) NSMutableDictionary *queryParams;
@property (retain, nonatomic) NSMutableDictionary *headers;
@property (copy, nonatomic) NSString *uri;
@property (retain, nonatomic) NSMutableDictionary *customJson;

- (void)setCustomJson:(id)arg0;
- (long long)routeServiceId;
- (void)setRouteServiceId:(long long)arg0;
- (id)customJson;
- (void)setHeaders:(id)arg0;
- (void).cxx_destruct;
- (id)headers;
- (id)queryParams;
- (void)setServiceId:(long long)arg0;
- (void)setUri:(id)arg0;
- (long long)serviceId;
- (id)uri;
- (void)setQueryParams:(id)arg0;

@end
