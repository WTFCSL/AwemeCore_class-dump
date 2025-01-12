//
//     Generated by private class-dump
//

@interface BDSCVideoActionView : UIView {
    BOOL _continuousPlay;
    id /* block */ _changeClarityBlock;
    id /* block */ _closeCastBlock;
    id /* block */ _continuePlayChange;
}

@property (nonatomic) BOOL continuousPlay;
@property (copy, nonatomic) id /* block */ changeClarityBlock;
@property (copy, nonatomic) id /* block */ closeCastBlock;
@property (copy, nonatomic) id /* block */ continuePlayChange;

- (void)setContinuousPlay:(BOOL)arg0;
- (BOOL)continuousPlay;
- (void)updateClarityGreyMode:(BOOL)arg0;
- (void)updateClarityTitle:(id)arg0;
- (void)updateContinueGreyMode:(BOOL)arg0;
- (void)updateCloseGreyMode:(BOOL)arg0;
- (void)setCloseCastBlock:(id /* block */)arg0;
- (void)setContinuePlayChange:(id /* block */)arg0;
- (void)setChangeClarityBlock:(id /* block */)arg0;
- (id /* block */)changeClarityBlock;
- (id /* block */)closeCastBlock;
- (void)updateBigStyle:(BOOL)arg0;
- (id /* block */)continuePlayChange;
- (void).cxx_destruct;

@end
