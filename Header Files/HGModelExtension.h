//
//     Generated by private class-dump
//

@class NSArray, NSString, HGLaunchAppSceneConfig, HGUniqueID;

@interface HGModelExtension : NSObject <NSCoding> {
    BOOL _awemeAllowFollowCallback;
    BOOL _privacyConfigured;
    HGUniqueID *_uniqueID;
    NSArray *_shareChannelBlockList;
    NSString *_awemeUid;
    NSString *_awemeSecUid;
    HGLaunchAppSceneConfig *_launchAppSceneConfig;
    NSString *_bodyName;
    long long _bodyType;
}

@property (retain, nonatomic) HGUniqueID *uniqueID;
@property (retain, nonatomic) NSArray *shareChannelBlockList;
@property (copy, nonatomic) NSString *awemeUid;
@property (copy, nonatomic) NSString *awemeSecUid;
@property (nonatomic) BOOL awemeAllowFollowCallback;
@property (retain, nonatomic) HGLaunchAppSceneConfig *launchAppSceneConfig;
@property (nonatomic) BOOL privacyConfigured;
@property (copy, nonatomic) NSString *bodyName;
@property (nonatomic) long long bodyType;

+ (id)modelCustomPropertyMapper;
+ (void)updateWithUniqueID:(id)arg0 completion:(id /* block */)arg1;
+ (id)modelExtensionWithUniqueID:(id)arg0;

- (id)shareChannelBlockList;
- (id)awemeUid;
- (id)awemeSecUid;
- (BOOL)awemeAllowFollowCallback;
- (id)launchAppSceneConfig;
- (id)bodyName;
- (BOOL)isShieldPage:(id)arg0 query:(id)arg1;
- (void)setShareChannelBlockList:(id)arg0;
- (void)setAwemeUid:(id)arg0;
- (void)setAwemeSecUid:(id)arg0;
- (void)setAwemeAllowFollowCallback:(BOOL)arg0;
- (void)setLaunchAppSceneConfig:(id)arg0;
- (void)setPrivacyConfigured:(BOOL)arg0;
- (void)setBodyName:(id)arg0;
- (BOOL)privacyConfigured;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (void)setBodyType:(long long)arg0;
- (long long)bodyType;

@end