//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSMutableDictionary, UIView, UIViewController;

@interface IESECMarketingManagerBuilder : NSObject {
    UIViewController *_pageVC;
    UIView *_pageContaier;
    NSString *_pageData;
    NSDictionary *_pageExtra;
    NSDictionary *_pageCommonLog;
    id /* block */ _customOpenBlock;
    NSMutableDictionary *_ritMap;
}

@property (readonly, nonatomic) id /* block */ setPage;
@property (readonly, nonatomic) id /* block */ setPageData;
@property (readonly, nonatomic) id /* block */ setPageContainer;
@property (readonly, nonatomic) id /* block */ setPageParams;
@property (readonly, nonatomic) id /* block */ setPageCustomOpenBlock;
@property (readonly, nonatomic) id /* block */ addRitContainer;
@property (readonly, nonatomic) id /* block */ addRitLayoutInfo;
@property (readonly, nonatomic) id /* block */ addRitParams;
@property (weak, nonatomic) UIViewController *pageVC;
@property (weak, nonatomic) UIView *pageContaier;
@property (copy, nonatomic) NSString *pageData;
@property (copy, nonatomic) NSDictionary *pageExtra;
@property (copy, nonatomic) NSDictionary *pageCommonLog;
@property (copy, nonatomic) id /* block */ customOpenBlock;
@property (retain, nonatomic) NSMutableDictionary *ritMap;

- (id)pageVC;
- (void)setPageVC:(id)arg0;
- (id /* block */)setPage;
- (id /* block */)setPageData;
- (id /* block */)setPageContainer;
- (id /* block */)setPageParams;
- (id /* block */)setPageCustomOpenBlock;
- (id /* block */)addRitLayoutInfo;
- (id /* block */)customOpenBlock;
- (void)setRitMap:(id)arg0;
- (id)ritMap;
- (void)setCustomOpenBlock:(id /* block */)arg0;
- (id)pageContaier;
- (id)pageExtra;
- (id)pageCommonLog;
- (void)setPageContaier:(id)arg0;
- (void)setPageExtra:(id)arg0;
- (void)setPageCommonLog:(id)arg0;
- (id)getAndInsertRitInfo:(id)arg0;
- (id /* block */)addRitContainer;
- (id /* block */)addRitParams;
- (id)init;
- (void).cxx_destruct;
- (id)pageData;
- (void)setPageData:(id)arg0;

@end