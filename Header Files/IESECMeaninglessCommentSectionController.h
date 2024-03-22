//
//     Generated by private class-dump
//

@class IESECGoodsCommentContext, NSString, IESECCommentDataController, IESECCommentDetailModel, IESECCommentEvaluatorView;

@interface IESECMeaninglessCommentSectionController : IGListSectionController <IGListSupplementaryViewSource, IESECCommentEvaluatorDelegate> {
    IESECCommentDataController *_dataController;
    IESECGoodsCommentContext *_context;
    IESECCommentDetailModel *_model;
    IESECCommentEvaluatorView *_evaluatorView;
}

@property (retain, nonatomic) IESECCommentDetailModel *model;
@property (retain, nonatomic) IESECCommentEvaluatorView *evaluatorView;
@property (weak, nonatomic) IESECCommentDataController *dataController;
@property (retain, nonatomic) IESECGoodsCommentContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataController:(id)arg0;
- (id)cellForItemAtIndex:(long long)arg0;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)arg0 atIndex:(long long)arg1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)arg0 atIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg0;
- (void)tapCommentEvaluatorCancel;
- (void)tapCommentEvaluatorEntrance;
- (void)showCommentGuestWindowViewWithDetailModel:(id)arg0;
- (id)evaluatorView;
- (void)showGoodsProductEvaluatorViewWithType:(long long)arg0;
- (void)setEvaluatorView:(id)arg0;
- (long long)numberOfItems;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (id)context;
- (id)dataController;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end
