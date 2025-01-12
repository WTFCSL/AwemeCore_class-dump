//
//     Generated by private class-dump
//

@class BDImageXUploaderClient, NSString, NSMutableDictionary;
@protocol NLEProduceKitComponentProtocol, NLEProduceKitComponentPrivateProtocol;

@interface NLEProduceKitUploadComponent : NSObject <NLEProduceKitComponentPrivateProtocol, NLEProduceKitComponentProtocol, BDImageXUploadClientDelegate> {
    BOOL _passThroughInput;
    id<NLEProduceKitComponentProtocol, NLEProduceKitComponentPrivateProtocol> _nextComponent;
    NSMutableDictionary *_input;
    id /* block */ _completion;
    BDImageXUploaderClient *_imageUploadClient;
    NSString *_zipPath;
    id /* block */ _originFramesBlock;
    NSString *_domain;
}

@property (retain, nonatomic) BDImageXUploaderClient *imageUploadClient;
@property (retain, nonatomic) NSString *zipPath;
@property (copy, nonatomic) id /* block */ originFramesBlock;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) id<NLEProduceKitComponentProtocol, NLEProduceKitComponentPrivateProtocol> nextComponent;
@property (retain, nonatomic) NSMutableDictionary *input;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL passThroughInput;

- (void)imageXUpload:(id)arg0 fileIndex:(long long)arg1 singleImage:(id)arg2 error:(id)arg3;
- (void)imageXUploadDidFinish:(id)arg0;
- (id)checkInput;
- (BOOL)passThroughInput;
- (void)start:(id)arg0 withResultBlock:(id /* block */)arg1;
- (void)setPassThroughInput:(BOOL)arg0;
- (void)inputToProperty;
- (void)startWithResultBlock:(id /* block */)arg0;
- (void)setOriginFramesBlock:(id /* block */)arg0;
- (void)setImageUploadClient:(id)arg0;
- (id)imageUploadClient;
- (void)setZipPath:(id)arg0;
- (id)zipPath;
- (void)initUploader:(id)arg0;
- (id /* block */)originFramesBlock;
- (id)initWithDomain:(id)arg0 framesCallback:(id /* block */)arg1;
- (void)addInputWithfilePath:(id)arg0;
- (id)input;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)addInput:(id)arg0;
- (void)setInput:(id)arg0;
- (void)setResultBlock:(id /* block */)arg0;
- (void)setCompletion:(id /* block */)arg0;
- (id)domain;
- (id)componentDescription;
- (void)work;
- (void)start;
- (void)setDomain:(id)arg0;
- (id)nextComponent;
- (void)setNextComponent:(id)arg0;

@end
