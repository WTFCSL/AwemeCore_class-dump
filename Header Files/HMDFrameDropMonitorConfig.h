//
//     Generated by private class-dump
//

@interface HMDFrameDropMonitorConfig : HMDMonitorConfig {
    BOOL _enableUploadStaticRecord;
}

@property (nonatomic) BOOL enableUploadStaticRecord;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (BOOL)enableUploadStaticRecord;
- (void)setEnableUploadStaticRecord:(BOOL)arg0;

@end
