//
//     Generated by private class-dump
//

@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenWannaHotListModel : AWEBaseDataModel {
    NSString *_icon;
    NSString *_hotWords;
    NSString *_schema;
    AWECodeGenUrlModel *_coverModel;
}

@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *hotWords;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWECodeGenUrlModel *coverModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCoverModel:(id)arg0;
- (id)coverModel;
- (id)hotWords;
- (void)setHotWords:(id)arg0;
- (void)setSchema:(id)arg0;
- (id)icon;
- (void).cxx_destruct;
- (void)setIcon:(id)arg0;
- (id)schema;

@end
