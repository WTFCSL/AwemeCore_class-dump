//
//     Generated by private class-dump
//

@class NSDate, NSString, IESForestEventTrackData, IESForestRequest, NSData, NSURLResponse, UIImage;

@interface IESForestResponse : NSObject <IESForestResponseProtocol> {
    IESForestRequest *_request;
    NSString *_accessKey;
    NSString *_channel;
    NSString *_bundle;
    long long _version;
    NSData *_data;
    NSURLResponse *_nsURLResponse;
    UIImage *_image;
    long long _sourceType;
    NSString *_sourceUrl;
    NSString *_rawUrl;
    NSString *_absolutePath;
    NSDate *_expiredDate;
    NSString *_fetcher;
    NSString *_debugInfo;
    NSString *_cacheKey;
    IESForestEventTrackData *_eventTrackData;
}

@property (retain, nonatomic) IESForestEventTrackData *eventTrackData;
@property (retain, nonatomic) IESForestRequest *request;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSData *data;
@property (retain, nonatomic) NSURLResponse *nsURLResponse;
@property (copy, nonatomic) UIImage *image;
@property (nonatomic) long long sourceType;
@property (copy, nonatomic) NSString *sourceUrl;
@property (copy, nonatomic) NSString *rawUrl;
@property (copy, nonatomic) NSString *absolutePath;
@property (readonly, copy, nonatomic) NSString *resolvedURL;
@property (retain, nonatomic) NSDate *expiredDate;
@property (copy, nonatomic) NSString *fetcher;
@property (copy, nonatomic) NSString *debugInfo;
@property (copy, nonatomic) NSString *cacheKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)responseWithResponse:(id)arg0;

- (id)expiredDate;
- (void)setExpiredDate:(id)arg0;
- (BOOL)isFromMemory;
- (id)eventTrackData;
- (id)rawUrl;
- (void)setNsURLResponse:(id)arg0;
- (void)setRawUrl:(id)arg0;
- (id)nsURLResponse;
- (void)setEventTrackData:(id)arg0;
- (id)cacheKey;
- (void)setSourceType:(long long)arg0;
- (long long)sourceType;
- (id)bundle;
- (id)channel;
- (id)resolvedURL;
- (id)initWithRequest:(id)arg0;
- (id)data;
- (void)setCacheKey:(id)arg0;
- (void)setVersion:(long long)arg0;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (BOOL)isSuccess;
- (void)setBundle:(id)arg0;
- (id)image;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setData:(id)arg0;
- (void)setRequest:(id)arg0;
- (id)debugInfo;
- (id)request;
- (long long)version;
- (void)setImage:(id)arg0;
- (id)fetcher;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg0;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (void)setDebugInfo:(id)arg0;
- (void)setFetcher:(id)arg0;
- (id)absolutePath;
- (void)setAbsolutePath:(id)arg0;
- (id)sourceTypeDescription;

@end
