//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIMEmojiAuthor : MTLModel <MTLJSONSerializing, AWEIMEmojiAuthorProtocol> {
    BOOL _notFromAweme;
    NSString *_secUid;
    NSString *_name;
    NSString *_descrip;
    NSString *_avatarUrl;
}

@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *descrip;
@property (copy, nonatomic) NSString *avatarUrl;
@property (nonatomic) BOOL notFromAweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)secUid;
- (void)setAvatarUrl:(id)arg0;
- (void)setSecUid:(id)arg0;
- (id)avatarUrl;
- (id)descrip;
- (void)setDescrip:(id)arg0;
- (BOOL)notFromAweme;
- (void)setNotFromAweme:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (id)name;

@end