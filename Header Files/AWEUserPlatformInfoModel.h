//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUserPlatformInfoModel : MTLModel <MTLJSONSerializing> {
    BOOL _hasUser;
    NSString *_platformAvatar;
    NSString *_platformUserName;
}

@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) NSString *platformAvatar;
@property (retain, nonatomic) NSString *platformUserName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setHasUser:(BOOL)arg0;
- (id)platformAvatar;
- (void)setPlatformAvatar:(id)arg0;
- (id)platformUserName;
- (void)setPlatformUserName:(id)arg0;
- (void).cxx_destruct;
- (BOOL)hasUser;

@end
