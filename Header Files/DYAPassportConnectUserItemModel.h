//
//     Generated by private class-dump
//

@class NSString;

@interface DYAPassportConnectUserItemModel : MTLModel <MTLJSONSerializing> {
    long long _aid;
    NSString *_avatarUrl;
    NSString *_screenName;
    NSString *_desc;
}

@property (nonatomic) long long aid;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *screenName;
@property (copy, nonatomic) NSString *desc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setAvatarUrl:(id)arg0;
- (id)avatarUrl;
- (id)desc;
- (void).cxx_destruct;
- (void)setDesc:(id)arg0;
- (id)screenName;
- (void)setScreenName:(id)arg0;
- (void)setAid:(long long)arg0;
- (long long)aid;

@end
