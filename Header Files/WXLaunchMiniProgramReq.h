//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface WXLaunchMiniProgramReq : BaseReq {
    NSString *_userName;
    NSString *_path;
    unsigned long long _miniProgramType;
    NSString *_extMsg;
    NSDictionary *_extDic;
}

@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) unsigned long long miniProgramType;
@property (copy, nonatomic) NSString *extMsg;
@property (copy, nonatomic) NSDictionary *extDic;

+ (id)object;

- (void)setMiniProgramType:(unsigned long long)arg0;
- (unsigned long long)miniProgramType;
- (id)extMsg;
- (void)setExtMsg:(id)arg0;
- (id)extDic;
- (void)setExtDic:(id)arg0;
- (void)setPath:(id)arg0;
- (id)userName;
- (void).cxx_destruct;
- (id)path;
- (void)setUserName:(id)arg0;

@end
