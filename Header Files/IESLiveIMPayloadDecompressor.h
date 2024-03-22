//
//     Generated by private class-dump
//

@class NSData, NSString;
@protocol IESLiveIMDecoder;

@interface IESLiveIMPayloadDecompressor : NSObject <IESLiveIMDecoder> {
    id<IESLiveIMDecoder> nextDecoder;
    NSData *_zstdDictData;
    NSString *_zstdDictVersion;
}

@property (retain, nonatomic) NSData *zstdDictData;
@property (copy, nonatomic) NSString *zstdDictVersion;
@property (retain, nonatomic) id<IESLiveIMDecoder> nextDecoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)decode:(id)arg0 completion:(id /* block */)arg1;
- (id)zstdDictVersion;
- (id)zstdDictData;
- (void)setZstdDictData:(id)arg0;
- (void)setZstdDictVersion:(id)arg0;
- (void)setNextDecoder:(id)arg0;
- (id)nextDecoder;
- (void).cxx_destruct;

@end
