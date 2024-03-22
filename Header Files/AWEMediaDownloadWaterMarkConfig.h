//
//     Generated by private class-dump
//

@class AWEAwemeModel;

@interface AWEMediaDownloadWaterMarkConfig : NSObject {
    AWEAwemeModel *model;
    unsigned long long _watermarkTaskType;
}

@property (nonatomic) unsigned long long watermarkTaskType;

+ (id)configWithAwemeModel:(id)arg0 downloadType:(unsigned long long)arg1;
+ (id)watermarkConfigMap;

- (id)edgeDataWithFileURL:(id)arg0;
- (BOOL)canDirectAddVideoheaderWithFileURL:(id)arg0;
- (struct CGSize { double x0; double x1; })outputSizeWithFileURL:(id)arg0;
- (unsigned long long)watermarkTaskType;
- (void)setWatermarkTaskType:(unsigned long long)arg0;
- (void).cxx_destruct;

@end