//
//     Generated by private class-dump
//

@class NSDictionary, BDUGLuckyJSONModel;

@interface BDUGLuckyCommonSettingsInfo : BDUGLuckyJSONModel {
    BOOL _needStoreOnDisk;
    long long _version;
    unsigned long long _settingsType;
    double _pollingInterval;
    NSDictionary *_rawData;
    BDUGLuckyJSONModel *_dataModel;
}

@property (nonatomic) long long version;
@property (nonatomic) unsigned long long settingsType;
@property (nonatomic) double pollingInterval;
@property (copy, nonatomic) NSDictionary *rawData;
@property (retain, nonatomic) BDUGLuckyJSONModel *dataModel;
@property (nonatomic) BOOL needStoreOnDisk;

- (BOOL)needStoreOnDisk;
- (id)initWithNeedStoreOnDisk:(BOOL)arg0 pollingInterval:(long long)arg1 settingsType:(unsigned long long)arg2 dataModel:(id)arg3 rawData:(id)arg4 version:(long long)arg5;
- (void)setNeedStoreOnDisk:(BOOL)arg0;
- (void)setVersion:(long long)arg0;
- (void).cxx_destruct;
- (void)setSettingsType:(unsigned long long)arg0;
- (double)pollingInterval;
- (long long)version;
- (id)rawData;
- (void)setRawData:(id)arg0;
- (unsigned long long)settingsType;
- (id)dataModel;
- (void)setDataModel:(id)arg0;
- (void)setPollingInterval:(double)arg0;

@end