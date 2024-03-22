//
//     Generated by private class-dump
//

@class IESECCommentSKUContext, NSString, IESECCommentSKUViewModel, UIView, IESECCommentNewSKUView;
@protocol IESECCommentNewSKUDelegate;

@interface IESECCommentNewSKUViewController : UIViewController <IESECCommentNewSKUViewDelegate> {
    id<IESECCommentNewSKUDelegate> _delegate;
    IESECCommentSKUContext *_skuContext;
    IESECCommentNewSKUView *_skuView;
    IESECCommentSKUViewModel *_skuModel;
    UIView *_containerView;
}

@property (retain, nonatomic) IESECCommentSKUContext *skuContext;
@property (retain, nonatomic) IESECCommentNewSKUView *skuView;
@property (retain, nonatomic) IESECCommentSKUViewModel *skuModel;
@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<IESECCommentNewSKUDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapDismiss;
- (double)popoverContentHeight;
- (void)tapCloseButton:(id)arg0;
- (void)tapContainerView;
- (void)clearRecord;
- (id)skuView;
- (void)setSkuView:(id)arg0;
- (void)removeFromParentViewWithClearRecord:(BOOL)arg0;
- (id)initWithSKUContext:(id)arg0;
- (void)tapResetButton:(id)arg0;
- (void)tapConfirmWithSKUParams:(id)arg0;
- (id)skuModel;
- (id)skuContext;
- (void)setSkuContext:(id)arg0;
- (void)setSkuModel:(id)arg0;
- (void)dismiss;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)delegate;
- (id)containerView;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;

@end