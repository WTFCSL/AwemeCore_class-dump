//
//     Generated by private class-dump
//

@class AWEAwemeModel;

@interface AWEFeedMultiDevicePlayInfoModel : NSObject {
    AWEAwemeModel *_awemeModelNeedsSync;
    long long _playTime;
    long long _recordType;
    long long _uploadScene;
    long long _deviceID;
    long long _userID;
    long long _fromeDeviceType;
    long long _receiveType;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModelNeedsSync;
@property (nonatomic) long long playTime;
@property (nonatomic) long long recordType;
@property (nonatomic) long long uploadScene;
@property (nonatomic) long long deviceID;
@property (nonatomic) long long userID;
@property (nonatomic) long long fromeDeviceType;
@property (nonatomic) long long receiveType;

- (void)setPlayTime:(long long)arg0;
- (id)awemeModelNeedsSync;
- (void)setAwemeModelNeedsSync:(id)arg0;
- (long long)uploadScene;
- (void)setUploadScene:(long long)arg0;
- (long long)fromeDeviceType;
- (void)setFromeDeviceType:(long long)arg0;
- (long long)receiveType;
- (void)setReceiveType:(long long)arg0;
- (long long)userID;
- (void)setDeviceID:(long long)arg0;
- (void)setRecordType:(long long)arg0;
- (void).cxx_destruct;
- (long long)deviceID;
- (long long)recordType;
- (long long)playTime;
- (void)setUserID:(long long)arg0;

@end
