//
//     Generated by private class-dump
//

@class NSString;

@interface AWEManageVideoCommentAreaSettingItemModel : NSObject {
    BOOL _isSwitchButton;
    long long _type;
    NSString *_title;
    NSString *_iconImageName;
    NSString *_svgIconImageName;
    NSString *_subIconImageName;
    NSString *_commentSwitchKey;
    id /* block */ _subIconTapped;
    id /* block */ _switchButtonTapped;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconImageName;
@property (copy, nonatomic) NSString *svgIconImageName;
@property (copy, nonatomic) NSString *subIconImageName;
@property (nonatomic) BOOL isSwitchButton;
@property (copy, nonatomic) NSString *commentSwitchKey;
@property (copy, nonatomic) id /* block */ subIconTapped;
@property (copy, nonatomic) id /* block */ switchButtonTapped;

- (id)svgIconImageName;
- (void)setSvgIconImageName:(id)arg0;
- (id)subIconImageName;
- (void)setSubIconImageName:(id)arg0;
- (BOOL)isSwitchButton;
- (void)setIsSwitchButton:(BOOL)arg0;
- (id)commentSwitchKey;
- (void)setCommentSwitchKey:(id)arg0;
- (id /* block */)subIconTapped;
- (void)setSubIconTapped:(id /* block */)arg0;
- (id /* block */)switchButtonTapped;
- (void)setSwitchButtonTapped:(id /* block */)arg0;
- (void).cxx_destruct;
- (long long)type;
- (id)iconImageName;
- (id)title;
- (void)setType:(long long)arg0;
- (void)setIconImageName:(id)arg0;
- (void)setTitle:(id)arg0;

@end
