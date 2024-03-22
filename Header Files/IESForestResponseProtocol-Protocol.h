//
//     Generated by private class-dump
//

@class NSString, NSDate;

@protocol IESForestResponseProtocol <NSObject>

@property (retain, nonatomic) NSDate *expiredDate;
@property (readonly, copy, nonatomic) NSString *fetcher;
@property (copy, nonatomic) NSString *debugInfo;

- (id)expiredDate;
- (void)setExpiredDate:(id)arg0;
- (long long)sourceType;
- (id)bundle;
- (id)channel;
- (id)data;
- (id)debugInfo;
- (unsigned long long)version;
- (id)fetcher;
- (id)sourceUrl;
- (id)accessKey;
- (void)setDebugInfo:(id)arg0;
- (id)absolutePath;

@end
