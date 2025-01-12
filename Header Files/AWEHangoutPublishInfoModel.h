//
//     Generated by private class-dump
//

@class UIImage, NSString, AWEPublishBaseTask;

@interface AWEHangoutPublishInfoModel : MTLModel <MTLJSONSerializing> {
    BOOL _isSelfPublish;
    AWEPublishBaseTask *_publishTask;
    UIImage *_localCoverImage;
    unsigned long long _publishState;
    double _uploadProgress;
}

@property (nonatomic) BOOL isSelfPublish;
@property (retain, nonatomic) AWEPublishBaseTask *publishTask;
@property (retain, nonatomic) UIImage *localCoverImage;
@property (nonatomic) unsigned long long publishState;
@property (nonatomic) double uploadProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsSelfPublish:(BOOL)arg0;
- (id)localCoverImage;
- (BOOL)isSelfPublish;
- (id)publishTask;
- (void)setPublishState:(unsigned long long)arg0;
- (void)setLocalCoverImage:(id)arg0;
- (void)setPublishTask:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)publishState;
- (double)uploadProgress;
- (void)setUploadProgress:(double)arg0;

@end
