//
//     Generated by private class-dump
//

@class NSString;

@interface AWEBatManEntranceInfo : MTLModel <MTLJSONSerializing> {
    NSString *_buttonColor;
    NSString *_buttonTitle;
    NSString *_stickerInfoURL;
    NSString *_stickerTitle;
    long long _showStickerTime;
}

@property (copy, nonatomic) NSString *buttonColor;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *stickerInfoURL;
@property (copy, nonatomic) NSString *stickerTitle;
@property (nonatomic) long long showStickerTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)stickerInfoURL;
- (void)setStickerInfoURL:(id)arg0;
- (id)stickerTitle;
- (void)setStickerTitle:(id)arg0;
- (long long)showStickerTime;
- (void)setShowStickerTime:(long long)arg0;
- (void).cxx_destruct;
- (void)setButtonColor:(id)arg0;
- (id)buttonColor;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg0;

@end
