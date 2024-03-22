//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSDate, NSMutableArray;
@protocol BDCastGCDWebServerBodyReader;

@interface BDCastGCDWebServerResponse : NSObject <BDCastGCDWebServerBodyReader> {
    BOOL _opened;
    NSMutableArray *_encoders;
    id<BDCastGCDWebServerBodyReader> _reader;
    BOOL _gzipContentEncodingEnabled;
    NSString *_contentType;
    unsigned long long _contentLength;
    long long _statusCode;
    unsigned long long _cacheControlMaxAge;
    NSDate *_lastModifiedDate;
    NSString *_eTag;
    NSDictionary *_additionalHeaders;
}

@property (readonly, nonatomic) NSDictionary *additionalHeaders;
@property (readonly, nonatomic) BOOL usesChunkedTransferEncoding;
@property (copy, nonatomic) NSString *contentType;
@property (nonatomic) unsigned long long contentLength;
@property (nonatomic) long long statusCode;
@property (nonatomic) unsigned long long cacheControlMaxAge;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSString *eTag;
@property (nonatomic, getter=isGZipContentEncodingEnabled) BOOL gzipContentEncodingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)responseWithRedirect:(id)arg0 permanent:(BOOL)arg1;
+ (id)response;
+ (id)responseWithStatusCode:(long long)arg0;

- (void)setCacheControlMaxAge:(unsigned long long)arg0;
- (void)setValue:(id)arg0 forAdditionalHeader:(id)arg1;
- (void)prepareForReading;
- (BOOL)usesChunkedTransferEncoding;
- (void)performClose;
- (void)performReadDataWithCompletion:(id /* block */)arg0;
- (BOOL)isGZipContentEncodingEnabled;
- (void)setGzipContentEncodingEnabled:(BOOL)arg0;
- (id)initWithRedirect:(id)arg0 permanent:(BOOL)arg1;
- (long long)statusCode;
- (void)setContentType:(id)arg0;
- (void)setStatusCode:(long long)arg0;
- (id)contentType;
- (id)init;
- (void).cxx_destruct;
- (id)lastModifiedDate;
- (id)eTag;
- (void)setLastModifiedDate:(id)arg0;
- (void)close;
- (BOOL)hasBody;
- (BOOL)open:(id *)arg0;
- (void)setContentLength:(unsigned long long)arg0;
- (unsigned long long)contentLength;
- (id)description;
- (void)setETag:(id)arg0;
- (id)readData:(id *)arg0;
- (id)additionalHeaders;
- (unsigned long long)cacheControlMaxAge;
- (id)initWithStatusCode:(long long)arg0;
- (BOOL)performOpen:(id *)arg0;

@end
