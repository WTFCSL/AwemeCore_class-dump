//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIMDouyinRedPacketShareWithResponse : AWEBaseApiModel {
    NSString *_shareText;
    long long _imMsgType;
}

@property (copy, nonatomic) NSString *shareText;
@property (nonatomic) long long imMsgType;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)imMsgType;
- (void)setImMsgType:(long long)arg0;
- (void).cxx_destruct;
- (id)shareText;
- (void)setShareText:(id)arg0;

@end
