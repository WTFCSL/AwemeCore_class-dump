//
//     Generated by private class-dump
//

@class AWEAwemeModel;

@protocol AWEUserVideoAnalysisViewProtocol <NSObject>

@property (copy, nonatomic) id /* block */ showAnalysisListBlock;
@property (retain, nonatomic) AWEAwemeModel *model;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 inputViewType:(unsigned long long)arg1;
- (void)updateMoreInfomationButtonHidden:(BOOL)arg0;
- (id /* block */)showAnalysisListBlock;
- (void)setShowAnalysisListBlock:(id /* block */)arg0;
- (void)setModel:(id)arg0;
- (id)model;
- (void)updateStatistics:(id)arg0;

@end
