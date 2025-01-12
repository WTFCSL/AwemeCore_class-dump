//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveLinkRTCInteractClientUtils : NSObject {
    NSString *_lastestAppId;
}

@property (copy, nonatomic) NSString *lastestAppId;

+ (id)convertToJsonData:(id)arg0;
+ (struct __CVBuffer { } *)createDarkFrameWithFrameSize:(struct CGSize { double x0; double x1; })arg0 enableLeakFix:(BOOL)arg1;
+ (id)setPriorityForUrl:(id)arg0;
+ (struct __CVBuffer { } *)copyPixelBufferWithPixelBuffer:(struct __CVBuffer { } *)arg0;
+ (id)getDefaultLayout:(id)arg0;
+ (id)modifyLocation:(id)arg0 withWidth:(int)arg1 withHeight:(int)arg2;
+ (id)copyWithLayout:(id)arg0 withWaterMark:(id)arg1;
+ (id)taskIdGenerate:(BOOL)arg0;
+ (id)getPlayModeDescription:(long long)arg0;
+ (id)parseStreamName:(id)arg0;
+ (id)convertPublicStreaming:(id)arg0;
+ (id)convertVideoCanvas:(id)arg0;
+ (long long)convertVideoSinkPixelFormat:(long long)arg0;
+ (id)convertVideoFrameInfo:(id)arg0;
+ (unsigned long long)convertByteNetworkQuality:(unsigned long long)arg0;
+ (unsigned long long)transferRenderMode:(unsigned long long)arg0;
+ (id)convertData:(struct __CVBuffer { } *)arg0 width:(unsigned long long)arg1 height:(unsigned long long)arg2;
+ (id)getRtcVendorName:(long long)arg0;
+ (id)copyWithLayout:(id)arg0;
+ (id)shareInstance;

- (void)setLastestAppId:(id)arg0;
- (id)lastestAppId;
- (void).cxx_destruct;

@end
