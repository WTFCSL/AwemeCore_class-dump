//
//     Generated by private class-dump
//

@class NSArray, NSString, UIFont;

@interface AWEPLVCardDescAuthorElement : AWEPLVCardDescBaseElement {
    NSArray *_avatarImageUrl;
    NSString *_name;
    UIFont *_font;
}

@property (retain, nonatomic) NSArray *avatarImageUrl;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) UIFont *font;

- (id)avatarImageUrl;
- (void)setAvatarImageUrl:(id)arg0;
- (void)configName:(id)arg0 font:(id)arg1 size:(long long)arg2;
- (void)configAvatarImageWithUrlArray:(id)arg0;
- (void)applyView:(id)arg0;
- (void).cxx_destruct;
- (Class)viewClass;
- (id)font;
- (void)setName:(id)arg0;
- (void)setFont:(id)arg0;
- (long long)elementType;
- (id)name;

@end
