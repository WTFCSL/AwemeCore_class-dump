//
//     Generated by private class-dump
//

@class NSString;

@interface AWEVideoMergeTransParam : NSObject {
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *identifier;

+ (id)p_customVideoBitrate:(id)arg0;
+ (struct CGSize { double x0; double x1; })p_customVideoVideoSize:(id)arg0 defaultSize:(struct CGSize { double x0; double x1; })arg1;
+ (id)watermark;
+ (id)merge;

- (id)logTag;
- (void)configTransParam:(id)arg0 withPublishViewModel:(id)arg1 preview:(id)arg2 videoData:(id)arg3 transConfig:(id)arg4 videoProcess:(id)arg5 speedModel:(id)arg6 completion:(id /* block */)arg7;
- (void)p_configTransParam:(id)arg0;
- (void)p_fixEdgeTargetSizeIfNeed:(id)arg0 withPublishModel:(id)arg1 customSize:(struct CGSize { double x0; double x1; })arg2;
- (void)p_logVideoOutputSettings:(id)arg0 withPublishModel:(id)arg1;
- (struct CGSize { double x0; double x1; })maxLimitResolution:(id)arg0;
- (void).cxx_destruct;
- (id)identifier;
- (void)setIdentifier:(id)arg0;

@end
