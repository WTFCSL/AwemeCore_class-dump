//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSDictionary, NSURL, NSString;
@protocol BDSchemaMonitorProtocol;

@interface BDSchemaData : NSObject <BDSchemaMutableDataProtocol> {
    NSURL *_originUrl;
    NSString *_scheme;
    NSString *_host;
    NSString *_path;
    NSString *_fragment;
    NSString *_uniqueUrl;
    NSDictionary *_info;
    double _parseTimeStamp;
    NSMutableDictionary *_converterTimeStamp;
    NSMutableDictionary *_errorConverters;
    double _generateTimeStamp;
    NSMutableDictionary *_errorValues;
    id<BDSchemaMonitorProtocol> _monitor;
    NSMutableDictionary *_levelData;
    NSMutableDictionary *_sourceData;
    NSDictionary *_parseResult;
    NSDictionary *_parseMetric;
}

@property (retain, nonatomic) NSDictionary *info;
@property (nonatomic) double parseTimeStamp;
@property (retain, nonatomic) NSMutableDictionary *converterTimeStamp;
@property (retain, nonatomic) NSMutableDictionary *errorConverters;
@property (nonatomic) double generateTimeStamp;
@property (retain, nonatomic) NSMutableDictionary *errorValues;
@property (retain, nonatomic) id<BDSchemaMonitorProtocol> monitor;
@property (retain, nonatomic) NSMutableDictionary *levelData;
@property (retain, nonatomic) NSMutableDictionary *sourceData;
@property (copy, nonatomic) NSDictionary *parseResult;
@property (copy, nonatomic) NSDictionary *parseMetric;
@property (readonly, nonatomic) NSURL *originUrl;
@property (readonly, copy, nonatomic) NSString *scheme;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) NSString *fragment;
@property (copy, nonatomic) NSString *uniqueUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)originUrl;
- (void)addParam:(id)arg0 value:(id)arg1 cover:(BOOL)arg2;
- (void)setOriginUrl:(id)arg0;
- (id)getStringValue:(id)arg0;
- (void)generateModelBegin:(id)arg0;
- (void)generateModelEnd:(id)arg0;
- (void)logWithMessage:(id)arg0;
- (void)removeParam:(id)arg0;
- (void)setUniqueUrl:(id)arg0;
- (void)markValueError:(id)arg0 forKey:(id)arg1;
- (id)levelData;
- (double)__timeStampInMS;
- (id)parseMetric;
- (id)parseResult;
- (id)uniqueUrl;
- (id)initWithUrl:(id)arg0 monitor:(id)arg1;
- (void)setStringValue:(id)arg0 forKey:(id)arg1 withLevel:(unsigned long long)arg2;
- (void)parseUrlBegin;
- (void)parseUrlEnd:(BOOL)arg0;
- (void)markConvertError:(id)arg0 withName:(id)arg1;
- (void)runInterceptorBegin:(id)arg0;
- (void)runInterceptorEnd:(id)arg0;
- (void)reportConvertResult;
- (double)parseTimeStamp;
- (void)setParseTimeStamp:(double)arg0;
- (id)converterTimeStamp;
- (void)setConverterTimeStamp:(id)arg0;
- (id)errorConverters;
- (void)setErrorConverters:(id)arg0;
- (double)generateTimeStamp;
- (void)setGenerateTimeStamp:(double)arg0;
- (id)errorValues;
- (void)setErrorValues:(id)arg0;
- (void)setLevelData:(id)arg0;
- (void)setParseResult:(id)arg0;
- (void)setParseMetric:(id)arg0;
- (void)setPath:(id)arg0;
- (id)queryItems;
- (void)setScheme:(id)arg0;
- (id)info;
- (void)updateWithDictionary:(id)arg0;
- (void).cxx_destruct;
- (id)monitor;
- (void)setFragment:(id)arg0;
- (id)scheme;
- (void)setMonitor:(id)arg0;
- (id)path;
- (void)setInfo:(id)arg0;
- (id)host;
- (void)setStringValue:(id)arg0 forKey:(id)arg1;
- (void)updateWithData:(id)arg0;
- (id)fragment;
- (id)url;
- (id)sourceData;
- (id)initWithUrl:(id)arg0;
- (void)setSourceData:(id)arg0;

@end
