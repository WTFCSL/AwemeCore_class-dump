//
//     Generated by private class-dump
//

@class NSString, NSNumber, AWEFollowListPageContext;

@interface AWEFollowListCategoryModel : AWEBaseApiModel {
    BOOL _enableBadge;
    NSString *_title;
    NSString *_schema;
    NSNumber *_tag;
    NSString *_frequencyControlKey;
    AWEFollowListPageContext *_pageContext;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSNumber *tag;
@property (nonatomic) BOOL enableBadge;
@property (copy, nonatomic) NSString *frequencyControlKey;
@property (retain, nonatomic) AWEFollowListPageContext *pageContext;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)enableBadge;
- (id)frequencyControlKey;
- (void)setFrequencyControlKey:(id)arg0;
- (id)getImageName;
- (id)initWithTitle:(id)arg0 schema:(id)arg1 tag:(id)arg2;
- (void)setupBadgeControl:(int)arg0;
- (void)setEnableBadge:(BOOL)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (void)setTag:(id)arg0;
- (id)tag;
- (id)title;
- (id)schema;
- (void)setTitle:(id)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;

@end
