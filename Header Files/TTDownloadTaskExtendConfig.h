//
//     Generated by private class-dump
//

@class NSString;

@interface TTDownloadTaskExtendConfig : JSONModel {
    NSString *_etag;
    NSString *_lastModifiedTime;
    NSString *_maxAgeTime;
    NSString *_startDownloadTime;
    NSString *_componentId;
}

@property (copy) NSString *etag;
@property (copy) NSString *lastModifiedTime;
@property (copy) NSString *maxAgeTime;
@property (copy) NSString *startDownloadTime;
@property (copy) NSString *componentId;

+ (BOOL)propertyIsOptional:(id)arg0;

- (id)componentId;
- (void)setComponentId:(id)arg0;
- (id)startDownloadTime;
- (void)setStartDownloadTime:(id)arg0;
- (void)setLastModifiedTime:(id)arg0;
- (void)setMaxAgeTime:(id)arg0;
- (id)maxAgeTime;
- (void)updateConfig:(id)arg0 lastModified:(id)arg1 etag:(id)arg2 startDownloadTime:(id)arg3 componentId:(id)arg4;
- (void).cxx_destruct;
- (id)etag;
- (void)dealloc;
- (void)setEtag:(id)arg0;
- (id)lastModifiedTime;

@end