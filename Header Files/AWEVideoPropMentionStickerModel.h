//
//     Generated by private class-dump
//

@class NSString;

@interface AWEVideoPropMentionStickerModel : MTLModel <MTLJSONSerializing> {
    BOOL _showSticker;
    BOOL _showTitle;
    float _centerX;
    float _centerY;
    float _startTime;
    float _endTime;
    long long _mentionID;
    NSString *_userID;
    NSString *_nickName;
    NSString *_secUserID;
}

@property (nonatomic) long long mentionID;
@property (nonatomic) float centerX;
@property (nonatomic) float centerY;
@property (nonatomic) float startTime;
@property (nonatomic) float endTime;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *secUserID;
@property (nonatomic) BOOL showSticker;
@property (nonatomic) BOOL showTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (long long)mentionID;
- (BOOL)showSticker;
- (id)initWithDTOMentionInfo:(id)arg0;
- (id)dtoPropMentionStickerInfo;
- (void)setShowSticker:(BOOL)arg0;
- (void)setMentionID:(long long)arg0;
- (id)userID;
- (BOOL)showTitle;
- (id)init;
- (void)setNickName:(id)arg0;
- (void)setStartTime:(float)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setUserID:(id)arg0;
- (float)endTime;
- (float)startTime;
- (id)nickName;
- (void)setEndTime:(float)arg0;
- (void)setShowTitle:(BOOL)arg0;
- (float)centerX;
- (float)centerY;
- (void)setCenterX:(float)arg0;
- (void)setCenterY:(float)arg0;

@end
