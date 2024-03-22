//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEIMSwiftImpl.GroupManagerOperationLogItem : MTLModel <MTLJSONSerializing> {
    void /* unknown type, empty encoding */ uid;
    void /* unknown type, empty encoding */ secUid;
    void /* unknown type, empty encoding */ nickname;
    void /* unknown type, empty encoding */ avatar;
    void /* unknown type, empty encoding */ createTimeDescription;
    void /* unknown type, empty encoding */ createTime;
    void /* unknown type, empty encoding */ roleTagType;
    void /* unknown type, empty encoding */ operation;
    void /* unknown type, empty encoding */ textTemplates;
}

@property (nonatomic, copy) NSString *uid;
@property (nonatomic, copy) NSString *secUid;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, retain) void /* unknown type, empty encoding */ avatar;
@property (nonatomic, copy) NSString *createTimeDescription;
@property (nonatomic) void /* unknown type, empty encoding */ createTime;
@property (nonatomic) void /* unknown type, empty encoding */ roleTagType;
@property (nonatomic, copy) NSString *operation;
@property (nonatomic, copy) NSArray *textTemplates;

+ (id)avatarJSONTransformer;
+ (id)textTemplatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)secUid;
- (id)createTimeDescription;
- (void)setCreateTimeDescription:(id)arg0;
- (long long)roleTagType;
- (void)setRoleTagType:(long long)arg0;
- (id)textTemplates;
- (void)setTextTemplates:(id)arg0;
- (void)setSecUid:(id)arg0;
- (void)setUid:(id)arg0;
- (void)setOperation:(id)arg0;
- (id)operation;
- (id)uid;
- (id)init;
- (id)nickname;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (void)setCreateTime:(double)arg0;
- (void)setNickname:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (double)createTime;
- (id)avatar;
- (void)setAvatar:(id)arg0;

@end