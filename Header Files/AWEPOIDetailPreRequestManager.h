//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSMutableDictionary, AWEGoodsDetailPageContext, AWEDitoViewController;

@interface AWEPOIDetailPreRequestManager : NSObject {
    NSArray *_preRequestArray;
    AWEGoodsDetailPageContext *_context;
    AWEDitoViewController *_viweController;
    NSDictionary *_baseRouterParams;
    NSMutableDictionary *_preRequestDictionary;
}

@property (retain, nonatomic) NSArray *preRequestArray;
@property (weak, nonatomic) AWEGoodsDetailPageContext *context;
@property (weak, nonatomic) AWEDitoViewController *viweController;
@property (weak, nonatomic) NSDictionary *baseRouterParams;
@property (retain, nonatomic) NSMutableDictionary *preRequestDictionary;

- (id)initWithContext:(id)arg0 viweController:(id)arg1 baseRouterParams:(id)arg2 schemeUrls:(id)arg3;
- (void)mergeWithResponseDictionary:(id)arg0;
- (void)ditoExtension:(id)arg0 didReceiveSizeChangeWithViewTag:(id)arg1;
- (id)baseRouterParams;
- (void)setBaseRouterParams:(id)arg0;
- (void)setViweController:(id)arg0;
- (void)setPreRequestArray:(id)arg0;
- (void)setPreRequestDictionary:(id)arg0;
- (void)beginPreRequest;
- (id)preRequestDictionary;
- (id)getBundleWithUrlString:(id)arg0;
- (id)preRequestArray;
- (BOOL)packageIsValidWithChannel:(id)arg0 geockId:(id)arg1;
- (id)generateDictionaryWithSchemaQuery:(id)arg0;
- (id)generateDictionaryWithCommonQuery:(id)arg0;
- (id)initWithContext:(id)arg0 viweController:(id)arg1 baseRouterParams:(id)arg2;
- (id)viweController;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end
