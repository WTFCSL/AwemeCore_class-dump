//
//     Generated by private class-dump
//

@class NSString, TTKNaviCategoryTabPromotion;

@interface TTKNaviBaseTabModel : NSObject {
    NSString *_tabTitle;
    NSString *_tabKey;
    NSString *_highTab;
    TTKNaviCategoryTabPromotion *_promotion;
    id _data;
}

@property (copy, nonatomic) NSString *tabTitle;
@property (copy, nonatomic) NSString *tabKey;
@property (copy, nonatomic) NSString *highTab;
@property (retain, nonatomic) TTKNaviCategoryTabPromotion *promotion;
@property (retain, nonatomic) id data;

- (id)promotion;
- (void)setTabKey:(id)arg0;
- (id)highTab;
- (void)setHighTab:(id)arg0;
- (void)setPromotion:(id)arg0;
- (id)tabTitle;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)tabKey;
- (void)setTabTitle:(id)arg0;

@end