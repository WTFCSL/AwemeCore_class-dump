//
//     Generated by private class-dump
//

@class NSString, SECMetrics;

@interface SECRomaLocalProvider : NSObject <SECRomaProvider> {
    SECMetrics *_metrics;
}

@property (retain, nonatomic) SECMetrics *metrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)unzipError:(id *)arg0;
- (id)serializeJSON:(id)arg0 error:(id *)arg1;
- (id)wrongFormatError;
- (id)unzipFailedError;
- (id)fileNotExistError;
- (id)jsonFailedError;
- (id)localInvalidErrorFor:(id)arg0;
- (id)fetchRomaWithError:(id *)arg0;
- (id)metrics;
- (void)setMetrics:(id)arg0;
- (void).cxx_destruct;
- (id)identifier;

@end
