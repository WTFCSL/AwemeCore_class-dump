//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayDyPayMethodAdjustCellViewModel : CJPayBaseListViewModel {
    BOOL _isInFoldStatus;
    id /* block */ _clickBlock;
    NSString *_addBankCardFoldDesc;
}

@property (nonatomic) BOOL isInFoldStatus;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) NSString *addBankCardFoldDesc;

- (void)setClickBlock:(id /* block */)arg0;
- (id /* block */)clickBlock;
- (Class)getViewClass;
- (id)addBankCardFoldDesc;
- (void)setAddBankCardFoldDesc:(id)arg0;
- (void)setIsInFoldStatus:(BOOL)arg0;
- (BOOL)isInFoldStatus;
- (void).cxx_destruct;
- (double)viewHeight;

@end
