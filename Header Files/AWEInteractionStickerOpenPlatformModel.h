//
//     Generated by private class-dump
//

@class NSString;

@interface AWEInteractionStickerOpenPlatformModel : NSObject {
    BOOL _shouldShowBubble;
    NSString *_jumpTitle;
    NSString *_jumpH5Url;
    NSString *_jumpMicroAppUrl;
    long long _jumpType;
}

@property (copy, nonatomic) NSString *jumpTitle;
@property (copy, nonatomic) NSString *jumpH5Url;
@property (copy, nonatomic) NSString *jumpMicroAppUrl;
@property (nonatomic) BOOL shouldShowBubble;
@property (nonatomic) long long jumpType;

- (long long)jumpType;
- (void)setJumpType:(long long)arg0;
- (BOOL)shouldShowBubble;
- (void)setShouldShowBubble:(BOOL)arg0;
- (id)jumpTitle;
- (void)setJumpTitle:(id)arg0;
- (void)setJumpMicroAppUrl:(id)arg0;
- (void)setJumpH5Url:(id)arg0;
- (id)jumpH5Url;
- (id)jumpMicroAppUrl;
- (void).cxx_destruct;

@end
