//
//     Generated by private class-dump
//

@class NSString;

@interface AWERankListItemModel : NSObject {
    NSString *_value;
    NSString *_extra;
    NSString *_openId;
    NSString *_secUid;
    NSString *_userImg;
    NSString *_nickName;
    long long _priority;
    unsigned long long _dataType;
}

@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *openId;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *userImg;
@property (copy, nonatomic) NSString *nickName;
@property (nonatomic) long long priority;
@property (nonatomic) unsigned long long dataType;

+ (id)modelCustomPropertyMapper;

- (void)setExtra:(id)arg0;
- (id)secUid;
- (void)setSecUid:(id)arg0;
- (id)openId;
- (void)setOpenId:(id)arg0;
- (id)userImg;
- (void)setUserImg:(id)arg0;
- (void)setDataType:(unsigned long long)arg0;
- (void)setNickName:(id)arg0;
- (void).cxx_destruct;
- (id)value;
- (void)setPriority:(long long)arg0;
- (id)extra;
- (unsigned long long)dataType;
- (id)nickName;
- (void)setValue:(id)arg0;
- (long long)priority;

@end
