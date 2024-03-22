//
//     Generated by private class-dump
//

@class BU_AFHTTPResponseSerializer, BU_AFHTTPRequestSerializer, NSURL, BU_AFSecurityPolicy;
@protocol BU_AFURLRequestSerialization, BU_AFURLResponseSerialization;

@interface BU_AFHTTPSessionManager : BU_AFURLSessionManager <NSSecureCoding, NSCopying> {
    NSURL *_baseURL;
    BU_AFHTTPRequestSerializer<BU_AFURLRequestSerialization> *_requestSerializer;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) BU_AFHTTPRequestSerializer<BU_AFURLRequestSerialization> *requestSerializer;
@property (retain, nonatomic) BU_AFHTTPResponseSerializer<BU_AFURLResponseSerialization> *responseSerializer;
@property (retain, nonatomic) BU_AFSecurityPolicy *securityPolicy;

+ (BOOL)supportsSecureCoding;
+ (id)manager;

- (void)setResponseSerializer:(id)arg0;
- (void)setRequestSerializer:(id)arg0;
- (id)requestSerializer;
- (id)GET:(id)arg0 parameters:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (id)POST:(id)arg0 parameters:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (id)initWithBaseURL:(id)arg0 sessionConfiguration:(id)arg1;
- (id)GET:(id)arg0 parameters:(id)arg1 progress:(id /* block */)arg2 success:(id /* block */)arg3 failure:(id /* block */)arg4;
- (id)dataTaskWithHTTPMethod:(id)arg0 URLString:(id)arg1 parameters:(id)arg2 uploadProgress:(id /* block */)arg3 downloadProgress:(id /* block */)arg4 success:(id /* block */)arg5 failure:(id /* block */)arg6;
- (id)POST:(id)arg0 parameters:(id)arg1 progress:(id /* block */)arg2 success:(id /* block */)arg3 failure:(id /* block */)arg4;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)initWithBaseURL:(id)arg0;
- (id)baseURL;
- (void)setBaseURL:(id)arg0;
- (void)setSecurityPolicy:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (id)description;
- (void)encodeWithCoder:(id)arg0;
- (id)initWithSessionConfiguration:(id)arg0;

@end