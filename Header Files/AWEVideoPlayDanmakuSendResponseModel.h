//
//     Generated by private class-dump
//

@class NSString;

@interface AWEVideoPlayDanmakuSendResponseModel : AWEBaseApiModel {
    NSString *_danmakuId;
    NSString *_text;
    NSString *_iconUrl;
    NSString *_statusmsg;
    long long _statuscode;
}

@property (copy, nonatomic) NSString *danmakuId;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *statusmsg;
@property (nonatomic) long long statuscode;

+ (id)JSONKeyPathsByPropertyKey;

- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (id)danmakuId;
- (void)setDanmakuId:(id)arg0;
- (long long)statuscode;
- (void)setStatuscode:(long long)arg0;
- (id)statusmsg;
- (void)setStatusmsg:(id)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)text;

@end
