//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;

@interface AWEPermissionDownloadContext : NSObject <AWEPermissionContext> {
    unsigned long long _entranceType;
    AWEAwemeModel *_aweme;
    unsigned long long _downloadType;
}

@property (nonatomic) unsigned long long entranceType;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) unsigned long long downloadType;
@property (nonatomic) long long sceneType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweme;
- (void)setAweme:(id)arg0;
- (unsigned long long)entranceType;
- (void)setEntranceType:(unsigned long long)arg0;
- (unsigned long long)downloadType;
- (void).cxx_destruct;
- (void)setDownloadType:(unsigned long long)arg0;

@end