//
//     Generated by private class-dump
//

@class NSString;

@interface SECPiperReportConfigItem : NSObject {
    NSString *_name;
    NSString *_cel;
    NSString *_cacheKey;
    NSString *_cacheName;
    unsigned long long _sampleRate;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *cel;
@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSString *cacheName;
@property (nonatomic) unsigned long long sampleRate;

- (void)setCel:(id)arg0;
- (id)cel;
- (id)cacheKey;
- (void)setCacheKey:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)sampleRate;
- (id)initWithDictionary:(id)arg0;
- (void)setName:(id)arg0;
- (id)cacheName;
- (id)name;
- (void)setSampleRate:(unsigned long long)arg0;
- (void)setCacheName:(id)arg0;

@end
