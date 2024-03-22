//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFlashMobButtonViewModel : MTLModel <MTLJSONSerializing> {
    NSString *_buttonIconUrl;
    NSString *_buttonIconColor;
    NSString *_buttonTextColor;
    NSString *_buttonBgColor;
}

@property (retain, nonatomic) NSString *buttonIconUrl;
@property (retain, nonatomic) NSString *buttonIconColor;
@property (retain, nonatomic) NSString *buttonTextColor;
@property (retain, nonatomic) NSString *buttonBgColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setButtonBgColor:(id)arg0;
- (id)buttonBgColor;
- (id)buttonIconUrl;
- (void)setButtonIconUrl:(id)arg0;
- (id)buttonIconColor;
- (void)setButtonIconColor:(id)arg0;
- (void).cxx_destruct;
- (id)buttonTextColor;
- (void)setButtonTextColor:(id)arg0;

@end
