//
//     Generated by private class-dump
//

@class NSString;

@interface AWELeftSideBarShowLeftSideBarEntrancePopViewParameterModel : NSObject {
    NSString *_businessId;
    NSString *_showText;
    id /* block */ _completion;
    id /* block */ _clickBlock;
    id /* block */ _dismissBlock;
}

@property (copy, nonatomic) NSString *businessId;
@property (copy, nonatomic) NSString *showText;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (void)setClickBlock:(id /* block */)arg0;
- (id /* block */)clickBlock;
- (void)setShowText:(id)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (id)businessId;
- (void)setBusinessId:(id)arg0;
- (id)showText;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end
