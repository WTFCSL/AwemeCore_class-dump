//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFeedFollowGuideFreqCheckResponse : AWEBaseApiModel {
    BOOL _passCheck;
    NSString *_notPassReason;
}

@property (nonatomic) BOOL passCheck;
@property (copy, nonatomic) NSString *notPassReason;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)passCheck;
- (void)setPassCheck:(BOOL)arg0;
- (id)notPassReason;
- (void)setNotPassReason:(id)arg0;
- (void).cxx_destruct;

@end
