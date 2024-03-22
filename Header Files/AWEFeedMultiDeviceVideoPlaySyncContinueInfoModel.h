//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFeedMultiDeviceVideoPlaySyncContinueInfoModel : MTLModel <MTLJSONSerializing> {
    int _fromDeviceType;
    int _recordType;
    long long _userID;
    long long _itemID;
    long long _itemType;
    long long _playTime;
    NSString *_cover;
    long long _fromDeviceID;
    long long _uploadScene;
}

@property (nonatomic) long long userID;
@property (nonatomic) long long itemID;
@property (nonatomic) long long itemType;
@property (nonatomic) long long playTime;
@property (retain, nonatomic) NSString *cover;
@property (nonatomic) long long fromDeviceID;
@property (nonatomic) int fromDeviceType;
@property (nonatomic) int recordType;
@property (nonatomic) long long uploadScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)cover;
- (void)setCover:(id)arg0;
- (void)setPlayTime:(long long)arg0;
- (long long)uploadScene;
- (void)setUploadScene:(long long)arg0;
- (long long)fromDeviceID;
- (int)fromDeviceType;
- (void)setFromDeviceID:(long long)arg0;
- (void)setFromDeviceType:(int)arg0;
- (long long)userID;
- (long long)itemType;
- (void)setItemType:(long long)arg0;
- (void)setRecordType:(int)arg0;
- (void).cxx_destruct;
- (int)recordType;
- (long long)playTime;
- (void)setUserID:(long long)arg0;
- (long long)itemID;
- (void)setItemID:(long long)arg0;

@end