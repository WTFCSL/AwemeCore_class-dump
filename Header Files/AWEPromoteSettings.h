//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEPromoteSettings : AWEBaseApiModel {
    NSNumber *_enable;
    NSNumber *_popupLimit;
    NSNumber *_popupInterval;
    NSString *_title;
    NSString *_message;
    NSString *_content;
    NSString *_linkText;
    NSString *_popupURL;
    NSNumber *_clickType;
}

@property (retain, nonatomic) NSNumber *enable;
@property (retain, nonatomic) NSNumber *popupLimit;
@property (retain, nonatomic) NSNumber *popupInterval;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *linkText;
@property (copy, nonatomic) NSString *popupURL;
@property (retain, nonatomic) NSNumber *clickType;

+ (id)JSONKeyPathsByPropertyKey;

- (id)clickType;
- (void)setClickType:(id)arg0;
- (id)popupInterval;
- (void)setPopupInterval:(id)arg0;
- (id)popupURL;
- (void)setPopupURL:(id)arg0;
- (long long)confirmClickType;
- (id)popupLimit;
- (void)setPopupLimit:(id)arg0;
- (void)setMessage:(id)arg0;
- (id)enable;
- (void).cxx_destruct;
- (id)content;
- (id)message;
- (id)title;
- (void)setContent:(id)arg0;
- (void)setEnable:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)linkText;
- (void)setLinkText:(id)arg0;

@end