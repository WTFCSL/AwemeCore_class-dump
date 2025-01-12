//
//     Generated by private class-dump
//

@class NSString;

@interface BDPStarkCoreInfo : NSObject {
    BOOL _enabled;
    BOOL _isUseTmg;
    int _version;
    NSString *_url;
    NSString *_md5;
    NSString *_urlV2;
    NSString *_md5V2;
    NSString *_frontendEnableVersion;
}

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) int version;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL isUseTmg;
@property (retain, nonatomic) NSString *urlV2;
@property (retain, nonatomic) NSString *md5V2;
@property (copy, nonatomic) NSString *frontendEnableVersion;

- (id)urlV2;
- (void)setUrlV2:(id)arg0;
- (BOOL)isUseTmg;
- (void)setIsUseTmg:(BOOL)arg0;
- (id)md5V2;
- (void)setMd5V2:(id)arg0;
- (id)frontendEnableVersion;
- (void)setFrontendEnableVersion:(id)arg0;
- (BOOL)enabled;
- (void)setVersion:(int)arg0;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (int)version;
- (void)setEnabled:(BOOL)arg0;
- (id)url;
- (id)md5;
- (void)setMd5:(id)arg0;

@end
