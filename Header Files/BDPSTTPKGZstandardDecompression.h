//
//     Generated by private class-dump
//

@class NSString;

@interface BDPSTTPKGZstandardDecompression : NSObject <BDPSTTPKGDecompressionProtocol> {
    struct ZSTD_DCtx_s { } *decompressionContext;
    unsigned long long buffInSize;
    void *buffIn;
    unsigned long long buffOutSize;
    void *buffOut;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)process:(id)arg0 error:(id *)arg1;
- (id)initWithError:(id *)arg0;
- (unsigned long long)compressionType;
- (void)dealloc;

@end
