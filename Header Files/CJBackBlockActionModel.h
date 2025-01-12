//
//     Generated by private class-dump
//

@class NSString;

@interface CJBackBlockActionModel : JSONModel {
    NSString *_title;
    long long _action;
    NSString *_fontWeight;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long action;
@property (copy, nonatomic) NSString *fontWeight;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (void).cxx_destruct;
- (id)fontWeight;
- (id)title;
- (void)setAction:(long long)arg0;
- (void)setFontWeight:(id)arg0;
- (long long)action;
- (void)setTitle:(id)arg0;

@end
