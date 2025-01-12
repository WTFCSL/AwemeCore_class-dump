//
//     Generated by private class-dump
//

@class NSString;

@interface CSJLoadingInfo : NSObject <NSCoding> {
    long long _if_playable_loading_show;
    long long _remove_loading_page_type;
    long long _playable_loading_style;
    NSString *_playable_loading_img_url;
    NSString *_playable_loading_icon_url;
    NSString *_playable_loading_tips;
}

@property (nonatomic) long long if_playable_loading_show;
@property (nonatomic) long long remove_loading_page_type;
@property (nonatomic) long long playable_loading_style;
@property (copy, nonatomic) NSString *playable_loading_img_url;
@property (copy, nonatomic) NSString *playable_loading_icon_url;
@property (copy, nonatomic) NSString *playable_loading_tips;

- (void)setIf_playable_loading_show:(long long)arg0;
- (void)setRemove_loading_page_type:(long long)arg0;
- (void)setPlayable_loading_style:(long long)arg0;
- (void)setPlayable_loading_img_url:(id)arg0;
- (void)setPlayable_loading_icon_url:(id)arg0;
- (void)setPlayable_loading_tips:(id)arg0;
- (long long)playable_loading_style;
- (id)playable_loading_img_url;
- (id)playable_loading_icon_url;
- (id)playable_loading_tips;
- (long long)if_playable_loading_show;
- (long long)remove_loading_page_type;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;

@end
