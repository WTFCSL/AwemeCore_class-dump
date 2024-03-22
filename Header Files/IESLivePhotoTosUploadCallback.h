//
//     Generated by private class-dump
//

@class NSString, UIImage;

@interface IESLivePhotoTosUploadCallback : NSObject {
    long long _status;
    NSString *_statusMsg;
    NSString *_uri;
    NSString *_frameBase64;
    UIImage *_uploadImage;
}

@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *frameBase64;
@property (retain, nonatomic) UIImage *uploadImage;

- (id)statusMsg;
- (void)setStatusMsg:(id)arg0;
- (id)uploadImage;
- (id)frameBase64;
- (void)setFrameBase64:(id)arg0;
- (void)setUploadImage:(id)arg0;
- (void).cxx_destruct;
- (long long)status;
- (void)setStatus:(long long)arg0;
- (void)setUri:(id)arg0;
- (id)uri;

@end
