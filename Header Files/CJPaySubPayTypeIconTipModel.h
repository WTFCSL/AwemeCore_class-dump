//
//     Generated by private class-dump
//

@class NSString, NSArray;
@protocol CJPaySubPayTypeIconTipInfoModel;

@interface CJPaySubPayTypeIconTipModel : JSONModel {
    NSString *_title;
    NSArray<CJPaySubPayTypeIconTipInfoModel> *_contentList;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray<CJPaySubPayTypeIconTipInfoModel> *contentList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;
- (id)contentList;
- (void)setContentList:(id)arg0;

@end
