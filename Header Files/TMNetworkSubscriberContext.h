//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSData, NSError;

@interface TMNetworkSubscriberContext : NSObject {
    unsigned long long _contextType;
    unsigned long long _sourceType;
    NSString *_url;
    NSString *_scheme;
    NSString *_host;
    NSString *_path;
    NSDictionary *_queryItems;
    NSString *_queryString;
    NSDictionary *_allHTTPHeaderFields;
    NSString *_HTTPMethod;
    NSData *_HTTPBody;
    NSDictionary *_cookie;
    NSString *_cookieString;
    NSDictionary *_allHeaderFieldsForResponse;
    long long _statusCode;
    NSString *_MIMEType;
    NSError *_responseError;
    NSData *_responseData;
}

@property (nonatomic) unsigned long long contextType;
@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *scheme;
@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSDictionary *queryItems;
@property (retain, nonatomic) NSString *queryString;
@property (retain, nonatomic) NSDictionary *allHTTPHeaderFields;
@property (copy, nonatomic) NSString *HTTPMethod;
@property (retain, nonatomic) NSData *HTTPBody;
@property (retain, nonatomic) NSDictionary *cookie;
@property (copy, nonatomic) NSString *cookieString;
@property (retain, nonatomic) NSDictionary *allHeaderFieldsForResponse;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *MIMEType;
@property (retain, nonatomic) NSError *responseError;
@property (retain, nonatomic) NSData *responseData;

- (id)valueForHTTPRequestHeaderField:(id)arg0;
- (id)valueForHTTPResponseHeaderField:(id)arg0;
- (id)allHeaderFieldsForResponse;
- (void)setCookieString:(id)arg0;
- (void)setAllHeaderFieldsForResponse:(id)arg0;
- (id)valueForDictionary:(id)arg0 key:(id)arg1;
- (id)cookieString;
- (long long)statusCode;
- (void)setSourceType:(unsigned long long)arg0;
- (unsigned long long)sourceType;
- (void)setHTTPMethod:(id)arg0;
- (void)setContextType:(unsigned long long)arg0;
- (unsigned long long)contextType;
- (void)setStatusCode:(long long)arg0;
- (void)setPath:(id)arg0;
- (void)setResponseData:(id)arg0;
- (id)queryItems;
- (void)setScheme:(id)arg0;
- (void)setHost:(id)arg0;
- (id)responseData;
- (void).cxx_destruct;
- (void)setQueryString:(id)arg0;
- (id)queryString;
- (id)scheme;
- (id)path;
- (void)setUrl:(id)arg0;
- (void)setHTTPBody:(id)arg0;
- (id)host;
- (id)HTTPBody;
- (void)setResponseError:(id)arg0;
- (id)HTTPMethod;
- (id)responseError;
- (id)cookie;
- (id)url;
- (void)setQueryItems:(id)arg0;
- (id)allHTTPHeaderFields;
- (void)setAllHTTPHeaderFields:(id)arg0;
- (id)MIMEType;
- (void)setCookie:(id)arg0;
- (void)setMIMEType:(id)arg0;

@end