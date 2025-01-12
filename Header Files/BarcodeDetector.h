//
//     Generated by private class-dump
//

@class VNDetectBarcodesRequest;

@interface BarcodeDetector : NSObject {
    BOOL _isProcessing;
    BOOL _isMultiCodeDetected;
    VNDetectBarcodesRequest *_request;
    id /* block */ _resultCallback;
    struct __CVBuffer { } *_currentPixelBuffer;
}

@property (retain, nonatomic) VNDetectBarcodesRequest *request;
@property (nonatomic) BOOL isProcessing;
@property (copy, nonatomic) id /* block */ resultCallback;
@property (nonatomic) struct __CVBuffer { } *currentPixelBuffer;
@property (nonatomic) BOOL isMultiCodeDetected;

- (void)setIsMultiCodeDetected:(BOOL)arg0;
- (id)initWithCodeType:(long long)arg0 completion:(id /* block */)arg1;
- (void)detectBarcodesInCVPixelBuffer:(struct __CVBuffer { } *)arg0;
- (BOOL)isMultiCodeDetected;
- (void)setIsProcessing:(BOOL)arg0;
- (void)p_cleanCachedPixelBuffer;
- (void)p_holdPixelBuffer:(struct __CVBuffer { } *)arg0;
- (void).cxx_destruct;
- (void)setRequest:(id)arg0;
- (id)request;
- (void)dealloc;
- (BOOL)isProcessing;
- (id /* block */)resultCallback;
- (void)setResultCallback:(id /* block */)arg0;
- (struct __CVBuffer { } *)currentPixelBuffer;
- (void)setCurrentPixelBuffer:(struct __CVBuffer { } *)arg0;

@end
