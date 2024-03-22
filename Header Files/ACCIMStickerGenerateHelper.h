//
//     Generated by private class-dump
//

@class NSTimer;

@interface ACCIMStickerGenerateHelper : NSObject {
    BOOL _cancelAIGenerate;
    NSTimer *_requestAITimer;
}

@property (retain, nonatomic) NSTimer *requestAITimer;
@property (nonatomic) BOOL cancelAIGenerate;

+ (id)imageForGenerateFromVideoAsset:(id)arg0;

- (id)compressImage:(id)arg0;
- (void)requestAIGenerateTextWithImage:(id)arg0 complete:(id /* block */)arg1;
- (id)requestAITimer;
- (void)setCancelAIGenerate:(BOOL)arg0;
- (void)trackPerformance:(id)arg0;
- (void)setRequestAITimer:(id)arg0;
- (BOOL)cancelAIGenerate;
- (void).cxx_destruct;

@end
