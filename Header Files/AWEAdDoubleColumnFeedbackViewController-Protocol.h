//
//     Generated by private class-dump
//

@class AWEAdDoubleColumnFeedbackViewModel;
@protocol AWEAdDoubleColumnFeedbackVMProtocol;

@protocol AWEAdDoubleColumnFeedbackViewController <HTSService>

+ (id)creatWithModel:(id)arg0 location:(struct CGPoint { double x0; double x1; })arg1 feedbackBlock:(id /* block */)arg2;

@property (readonly, nonatomic) AWEAdDoubleColumnFeedbackViewModel<AWEAdDoubleColumnFeedbackVMProtocol> *viewModel;

- (Class)collectionViewCellClass;
- (id)viewModel;
- (Class)headerClass;

@end