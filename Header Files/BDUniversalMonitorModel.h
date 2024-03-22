//
//     Generated by private class-dump
//

@class NSString;

@interface BDUniversalMonitorModel : MMMatrixBaseModel {
    BOOL _needImagesInfo;
    unsigned long long _monitorType;
    unsigned long long _reportType;
    NSString *_fullPath;
    NSString *_path;
}

@property (nonatomic) unsigned long long monitorType;
@property (nonatomic) unsigned long long reportType;
@property (nonatomic) BOOL needImagesInfo;
@property (copy, nonatomic) NSString *fullPath;
@property (copy, nonatomic) NSString *path;

- (void)setMonitorType:(unsigned long long)arg0;
- (void)setNeedImagesInfo:(BOOL)arg0;
- (unsigned long long)monitorType;
- (BOOL)needImagesInfo;
- (void)setPath:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)reportType;
- (id)path;
- (void)setReportType:(unsigned long long)arg0;
- (id)fullPath;
- (void)setFullPath:(id)arg0;

@end
